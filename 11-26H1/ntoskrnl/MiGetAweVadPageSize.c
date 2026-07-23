/*
 * XREFs of MiGetAweVadPageSize @ 0x140B4CA44
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiVadPageTableChargeLevel @ 0x140471E50 (MiVadPageTableChargeLevel.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 */

__int64 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 AweViewPageSize; // r8
  unsigned __int64 LockedVadEvent; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( (MiReadVadFlags(a1) & 0x880000) != 0x880000 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(v1, 0x100u);
    AweViewPageSize = MiGetAweViewPageSize(LockedVadEvent + 24);
    if ( !AweViewPageSize )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( (*(_DWORD *)(v5 + 8) & 1) == 0 )
        return MiPageChainCount(v5);
    }
  }
  return AweViewPageSize;
}
