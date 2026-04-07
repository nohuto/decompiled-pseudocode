/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800596A8
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18005962C (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800597C4 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x18005995C (-AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::AddCasterFromSharedHandle(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this,
        void *a2,
        void *a3,
        struct CTopLevelWindow *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int updated; // eax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(this[3], a2, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v8,
      v13);
LABEL_11:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return v9;
  }
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(this[4], a3, a4);
  v9 = updated;
  if ( updated >= 0 )
  {
    *((_BYTE *)a4 + 201) |= 0x10u;
    updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
    v9 = updated;
    if ( updated >= 0 )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 6)
                                                                + 32LL)
                                                  + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 6)
                                                                     + 32LL));
      v9 = updated;
      if ( updated >= 0 )
      {
        v9 = 0;
        goto LABEL_11;
      }
      v11 = 65LL;
    }
    else
    {
      v11 = 64LL;
    }
  }
  else
  {
    v11 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)updated,
    v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}
