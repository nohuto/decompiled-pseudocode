/*
 * XREFs of ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140031F30
 * Callers:
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x140005D64 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140031F58 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400FDA70 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementNumberOfQueuedFlipPerSource(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( *((_BYTE *)a1 + 2500) )
    v2 = 4LL * a2 + 804;
  else
    v2 = 804LL;
  _InterlockedIncrement((volatile signed __int32 *)((char *)a1 + v2));
}
