/*
 * XREFs of VfDifCaptureDriverEntry @ 0x1403C1800
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ViDifCheckCallbackInterception @ 0x140C26288 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureDriverEntry @ 0x140C2E494 (ViDifCaptureDriverEntry.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 Node; // rax
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfDifRunningWithoutReboot && !MmIsDriverVerifying((struct _DRIVER_OBJECT *)a1)
    || !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
  {
    return 0;
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v6 = *(_OWORD *)(a1 + 56);
    VfUtilDbgPrint(
      "Driver Verifier: No checking on IO callbacks because                          load address of %wZ is unexpected.\n",
      &v6);
    return 0;
  }
  Node = VfTargetDriversGetNode();
  v4 = Node;
  if ( !Node )
    return 0;
  *(_QWORD *)(Node + 40) = a1;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) = Pool2;
  *(_QWORD *)(v4 + 48) = Pool2;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
