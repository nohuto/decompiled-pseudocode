/*
 * XREFs of ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007E130
 * Callers:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009E7B4 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 *     ?ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A3C28 (-ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCleanupUserOpenContext(struct _NDIS_MINIPORT_BLOCK *a1, char *P)
{
  KIRQL v4; // al
  KIRQL v5; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v7; // bp
  __int64 v8; // rcx
  char *v9; // rdi
  char **v10; // rax
  void (__fastcall **BusInterface)(_QWORD); // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  if ( P[24] )
    --a1->NumAdminOpens;
  else
    --a1->NumUserOpens;
  KeReleaseSpinLock(&a1->Ref.SpinLock, v4);
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (a1->Flags & 0x80u) != 0 )
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)P + 11);
  }
  else
  {
    ExFreePoolWithTag(P, 0);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  --a1->UserModeOpenReferences;
  a1->MiniportThread = CurrentThread;
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() && (a1->Flags & 0x80u) != 0 )
  {
    v8 = *((_QWORD *)P + 9);
    v9 = P + 72;
    if ( *(char **)(v8 + 8) != v9 || (v10 = (char **)*((_QWORD *)v9 + 1), *v10 != v9) )
      __fastfail(3u);
    *v10 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v10;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x56u);
  if ( (a1->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a1->BusInterface;
    if ( BusInterface )
      BusInterface[5](BusInterface[1]);
  }
}
