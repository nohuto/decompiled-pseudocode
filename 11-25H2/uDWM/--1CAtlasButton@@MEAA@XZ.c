/*
 * XREFs of ??1CAtlasButton@@MEAA@XZ @ 0x180070BEC
 * Callers:
 *     ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180070BA0 (--_GCAtlasButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::~CAtlasButton(CAtlasButton *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CAtlasedImage::~CAtlasedImage(this);
}
