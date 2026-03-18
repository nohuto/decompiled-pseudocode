/*
 * XREFs of VfDifCaptureDriverEntry @ 0x14049F548
 * Callers:
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403EA5A4 (VfTargetDriversGetNode.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ViDifCaptureDriverEntry @ 0x140B7A72C (ViDifCaptureDriverEntry.c)
 *     ViDifCheckCallbackInterception @ 0x140B7A878 (ViDifCheckCallbackInterception.c)
 */

char __fastcall VfDifCaptureDriverEntry(__int64 a1)
{
  __int64 v3; // rcx
  __int64 Node; // rax
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfDifRunningWithoutReboot && !MmIsDriverVerifying((struct _DRIVER_OBJECT *)a1)
    || !(unsigned __int8)ViDifCheckCallbackInterception(a1) )
  {
    return 0;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
  {
    v7 = *(_OWORD *)(a1 + 56);
    VfUtilDbgPrint(
      "Driver Verifier: No checking on IO callbacks because                          load address of %wZ is unexpected.\n",
      &v7);
    return 0;
  }
  Node = VfTargetDriversGetNode(v3);
  v5 = Node;
  if ( !Node )
    return 0;
  *(_QWORD *)(Node + 40) = a1;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) = Pool2;
  *(_QWORD *)(v5 + 48) = Pool2;
  ViDifCaptureDriverEntry(a1);
  return 1;
}
