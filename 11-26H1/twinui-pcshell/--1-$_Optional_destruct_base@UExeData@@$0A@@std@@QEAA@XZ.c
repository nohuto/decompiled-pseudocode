/*
 * XREFs of ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x1805747AC
 * Callers:
 *     ??1?$optional@UExeData@@@std@@QEAA@XZ @ 0x180574870 (--1-$optional@UExeData@@@std@@QEAA@XZ.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??1ExeData@@QEAA@XZ @ 0x1805748A4 (--1ExeData@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>(ExeData *a1)
{
  if ( *((_BYTE *)a1 + 72) )
    ExeData::~ExeData(a1);
}
