/*
 * XREFs of ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x180006544
 * Callers:
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180006490 (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180006734 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::SetGlyphImage(__int64 a1, CMILRefCountBase *a2, __int64 a3, int a4)
{
  CBaseObject *v6; // rcx

  v6 = *(CBaseObject **)(a1 + 128);
  if ( v6 != a2 || *(_DWORD *)(a1 + 136) != 1 || a4 != *(_DWORD *)(a1 + 140) )
  {
    *(_DWORD *)(a1 + 136) = 1;
    if ( v6 )
      CBaseObject::Release(v6);
    *(_QWORD *)(a1 + 128) = a2;
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)a1, 1u, 0x2000u);
  }
}
