/*
 * XREFs of NdisCmCloseAddressFamilyComplete @ 0x140041A50
 * Callers:
 *     NdisClCloseAddressFamily @ 0x140070340 (NdisClCloseAddressFamily.c)
 * Callees:
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016DC0 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140041D20 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140041F60 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmCloseAddressFamilyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rdx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v6; // rdx
  KIRQL v7; // bp
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *i; // rcx

  v4 = *((_QWORD *)NdisAfHandle + 47);
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 13))(Status, v4);
  else
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 32))(Status, v4);
  if ( !Status )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisAfHandle + 2);
    v7 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
    v5->MiniportThread = KeGetCurrentThread();
    v8 = *((_QWORD *)NdisAfHandle + 5);
    if ( v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 376));
      LOBYTE(v6) = 16;
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), v6);
    }
    else
    {
      ndisDereferenceMiniportRef(v5, 0x51u);
    }
    for ( i = (_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 1032LL); *i; i = (_QWORD *)*i )
    {
      if ( (NDIS_HANDLE)*i == NdisAfHandle )
      {
        *i = *(_QWORD *)NdisAfHandle;
        break;
      }
    }
    LOBYTE(v9) = 15;
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)NdisAfHandle + 46) + 376LL));
    ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 46), v9);
    v5->MiniportThread = 0LL;
    KeReleaseSpinLock(&v5->Lock, v7);
    ndisDereferenceAf(NdisAfHandle);
  }
}
