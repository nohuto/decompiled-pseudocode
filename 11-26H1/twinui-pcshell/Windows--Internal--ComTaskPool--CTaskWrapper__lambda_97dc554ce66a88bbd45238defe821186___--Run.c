/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97dc554ce66a88bbd45238defe821186___::Run @ 0x180353010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97dc554ce66a88bbd45238defe821186___::Run(
        _QWORD *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(a1[2] + 512LL)
                                                                                        + 24LL))(
         *(_QWORD *)(a1[2] + 512LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[3],
         a1[4],
         1);
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8CB,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v1);
}
