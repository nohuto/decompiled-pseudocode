/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803D4330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F63DC (IsUserAssignedAccessSingleApp.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D232C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D426C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803D6894 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1803D6F34 (CortanaHelpers--SetIsAssignedAccess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  CortanaDesktopExperienceView *v3; // rdi
  int v4; // esi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CortanaDesktopExperienceView *)((char *)this - 64);
  *((_BYTE *)this + 182) = a2 != 0;
  if ( a2 )
  {
    v4 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v4 < 0 )
    {
      v5 = 910LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  else if ( *((_BYTE *)v3 + 250) )
  {
    v4 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v4 < 0 )
    {
      v5 = 917LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 186) = 0;
  if ( !*((_BYTE *)this + 182) )
    goto LABEL_20;
  if ( *((_DWORD *)this + 19) != 3 && *((_DWORD *)this + 19) != 4 )
  {
    v7 = CortanaDesktopExperienceView::DismissCortanaApp(v3);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  if ( !*((_BYTE *)this + 182) )
  {
LABEL_20:
    if ( !*((_BYTE *)this + 183) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      LOBYTE(v9) = (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v9);
      if ( *((_BYTE *)this + 184) )
      {
        *((_BYTE *)this + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      }
    }
  }
  return 0LL;
}
