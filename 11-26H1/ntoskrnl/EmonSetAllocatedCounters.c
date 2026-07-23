/*
 * XREFs of EmonSetAllocatedCounters @ 0x1405990E0
 * Callers:
 *     EmonInitializeProfiling @ 0x140BF33D0 (EmonInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonSetAllocatedCounters(int *a1, unsigned int a2)
{
  int v2; // r10d
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v6; // r9

  v2 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  result = 0LL;
  while ( _BitScanForward((unsigned int *)&v6, a2) )
  {
    a2 &= ~(1 << v6);
    result = (unsigned int)v6;
    *(_DWORD *)(v3 + 48 * v6 + 28) = v2;
  }
  a1[2] = result;
  return result;
}
