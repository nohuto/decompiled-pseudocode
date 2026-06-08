/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x140001800
 * Callers:
 *     CpcSetAutonomousMode @ 0x1400017D0 (CpcSetAutonomousMode.c)
 *     CpcReinitializeHandler @ 0x1400064B0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x140006530 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetTimeWindow @ 0x140006570 (CpcSetTimeWindow.c)
 *     EnableCpcResourcePriorityRegisters @ 0x1400065E4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x140001830 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x140003990 (WriteGenAddrHiddenEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return WriteGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return WriteGenAddrEx(a2, a3);
}
