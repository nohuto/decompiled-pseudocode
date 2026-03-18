/*
 * XREFs of WmipUnregisterEtwProvider @ 0x1409B9198
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x1409B76E0 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     WmipQueueLegacyEtwWork @ 0x1409B8CDC (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 Pool2; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = 1;
      WmipQueueLegacyEtwWork((_QWORD *)Pool2, v1, 0LL);
    }
  }
}
