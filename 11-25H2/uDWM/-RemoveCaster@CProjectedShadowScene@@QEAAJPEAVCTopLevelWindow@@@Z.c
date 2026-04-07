/*
 * XREFs of ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BD57C
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18005962C (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800597C4 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x180059CF4 (-RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectedShadowScene::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this,
        struct CTopLevelWindow *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[3], a2);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(this[4], a2);
    v5 = updated;
    if ( updated >= 0 )
    {
      *((_BYTE *)a2 + 201) &= ~0x10u;
      updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 6)
                                                                  + 32LL)
                                                    + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 6)
                                                                       + 32LL));
        v5 = updated;
        if ( updated >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v6 = 79LL;
      }
      else
      {
        v6 = 78LL;
      }
    }
    else
    {
      v6 = 75LL;
    }
  }
  else
  {
    v6 = 74LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)updated);
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
