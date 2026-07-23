/*
 * XREFs of MiCreatePoolPageTables @ 0x1402A4644
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiCreatePoolPageTables(__int64 a1, __int64 a2)
{
  int v2; // r11d
  unsigned int v3; // r10d
  unsigned __int64 v4; // rdx

  v2 = a2;
  v3 = ((*(_WORD *)(a1 + 100) & 4 | 0x400u) >> 1) | 0x1000;
  if ( *(_BYTE *)(a1 + 102) != 2 )
    v3 = (*(_WORD *)(a1 + 100) & 4 | 0x400u) >> 1;
  v4 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v4 > *(_QWORD *)(a1 + 80) )
    v4 = *(_QWORD *)(a1 + 80);
  return MiMakeZeroedPageTablesEx(v2, v4, v3, *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 96) + 1);
}
