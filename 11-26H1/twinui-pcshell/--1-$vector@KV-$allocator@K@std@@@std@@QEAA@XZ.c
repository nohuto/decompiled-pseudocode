/*
 * XREFs of ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1801B78A0
 * Callers:
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$10 @ 0x1806D2169 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned long>::~vector<unsigned long>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
