/*
 * XREFs of ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180088840
 * Callers:
 *     ??_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z @ 0x180075FB0 (--_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z.c)
 *     ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180077A60 (--_ECDCompDesktopThumbnail@@UEAAPEAXI@Z.c)
 *     ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800AD528 (--1CDesktopThumbnail@@MEAA@XZ.c)
 * Callees:
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x180006684 (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CDesktopThumbnailBase::~CDesktopThumbnailBase(void **this)
{
  CDesktopManager *v1; // r9
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 0LL;
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 310);
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 152);
  if ( v4 )
  {
    do
    {
      if ( this == *(void ***)(v5 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  if ( (unsigned int)v3 < v4 )
  {
    if ( (unsigned int)v3 < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)v3;
        LODWORD(v3) = v3 + 1;
        *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v3);
      }
      while ( (unsigned int)v3 < *((_DWORD *)v1 + 310) - 1 );
    }
    --*((_DWORD *)v1 + 310);
  }
  CDesktopThumbnailBase::_ClearClones((CDesktopThumbnailBase *)this);
  CBitmapSourceArray::~CBitmapSourceArray(this + 23);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
