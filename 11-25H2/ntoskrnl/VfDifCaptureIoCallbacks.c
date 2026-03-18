/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14049F4E8
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x140605290 (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403EA5A4 (VfTargetDriversGetNode.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     ViDifCaptureIoCallbacks @ 0x140B7A778 (ViDifCaptureIoCallbacks.c)
 *     ViDifCheckCallbackInterception @ 0x140B7A878 (ViDifCheckCallbackInterception.c)
 */

char __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfDifRunningWithoutReboot && !MmIsDriverVerifying((struct _DRIVER_OBJECT *)a1)
    || !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
  {
    return 0;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
  {
    v4 = *(_OWORD *)(a1 + 56);
    VfUtilDbgPrint(
      "Driver Verifier: No checking on IO callbacks because                          load address of %wZ is unexpected.\n",
      &v4);
    return 0;
  }
  if ( !VfTargetDriversGetNode(v3) )
    return 0;
  ViDifCaptureIoCallbacks(a1);
  return 1;
}
