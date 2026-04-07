/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x180006684
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180006614 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180088840 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailBase::_ClearClones(CDesktopThumbnailBase *this)
{
  unsigned int i; // ebx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  for ( i = 0; i < *((_DWORD *)this + 52); ++i )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 23) + 16LL * i + 8);
    if ( v3 )
      CBaseObject::Release(v3);
    v4 = *(CBaseObject **)(*((_QWORD *)this + 23) + 16LL * i);
    if ( v4 )
      CBaseObject::Release(v4);
  }
}
