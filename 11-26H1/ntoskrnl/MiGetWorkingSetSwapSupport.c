/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1403683CC
 * Callers:
 *     MiOutlawInswaps @ 0x140313C94 (MiOutlawInswaps.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404B3F10 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404D58CC (MmInSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  void *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  v1 = &unk_140E37818;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (void *)(a1 + 216);
  return *(_QWORD *)v1;
}
