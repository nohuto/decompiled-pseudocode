/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1400087B0
 * Callers:
 *     CpcReinitializeHandler @ 0x140008A80 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x140008B00 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x140008B40 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x140008B70 (CpcSetTimeWindow.c)
 *     EnableCpcResourcePriorityRegisters @ 0x140008BE4 (EnableCpcResourcePriorityRegisters.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1400013F8 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x14000877C (WriteGenAddrHiddenEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return WriteGenAddrHiddenEx(*(_DWORD *)(a1 + 84), a2, a3);
  else
    return WriteGenAddrEx(a2, a3);
}
