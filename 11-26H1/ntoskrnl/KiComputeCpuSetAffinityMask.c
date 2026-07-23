/*
 * XREFs of KiComputeCpuSetAffinityMask @ 0x1404E0454
 * Callers:
 *     KiIntSteerComputeCpuSet @ 0x140256E54 (KiIntSteerComputeCpuSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeCpuSetAffinityMask(__int64 a1, _QWORD *a2, int a3, unsigned __int64 a4)
{
  __int64 v7; // r8
  unsigned __int64 i; // rbx
  unsigned __int64 v9; // rdx

  while ( (KiCpuSetSequence & 1) != 0 )
    _mm_pause();
  if ( a1 && *a2 == KiCpuSetSequence )
    return *(_QWORD *)a1;
  v7 = 0LL;
  for ( i = a4; i; i &= ~(1LL << v9) )
  {
    _BitScanForward64(&v9, i);
    v7 |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)((a3 << 6) + v9));
  }
  *a2 = KiCpuSetSequence;
  if ( a1 )
    *(_QWORD *)a1 = v7;
  return v7;
}
