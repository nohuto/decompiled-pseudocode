/*
 * XREFs of ??0CGlobalLightSet@@AEAA@_K@Z @ 0x1800361C0
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x1800360EC (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CGlobalLightSet *__fastcall CGlobalLightSet::CGlobalLightSet(CGlobalLightSet *this, __int64 a2)
{
  CBaseObject::CBaseObject(this);
  *(_QWORD *)this = &CGlobalLightSet::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 16),
    CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_LIGHT>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 11) = a2;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 12);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 13);
  return this;
}
