/*
 * XREFs of _lambda_37453213ccb91170a753d285a0f69d4d_::operator() @ 0x18034372C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_37453213ccb91170a753d285a0f69d4d___::Run @ 0x180352F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_37453213ccb91170a753d285a0f69d4d___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_37453213ccb91170a753d285a0f69d4d_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*a1 + 512LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*a1 + 512LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         0);
  if ( v2 < 0 )
  {
    v3 = 2066LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*a1 + 512LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*a1 + 512LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         2);
  if ( v2 < 0 )
  {
    v3 = 2071LL;
    goto LABEL_3;
  }
  return 0LL;
}
