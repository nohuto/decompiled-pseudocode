/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x140064B80
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x14008A2F0 (NdisClOpenAddressFamilyEx.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1400D48B0 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1400D7B00 (NdisCoRequestComplete.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  __int64 v5; // rbp
  KIRQL v8; // r12
  NDIS_HANDLE v9; // rdx
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rax
  NDIS_HANDLE v13; // r8
  void *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rcx
  NDIS_STATUS v17; // eax

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  v8 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
  v3->MiniportThread = KeGetCurrentThread();
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v12 = *((_QWORD *)NdisAfHandle + 5);
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x51u);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0xFu);
  }
  else
  {
    *(_QWORD *)NdisAfHandle = *(_QWORD *)(v5 + 1032);
    *(_QWORD *)(v5 + 1032) = NdisAfHandle;
  }
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v8);
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
  {
    v13 = NdisAfHandle;
    if ( Status )
      v13 = 0LL;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v13);
  }
  else
  {
    v9 = NdisAfHandle;
    if ( Status )
      v9 = 0LL;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v9,
      (unsigned int)Status);
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v11 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( !*((_BYTE *)NdisAfHandle + 592) )
  {
    KeReleaseSpinLock(v11, v10);
    if ( !Status )
      return;
LABEL_18:
    ExFreePoolWithTag(NdisAfHandle, 0);
    return;
  }
  v14 = (void *)*((_QWORD *)NdisAfHandle + 73);
  *((_BYTE *)NdisAfHandle + 592) = 0;
  KeReleaseSpinLock(v11, v10);
  v15 = *((_DWORD *)NdisAfHandle + 99);
  if ( Status )
  {
    if ( v15 >= 6 )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v14);
    goto LABEL_18;
  }
  v16 = *((_QWORD *)NdisAfHandle + 47);
  if ( v15 >= 6 )
    v17 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v16);
  else
    v17 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v16, 0LL, 0LL, v14);
  if ( v17 != 259 )
  {
    if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v17);
    else
      NdisCoRequestComplete(v17, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
  }
}
