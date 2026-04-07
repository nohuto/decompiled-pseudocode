/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x18001D820
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001E010 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800085F8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001D1D8 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18001E05C (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 */

void __fastcall CButton::~CButton(CTimelineBase **this)
{
  CAtlasedImage *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CTimelineBase *)&CButton::`vftable';
  CButton::DeactivateTimeline((struct CVisual *)this, this + 43);
  v2 = this[31];
  if ( v2 )
    CAtlasedImage::DisconnectFromParent(v2);
  v3 = this[31];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[31] = 0LL;
  }
  v4 = this[32];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[32] = 0LL;
  }
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 33), 1);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 37), 1);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 37);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 33);
  CAtlasedRectsVisual::~CAtlasedRectsVisual((void **)this);
}
