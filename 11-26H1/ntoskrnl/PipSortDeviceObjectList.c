/*
 * XREFs of PipSortDeviceObjectList @ 0x1409B2DD8
 * Callers:
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     PipVisitDeviceObjectListEntry @ 0x1409B2E80 (PipVisitDeviceObjectListEntry.c)
 */

__int64 __fastcall PipSortDeviceObjectList(unsigned int **a1)
{
  __int64 v1; // rbx
  size_t v3; // rdi
  char *v4; // rsi
  _DWORD *v5; // r11
  _DWORD *v6; // rax
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = **a1;
  v4 = (char *)(*a1 + 4);
  v5 = *a1 + 8;
  if ( (_DWORD)v3 )
  {
    v6 = *a1 + 8;
    v7 = (unsigned int)v3;
    do
    {
      *v6 &= ~2u;
      v6 += 6;
      --v7;
    }
    while ( v7 );
  }
  v9 = 1;
  if ( (_DWORD)v3 )
  {
    do
    {
      if ( (*v5 & 4) != 0 )
        PipVisitDeviceObjectListEntry(&v4[24 * v1], *a1, &v9);
      v1 = (unsigned int)(v1 + 1);
      v5 += 6;
    }
    while ( (unsigned int)v1 < (unsigned int)v3 );
  }
  qsort(v4, v3, 0x18uLL, (int (__cdecl *)(const void *, const void *))PipSortDevicesByOrdinal);
  return 0LL;
}
