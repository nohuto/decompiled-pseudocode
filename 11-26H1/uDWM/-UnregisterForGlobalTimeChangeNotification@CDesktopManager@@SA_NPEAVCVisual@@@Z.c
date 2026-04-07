/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C
 * Callers:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180005A98 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180006528 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180008D28 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180045A00 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18005A5BC (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18005E680 (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18008BDA8 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v7; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 138);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 66);
  if ( v5 )
  {
    do
    {
      if ( this == *(struct CVisual **)(v6 + 8LL * v4) )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  if ( v4 < v5 )
  {
    if ( v4 < v5 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
      }
      while ( v4 < *((_DWORD *)v1 + 138) - 1 );
    }
    --*((_DWORD *)v1 + 138);
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
