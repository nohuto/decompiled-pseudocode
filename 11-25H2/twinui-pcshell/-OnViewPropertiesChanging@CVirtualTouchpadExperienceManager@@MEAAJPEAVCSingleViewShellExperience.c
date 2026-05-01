/*
 * XREFs of ?OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180390B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewPropertiesChanging(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct tagRECT v9; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
  {
    v4 = *((_QWORD *)this + 36);
    if ( v4 )
    {
      v9 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v4 + 56LL))(v4, &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 976LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        *((_DWORD *)this + 178) = 0;
        return v6;
      }
      v5 = CSingleViewShellExperience::SetPosition(a2, &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 977LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
