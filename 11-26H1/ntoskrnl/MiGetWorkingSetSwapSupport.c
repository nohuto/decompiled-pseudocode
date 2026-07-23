/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14036A16C
 * Callers:
 *     MiOutlawInswaps @ 0x140315CC4 (MiOutlawInswaps.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404AD4E0 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  void *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  v1 = &unk_140E37998;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (void *)(a1 + 216);
  return *(_QWORD *)v1;
}
