/*
 * XREFs of KeEnableProfiling @ 0x140B5A4B4
 * Callers:
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x14021B160 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiBeginCounterAccumulation @ 0x140494B90 (KiBeginCounterAccumulation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeEnableProfiling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 360) )
    return 3221226243LL;
  Pool2 = ExAllocatePool2(0x41uLL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = a4;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 32) = a3;
  *(_QWORD *)(a1 + 360) = Pool2;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x10u);
  *(_QWORD *)(Pool2 + 24) = KeUpdateTotalCyclesCurrentThread(a1, 0LL);
  if ( (a2 & 1) != 0 || a3 )
  {
    KiBeginCounterAccumulation(a1, 0);
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x11u);
  }
  return 0LL;
}
