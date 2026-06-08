/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x140002120
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x1400065E4 (EnableCpcResourcePriorityRegisters.c)
 *     CpcGuaranteedNotifyWorker @ 0x140026A40 (CpcGuaranteedNotifyWorker.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x140042A28 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140002148 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x14000395C (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}
