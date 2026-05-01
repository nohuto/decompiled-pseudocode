/*
 * XREFs of ?_Change_array@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAXQEAULTCMITEM@CLauncherTipContextMenu@@_K1@Z @ 0x1802BF51C
 * Callers:
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x1802244F8 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
