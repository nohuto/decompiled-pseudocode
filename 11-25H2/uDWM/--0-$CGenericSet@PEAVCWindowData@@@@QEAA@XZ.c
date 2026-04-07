/*
 * XREFs of ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x18009966C
 * Callers:
 *     ??0CWindowList@@QEAA@XZ @ 0x180071D90 (--0CWindowList@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_GENERIC_TABLE *__fastcall CGenericSet<CWindowData *>::CGenericSet<CWindowData *>(
        struct _RTL_GENERIC_TABLE *a1)
{
  RtlInitializeGenericTable(
    a1,
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  return a1;
}
