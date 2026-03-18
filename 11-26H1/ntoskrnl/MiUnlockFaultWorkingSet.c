/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1404C9904
 * Callers:
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C97C0 (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)a1;
  LOBYTE(a2) = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v3, a2);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v3, a2);
  }
}
