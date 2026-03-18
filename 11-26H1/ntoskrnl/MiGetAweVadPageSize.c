/*
 * XREFs of MiGetAweVadPageSize @ 0x140B4ACB4
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiVadPageTableChargeLevel @ 0x1404786D0 (MiVadPageTableChargeLevel.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiGetAweViewPageSize @ 0x140477EDC (MiGetAweViewPageSize.c)
 *     MiPageChainCount @ 0x14047AB90 (MiPageChainCount.c)
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
