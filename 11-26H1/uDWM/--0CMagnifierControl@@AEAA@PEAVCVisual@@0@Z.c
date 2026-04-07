/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18006B34C
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18006B278 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
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
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
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
    CBaseObject::AddRef(a2);
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CBaseObject::AddRef(a3);
  return this;
}
