/*
 * XREFs of ACPIEnumMapTableHandler @ 0x14003D280
 * Callers:
 *     <none>
 * Callees:
 *     ACPIMapNamedTable @ 0x14003D2D0 (ACPIMapNamedTable.c)
 *     ACPIEnumerateTables @ 0x1400D3898 (ACPIEnumerateTables.c)
 */

__int64 __fastcall ACPIEnumMapTableHandler(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    return ACPIEnumerateTables(a1 + 16, a1 + 12);
  if ( v1 == 1 )
    return ACPIMapNamedTable(*(unsigned int *)(a1 + 8), 0LL, 0LL, a1 + 16, a1 + 12);
  return 3221225474LL;
}
