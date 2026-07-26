/*
 * XREFs of ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140042AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x140041380 (-NdisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r14
  unsigned int v4; // r15d
  KIRQL v8; // r13
  KSPIN_LOCK *v9; // rcx
  char v10; // si
  int v11; // ecx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  KIRQL v15; // al

  v3 = 0;
  v4 = 0;
  if ( !a1[556] )
  {
LABEL_2:
    if ( *((int *)a1 + 468) >= 0 || !ndisNoPauseOnSuspend )
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
      goto LABEL_13;
    }
    v8 = 0;
    v9 = a1 + 484;
    if ( (a3 & 1) != 0 )
    {
      v10 = 1;
      KeAcquireSpinLockAtDpcLevel(v9);
    }
    else
    {
      v10 = 0;
      v8 = KeAcquireSpinLockRaiseToDpc(v9);
    }
    v11 = *((_DWORD *)a1 + 970);
    if ( v11 != 2 && (unsigned int)(v11 - 3) > 1 || *((_BYTE *)a1 + 3900) )
    {
      ++*((_DWORD *)a1 + 974);
      v12 = a1 + 484;
      if ( v10 )
        KeReleaseSpinLockFromDpcLevel(v12);
      else
        KeReleaseSpinLock(v12, v8);
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(a1[470] + 192LL))(a1[3], a2, a3);
      v13 = a1 + 484;
      if ( !v10 )
      {
        v15 = KeAcquireSpinLockRaiseToDpc(v13);
        --*((_DWORD *)a1 + 974);
        KeReleaseSpinLock(a1 + 484, v15);
        goto LABEL_13;
      }
      KeAcquireSpinLockAtDpcLevel(v13);
      --*((_DWORD *)a1 + 974);
    }
    else
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(a2, 0LL, a1[488], 1u, 1u);
      NdisLastNblInNblChain(a2)->Link.Alignment = a1[486];
      a1[486] = a2;
      if ( !v10 )
      {
        KeReleaseSpinLock(a1 + 484, v8);
LABEL_13:
        if ( v3 )
          ndisClearBusy(a1, v4, 54LL);
        return;
      }
    }
    KeReleaseSpinLockFromDpcLevel(a1 + 484);
    goto LABEL_13;
  }
  for ( i = a2; i; ++v4 )
    i = (struct _NET_BUFFER_LIST *)i->Link.Alignment;
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54LL, a2, 0) )
  {
    v3 = 1;
    goto LABEL_2;
  }
}
