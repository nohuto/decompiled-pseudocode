/*
 * XREFs of ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18006B9EC
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18006B984 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180096200 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailBase::_ClearClones(CDesktopThumbnailBase *this)
{
  unsigned int i; // ebx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  for ( i = 0; i < *((_DWORD *)this + 56); ++i )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 25) + 16LL * i + 8);
    if ( v3 )
      CBaseObject::Release(v3);
    v4 = *(CBaseObject **)(*((_QWORD *)this + 25) + 16LL * i);
    if ( v4 )
      CBaseObject::Release(v4);
  }
}
