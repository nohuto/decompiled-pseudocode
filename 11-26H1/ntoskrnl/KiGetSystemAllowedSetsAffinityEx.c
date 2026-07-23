/*
 * XREFs of KiGetSystemAllowedSetsAffinityEx @ 0x140440640
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x14022B948 (KiComputeCpuSetAffinity.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiGetSystemAllowedSetsAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, int a3)
{
  unsigned __int16 v3; // r10
  unsigned __int16 result; // ax
  __int64 *v6; // rdx
  __int64 v7; // r11
  __int64 *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = a2;
  if ( a2 > a1[1] )
    v3 = a1[1];
  *a1 = v3;
  result = 0;
  if ( v3 )
  {
    v6 = (__int64 *)(a1 + 4);
    v7 = v3;
    v8 = &KiSystemAllowedCpuSets[a3];
    result = v3;
    do
    {
      v9 = *v8;
      v8 += 2;
      *v6++ = v9;
      --v7;
    }
    while ( v7 );
  }
  for ( ; result < a1[1]; *(_QWORD *)&a1[4 * v10 + 4] = 0LL )
    v10 = result++;
  return result;
}
