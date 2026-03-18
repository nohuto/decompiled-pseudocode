/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1403C4340
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1400A6320 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int result; // eax
  unsigned int v8; // eax

  v4 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a2 ^ v4) < 0 )
  {
    if ( v4 >= 0 )
      return 1;
    return -1;
  }
  v5 = a2[69];
  if ( a1[69] > v5 )
    return 1;
  if ( a1[69] < v5 )
    return -1;
  v6 = a2[7];
  if ( a1[7] > v6 )
    return 1;
  if ( a1[7] < v6 )
    return -1;
  result = memcmp(a1 + 4, a2 + 4, 8uLL);
  if ( result )
    return result;
  v8 = a2[6];
  if ( a1[6] <= v8 )
    return -(a1[6] < v8);
  return 1;
}
