/*
 * XREFs of ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800DF8DC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18004D568 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18007C6F4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::AddProjectedShadowCaster(CWindowList *this, HWND a2, void *a3, void *a4)
{
  unsigned int v8; // edi
  struct CWindowData *v9; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v12; // [rsp+20h] [rbp-20h]
  struct CWindowData *v13; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-8h] BYREF

  v8 = 0;
  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v13);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       this,
                                       *((_QWORD *)v9 + 17),
                                       a3 != 0LL,
                                       &v13);
    v8 = ProjectedShadowSceneForDesktop;
    if ( ProjectedShadowSceneForDesktop >= 0 )
    {
      if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v13) )
      {
        ProjectedShadowSceneForDesktop = CTopLevelWindow::AddProjectedShadowCaster(
                                           *((CTopLevelWindow **)v9 + 55),
                                           v13,
                                           a3,
                                           a4);
        v8 = ProjectedShadowSceneForDesktop;
        if ( ProjectedShadowSceneForDesktop < 0 )
        {
          v12 = 1729;
LABEL_8:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, v12, 0LL);
        }
      }
      else
      {
        v8 = -2147019873;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147019873, 0x6C5u, 0LL);
      }
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v13);
      goto LABEL_10;
    }
    v12 = 1726;
    goto LABEL_8;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
