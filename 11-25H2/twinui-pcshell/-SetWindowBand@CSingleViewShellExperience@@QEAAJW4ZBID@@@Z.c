/*
 * XREFs of ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180011D7C
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180011954 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802481C0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802C6C9C (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x1802C8A98 (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803671D0 (-SetZBand@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetWindowBand(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v1,
      v4);
  return v2;
}
