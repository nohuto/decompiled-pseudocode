/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x1403C186C
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x14064527C (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     ViDifCheckCallbackInterception @ 0x140C26288 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x140C2672C (ViDifCaptureIoCallbacks.c)
 */

char __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfDifRunningWithoutReboot && !MmIsDriverVerifying((struct _DRIVER_OBJECT *)a1)
    || !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
  {
    return 0;
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_OWORD *)(a1 + 56);
    VfUtilDbgPrint(
      "Driver Verifier: No checking on IO callbacks because                          load address of %wZ is unexpected.\n",
      &v3);
    return 0;
  }
  if ( !VfTargetDriversGetNode() )
    return 0;
  ViDifCaptureIoCallbacks(a1);
  return 1;
}
