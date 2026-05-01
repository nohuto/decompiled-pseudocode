/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb502c56144cff3e2ef03098b9f46e0b___::Run @ 0x18034E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb502c56144cff3e2ef03098b9f46e0b___::Run(
        _QWORD *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(a1[2] + 456LL)
                                                                                        + 24LL))(
         *(_QWORD *)(a1[2] + 456LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[3],
         a1[4],
         1);
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x894,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v1);
}
