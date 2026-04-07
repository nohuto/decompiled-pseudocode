/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037998
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800102B0 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001D1D8 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180030728 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180036F70 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180037914 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180037A1C (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800904A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 136);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
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
    while ( v4 < v5 - 1 )
    {
      v7 = v4;
      v8 = *(_QWORD *)(v6 + 8LL * ++v4);
      *(_QWORD *)(v6 + 8 * v7) = v8;
      v5 = *((_DWORD *)v1 + 136);
    }
    *((_DWORD *)v1 + 136) = v5 - 1;
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
