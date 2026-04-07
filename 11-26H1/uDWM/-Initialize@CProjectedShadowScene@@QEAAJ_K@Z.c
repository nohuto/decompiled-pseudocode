/*
 * XREFs of ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x18003517C
 * Callers:
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18007C6F4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x180034FC4 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800359E0 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?GetLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z @ 0x180088AA4 (-GetLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Compositi.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800BDC24 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CProjectedShadowScene::Initialize(CProjectedShadowScene *this, unsigned __int64 a2)
{
  struct CGlobalLightSet *GlobalLightSetForDesktop; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int ProjectedShadowReceiverVisual; // eax
  CProjectedShadowScene::CProjectedShadowSceneInstance *v8; // rax
  int LightByType; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  CProjectedShadowScene::CProjectedShadowSceneInstance *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+20h] [rbp-10h] BYREF
  CProjectedShadowScene::CProjectedShadowSceneInstance *v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GlobalLightSetForDesktop = CWindowList::GetGlobalLightSetForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               a2);
  if ( GlobalLightSetForDesktop )
  {
    ProjectedShadowReceiverVisual = CProjectedShadowScene::CreateProjectedShadowReceiverVisual(this, a2);
    v5 = ProjectedShadowReceiverVisual;
    if ( ProjectedShadowReceiverVisual < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)ProjectedShadowReceiverVisual,
        (int)v18);
      goto LABEL_30;
    }
    v8 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)operator new(0x70uLL);
    v19 = v8;
    if ( v8 )
      v8 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v8);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v5 = -2147024882;
      v6 = 40LL;
      goto LABEL_9;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    LightByType = CGlobalLightSet::GetLightByType(GlobalLightSetForDesktop, 3LL, &v21);
    v5 = LightByType;
    if ( LightByType >= 0 )
    {
      LightByType = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 3), v21, 0);
      v5 = LightByType;
      if ( LightByType >= 0 )
      {
        v12 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)operator new(0x70uLL);
        v19 = v12;
        if ( v12 )
          v12 = (CProjectedShadowScene::CProjectedShadowSceneInstance *)CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(v12);
        *((_QWORD *)this + 4) = v12;
        if ( v12 )
        {
          v22 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
          v13 = CGlobalLightSet::GetLightByType(GlobalLightSetForDesktop, 4LL, &v22);
          v5 = v13;
          if ( v13 >= 0 )
          {
            v14 = CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(*((_QWORD *)this + 4), v22, 1u);
            v5 = v14;
            if ( v14 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x33,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
                (const char *)(unsigned int)v14,
                (int)v18);
              v15 = v22;
              if ( v22 )
              {
                v22 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              }
              v16 = v21;
              if ( v21 )
              {
                v21 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              }
              goto LABEL_28;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
            v5 = 0;
LABEL_30:
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
            return v5;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
            (const char *)(unsigned int)v13,
            (int)v18);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
LABEL_14:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
          goto LABEL_30;
        }
        v5 = -2147024882;
        v11 = 2147942414LL;
        v10 = 47LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)v11,
          (int)v18);
        goto LABEL_14;
      }
      v10 = 44LL;
    }
    else
    {
      v10 = 43LL;
    }
    v11 = (unsigned int)LightByType;
    goto LABEL_13;
  }
  v5 = -2147023728;
  v6 = 35LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)v5,
    (int)v18);
LABEL_28:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
