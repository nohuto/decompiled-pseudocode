/*
 * XREFs of ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180096200
 * Callers:
 *     ??_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z @ 0x180085890 (--_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z.c)
 *     ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180088180 (--_ECDCompDesktopThumbnail@@UEAAPEAXI@Z.c)
 *     ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800ADDE8 (--1CDesktopThumbnail@@MEAA@XZ.c)
 *     ??_ECDesktopThumbnailBase@@MEAAPEAXI@Z @ 0x1800ADF00 (--_ECDesktopThumbnailBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ @ 0x18006B9EC (-_ClearClones@CDesktopThumbnailBase@@IEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailBase::~CDesktopThumbnailBase(void **this)
{
  CDesktopManager *v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  *this = &CDesktopThumbnailBase::`vftable';
  v2 = 0LL;
  v4 = *((_DWORD *)v1 + 318);
  v5 = *((_QWORD *)v1 + 156);
  if ( v4 )
  {
    do
    {
      if ( this == *(void ***)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      v6 = (unsigned int)v2;
      v7 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = v7;
      v4 = *((_DWORD *)v1 + 318);
    }
    *((_DWORD *)v1 + 318) = v4 - 1;
  }
  CDesktopThumbnailBase::_ClearClones((CDesktopThumbnailBase *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 25);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
