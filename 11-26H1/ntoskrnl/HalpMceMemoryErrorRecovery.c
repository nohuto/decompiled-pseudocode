/*
 * XREFs of HalpMceMemoryErrorRecovery @ 0x140590CA8
 * Callers:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140590FC0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1405910E4 (HalpMceRecoveryMemoryErrorIntel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMceMemoryErrorRecovery(char a1, char a2, __int64 a3)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx

  v4 = -1073741823;
  v5 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->HalReserved[6] + 32LL);
  if ( v5 )
  {
    if ( a1 )
      *(_DWORD *)v5 |= 9u;
    if ( a2 )
    {
      *(_DWORD *)v5 |= 5u;
      *(_QWORD *)(v5 + 8) = a3;
    }
    v4 = 0;
    if ( (*(_DWORD *)v5 & 0x10) != 0 && !a2 )
      return (unsigned int)-1073741823;
  }
  return v4;
}
