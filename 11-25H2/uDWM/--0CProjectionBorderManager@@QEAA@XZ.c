/*
 * XREFs of ??0CProjectionBorderManager@@QEAA@XZ @ 0x18009503C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CProjectionBorderManager *__fastcall CProjectionBorderManager::CProjectionBorderManager(CProjectionBorderManager *this)
{
  __int64 v2; // rdx
  CProjectionBorderManager *result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h]

  *(_QWORD *)this = &CProjectionBorderManager::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 400, 0LL, 0);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 6,
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    (PVOID)(v2 & v4));
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 7,
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 8,
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  result = this;
  *((_BYTE *)this + 648) = 0;
  return result;
}
