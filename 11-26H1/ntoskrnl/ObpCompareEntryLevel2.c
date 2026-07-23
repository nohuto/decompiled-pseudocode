/*
 * XREFs of ObpCompareEntryLevel2 @ 0x140AA9110
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall ObpCompareEntryLevel2(unsigned int *a1, __int64 a2)
{
  _QWORD *v3; // rdx
  SIZE_T v5; // rbx

  v3 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)a1 == *v3 )
  {
    v5 = a1[1];
    if ( RtlCompareMemory(a1, v3, v5) == v5 )
      ++*(_DWORD *)(a2 + 28);
  }
  return 1LL;
}
