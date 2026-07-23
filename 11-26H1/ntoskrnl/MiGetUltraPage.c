/*
 * XREFs of MiGetUltraPage @ 0x14033C230
 * Callers:
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 */

__int64 __fastcall MiGetUltraPage(__int64 a1, char a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // edi
  __int64 result; // rax
  __int64 SlabPage; // rdx
  int v8; // r9d

  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 & 0xFFF7FF00 ^ (unsigned __int8)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | 0x40000;
  v4 = a2 & 4;
  if ( (a2 & 8) == 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v8 = 28;
  if ( (a2 & 4) == 0 )
    v8 = 12;
  v5 = 0;
  SlabPage = MiGetSlabPage((unsigned int)&MiSystemPartition, 7, v3, v8, 0LL, 0);
  if ( SlabPage == -1 )
  {
LABEL_3:
    LOBYTE(v5) = v4 != 0;
    result = MiGetPage((__int64)&MiSystemPartition, v3, v5 + 176);
    SlabPage = result;
    if ( result == -1 )
      return result;
  }
  *(_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return SlabPage;
}
