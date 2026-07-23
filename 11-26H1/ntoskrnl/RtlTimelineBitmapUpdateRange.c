/*
 * XREFs of RtlTimelineBitmapUpdateRange @ 0x140458110
 * Callers:
 *     PoEnergyContextCleanup @ 0x1409CBD6C (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimelineBitmapUpdateRange(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp+8h]

  v9 = *a1;
  v4 = HIDWORD(*a1);
  if ( a3 <= (unsigned int)*a1 )
  {
    result = (unsigned int)v9 - a3;
    if ( (unsigned int)result >= 0x20 )
      return result;
    v6 = 1 << (v9 - a3);
  }
  else
  {
    LODWORD(v9) = a3;
    v5 = a3 - *a1;
    v6 = 1;
    if ( v5 < 0x20 )
      LODWORD(v4) = HIDWORD(v9) << v5;
    else
      LODWORD(v4) = 0;
  }
  v7 = v6 | v4;
  for ( HIDWORD(v9) = v7; a2 < a3; HIDWORD(v9) = v7 )
  {
    v6 *= 2;
    if ( !v6 )
      break;
    v7 |= v6;
    ++a2;
  }
  result = v9;
  *a1 = v9;
  return result;
}
