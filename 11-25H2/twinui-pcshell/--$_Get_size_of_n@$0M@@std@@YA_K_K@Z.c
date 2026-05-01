/*
 * XREFs of ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x180224644
 * Callers:
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x1802244F8 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180295F8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<12>(unsigned __int64 a1)
{
  if ( a1 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return 12 * a1;
}
