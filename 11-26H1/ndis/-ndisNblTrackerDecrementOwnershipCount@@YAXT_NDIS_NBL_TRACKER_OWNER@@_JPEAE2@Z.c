/*
 * XREFs of ?ndisNblTrackerDecrementOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x14003EA90
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A4A70 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerDecrementOwnershipCount(unsigned __int64 a1, unsigned __int64 a2, char *a3, _BYTE *a4)
{
  char v7; // al
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( (a1 & 1) != 0 && a2 )
  {
    v7 = *a3;
    if ( !*a3 && !*a4 )
    {
      *a4 = 1;
      v7 = KeGetCurrentIrql() == 2;
      *a3 = v7;
    }
    v8 = a1;
    v9 = a1 & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = 16 * ((v8 >> 1) & 1);
    if ( v7 )
    {
      v11 = KeGetPcr()->Prcb.Number << 12;
      *(_QWORD *)(v11 + *(_QWORD *)(v10 + v9 + 40)) += a2;
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(v10 + v9 + 48), a2);
    }
  }
}
