/*
 * XREFs of MiReuseUltraPageTable @ 0x14029ECD4
 * Callers:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 * Callees:
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 */

__int64 __fastcall MiReuseUltraPageTable(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  ULONG_PTR v4; // rbx
  unsigned int v5; // eax
  __int64 result; // rax

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  v5 = MI_PAGE_TO_FULL_COLOR(v4);
  result = MiManageUltraSpacePageTable(48 * v4 - 0x220000000000LL, v5, 0LL);
  if ( result != v4 )
    *(_QWORD *)(a1 + 8 * v2 + 8) = result;
  return result;
}
