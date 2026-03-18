/*
 * XREFs of HalpMceRecoveryMemoryError @ 0x14058E81C
 * Callers:
 *     HalpMceRecoveryRequired @ 0x14058EBAC (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x14058E840 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x14058E964 (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryError(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == 1 )
    return HalpMceRecoveryMemoryErrorIntel();
  else
    return HalpMceRecoveryMemoryErrorAmd();
}
