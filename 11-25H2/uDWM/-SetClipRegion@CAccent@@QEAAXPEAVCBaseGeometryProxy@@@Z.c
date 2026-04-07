/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180074AD0
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180011F28 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001CB4C (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180074A3C (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CBaseGeometryProxy *a2)
{
  CBaseObject *v4; // rcx

  if ( a2 != this[42] )
  {
    (*((void (__fastcall **)(CBaseObject **, __int64))*this + 3))(this, 0x8000LL);
    v4 = this[42];
    if ( v4 )
      CBaseObject::Release(v4);
    this[42] = a2;
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
  }
}
