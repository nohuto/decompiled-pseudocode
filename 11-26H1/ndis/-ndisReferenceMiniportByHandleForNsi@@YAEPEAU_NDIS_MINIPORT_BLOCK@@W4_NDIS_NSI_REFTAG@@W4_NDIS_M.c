/*
 * XREFs of ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400819F0
 * Callers:
 *     ndisIfGetMiniportStatistics @ 0x140153E80 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x140154480 (ndisIfQuerySetMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  char v4; // si
  unsigned __int8 v5; // di
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // r14
  KIRQL v9; // r12
  KIRQL v10; // r15
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v13; // r12
  struct _NDIS_MINIPORT_BLOCK *i; // rax
  KIRQL v15; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp

  v4 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  while ( v8 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
    if ( !v8->Ref.Closing )
    {
      ReferenceCount = v8->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->Ref.RefCountTracker;
        v8->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 7u);
        KeReleaseSpinLock(&v8->Ref.SpinLock, v10);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
        v13 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
        for ( i = v8->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( i == a1 )
          {
            v4 = 1;
            KeAcquireSpinLockAtDpcLevel(&a1->Lock);
            a1->MiniportThread = KeGetCurrentThread();
            if ( (a1->Flags & 0x80200020) == 0
              && (a1->PnPFlags & 0x1084110) == 0
              && a1->PnPDeviceState == NdisPnPDeviceStarted
              && a1->CurrentDevicePowerState == PowerDeviceD0
              && (unsigned __int8)ndisReferenceMiniport(a1, a3) )
            {
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a1->NsiRefCountTracker, a2);
              ++a1->NsiOpenReferences;
              v5 = 1;
            }
            a1->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&a1->Lock);
            break;
          }
        }
        KeReleaseSpinLock(&v8->Ref.SpinLock, v13);
        v15 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v8->NextDriver;
        v9 = v15;
        ndisDereferenceDriver(v8, 1, 7u);
        goto LABEL_19;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    KeReleaseSpinLock(&v8->Ref.SpinLock, v10);
    NextDriver = v8->NextDriver;
LABEL_19:
    v8 = NextDriver;
    if ( v4 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v5;
}
