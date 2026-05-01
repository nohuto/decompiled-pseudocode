/*
 * XREFs of _lambda_44e8b172701ba47fc413d8c47dbd2684_::operator() @ 0x180341EAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_44e8b172701ba47fc413d8c47dbd2684___::Run @ 0x18034E860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_44e8b172701ba47fc413d8c47dbd2684___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_44e8b172701ba47fc413d8c47dbd2684_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*a1 + 456LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*a1 + 456LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         0);
  if ( v2 < 0 )
  {
    v3 = 2011LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*a1 + 456LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*a1 + 456LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         2);
  if ( v2 < 0 )
  {
    v3 = 2016LL;
    goto LABEL_3;
  }
  return 0LL;
}
