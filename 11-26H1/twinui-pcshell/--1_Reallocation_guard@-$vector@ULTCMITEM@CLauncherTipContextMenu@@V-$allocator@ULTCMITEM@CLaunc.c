/*
 * XREFs of ??1_Reallocation_guard@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAA@XZ @ 0x1806009F4
 * Callers:
 *     ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x18027B2C4 (--$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@-$vector@ULTCMITEM@CLauncherTipCon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(12LL * *(_QWORD *)(a1 + 16)));
}
