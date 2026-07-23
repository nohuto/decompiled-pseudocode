/*
 * XREFs of HalpMceRecoveryRequired @ 0x14059132C
 * Callers:
 *     HalpMceRecovery @ 0x140590D10 (HalpMceRecovery.c)
 * Callees:
 *     HalpMcaAMDIsMemoryError @ 0x140580C6C (HalpMcaAMDIsMemoryError.c)
 *     HalpMceRecoveryMemoryError @ 0x140590F9C (HalpMceRecoveryMemoryError.c)
 */

__int64 __fastcall HalpMceRecoveryRequired(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  unsigned int v3; // r10d

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = -1073741637;
  if ( *(_DWORD *)(a1 + 4) == 2 )
  {
    if ( HalpMcaAMDIsMemoryError(a1, v2) )
      return (unsigned int)HalpMceRecoveryMemoryError(v1);
  }
  else
  {
    if ( (v2 & 0xEF00) == 0x100 )
      return (unsigned int)HalpMceRecoveryMemoryError(v1);
    if ( (v2 & 0xE800) == 0x800 )
    {
      if ( (v2 & 0x1000) == 0
        && (((unsigned __int16)v2 >> 9) & 3) == 3
        && !((unsigned __int8)v2 >> 4)
        && (((unsigned __int8)v2 >> 2) & 3) == 2
        && (v2 & 3) == 3
        && (v2 & 0x800000000000000LL) == 0 )
      {
        if ( *(_DWORD *)a1 >= 3u )
          *(_DWORD *)(a1 + 272) |= 0x20u;
      }
      else if ( *(_DWORD *)a1 >= 3u )
      {
        *(_DWORD *)(a1 + 272) |= 1u;
      }
    }
  }
  return v3;
}
