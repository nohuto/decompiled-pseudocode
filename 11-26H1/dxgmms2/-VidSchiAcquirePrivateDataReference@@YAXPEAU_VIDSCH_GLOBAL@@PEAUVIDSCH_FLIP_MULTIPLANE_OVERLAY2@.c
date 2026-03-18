/*
 * XREFs of ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140005D20
 * Callers:
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x140017DE4 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAcquirePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // eax
  __int64 v4; // rdx

  for ( i = 0; i < *((_DWORD *)a1 + 40); ++i )
  {
    v4 = *((_QWORD *)a2 + i * (*((_DWORD *)a2 + 2) + 28) + 26);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
}
