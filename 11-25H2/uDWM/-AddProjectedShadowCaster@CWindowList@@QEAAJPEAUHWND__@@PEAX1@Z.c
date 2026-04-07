/*
 * XREFs of ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800E2C98
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18005962C (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008DA78 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::AddProjectedShadowCaster(CWindowList *this, HWND a2, void *a3, void *a4)
{
  unsigned int v8; // edi
  struct CProjectedShadowScene *v9; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v12; // [rsp+20h] [rbp-20h]
  struct CProjectedShadowScene *v13; // [rsp+30h] [rbp-10h] BYREF
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
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
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
          v12 = 1472;
LABEL_8:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, v12, 0LL);
        }
      }
      else
      {
        v8 = -2147019873;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147019873, 0x5C4u, 0LL);
      }
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
      goto LABEL_10;
    }
    v12 = 1469;
    goto LABEL_8;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
