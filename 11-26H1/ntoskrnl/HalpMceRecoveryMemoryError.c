/*
 * XREFs of HalpMceRecoveryMemoryError @ 0x140590F9C
 * Callers:
 *     HalpMceRecoveryRequired @ 0x14059132C (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140590FC0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1405910E4 (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryError(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    return HalpMceRecoveryMemoryErrorIntel();
  else
    return HalpMceRecoveryMemoryErrorAmd();
}
