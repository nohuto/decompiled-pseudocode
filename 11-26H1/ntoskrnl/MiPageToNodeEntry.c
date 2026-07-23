/*
 * XREFs of MiPageToNodeEntry @ 0x1402AEC40
 * Callers:
 *     MiEnqueuePageList @ 0x1402AECA0 (MiEnqueuePageList.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AFDE0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNodeEntry(_QWORD *a1, ULONG_PTR a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = MiSearchNumaNodeTable(a2);
  result = *(unsigned int *)(v3 + 8);
  *a1 = *(_QWORD *)v3;
  if ( (unsigned int)((v3 - (__int64)qword_140E2D860) >> 4) == dword_140E2D804 )
    v5 = -1LL;
  else
    v5 = *(_QWORD *)(v3 + 16) - 1LL;
  a1[1] = v5;
  return result;
}
