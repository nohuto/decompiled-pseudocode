/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18007DA70
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18007D9AC (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::CMagnifierControl(
        CMagnifierControl *this,
        struct CVisual *a2,
        struct CVisual *a3)
{
  CBaseObject::CBaseObject(this);
  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 56),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_BYTE *)this + 128) = 0;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_QWORD *)this + 19) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  return this;
}
