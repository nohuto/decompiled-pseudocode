/*
 * XREFs of ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x18055046C
 * Callers:
 *     ??1?$optional@UExeData@@@std@@QEAA@XZ @ 0x180550530 (--1-$optional@UExeData@@@std@@QEAA@XZ.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180551B10 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??1ExeData@@QEAA@XZ @ 0x180550564 (--1ExeData@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>(ExeData *a1)
{
  if ( *((_BYTE *)a1 + 72) )
    ExeData::~ExeData(a1);
}
