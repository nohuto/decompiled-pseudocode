/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800AD7C0
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180078530 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1CAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x180099DC0 (--1CAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CBaseObject **this)
{
  CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY::~CAPTURE_TAB_GROUP_MAP_ENTRY(this);
  return RtlDeleteElementGenericTable(Table, this);
}
