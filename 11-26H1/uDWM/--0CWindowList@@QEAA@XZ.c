/*
 * XREFs of ??0CWindowList@@QEAA@XZ @ 0x18007BD58
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x18008CF38 (--0-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::CWindowList(CWindowList *this)
{
  CWindowList *result; // rax

  *(_QWORD *)this = &CWindowList::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 312);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 424);
  *((_QWORD *)this + 62) = 0LL;
  result = this;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 166) = 0;
  *((_WORD *)this + 336) = 0;
  *((_BYTE *)this + 674) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_BYTE *)this + 688) = 0;
  *((_QWORD *)this + 87) = 0LL;
  return result;
}
