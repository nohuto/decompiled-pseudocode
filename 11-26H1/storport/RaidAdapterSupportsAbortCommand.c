/*
 * XREFs of RaidAdapterSupportsAbortCommand @ 0x14002E2F0
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidUnitAllocateResources @ 0x14002D7B4 (RaidUnitAllocateResources.c)
 *     RaidAdapterRequestDirectComplete @ 0x14002E1A8 (RaidAdapterRequestDirectComplete.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSupportsAbortCommand(__int64 a1)
{
  if ( a1 && *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 604) & 0x10;
  else
    return 0;
}
