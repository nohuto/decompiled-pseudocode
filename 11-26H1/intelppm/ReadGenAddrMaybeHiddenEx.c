/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x140001C64
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140008BE4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1400480FC (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140001C90 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x140005D88 (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}
