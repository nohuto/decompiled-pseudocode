/*
 * XREFs of ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400359F0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x140017DE4 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiReleasePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 40); ++i )
  {
    v5 = 8 * i * (*((_DWORD *)a2 + 2) + 28);
    v6 = *(_QWORD *)((char *)a2 + v5 + 208);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)v6 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v6, (PVOID)v6);
        else
          ExFreePoolWithTag((PVOID)v6, 0);
      }
      *(_QWORD *)((char *)a2 + v5 + 208) = 0LL;
    }
  }
}
