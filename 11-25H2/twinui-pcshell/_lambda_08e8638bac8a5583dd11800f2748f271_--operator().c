/*
 * XREFs of _lambda_08e8638bac8a5583dd11800f2748f271_::operator() @ 0x180341DF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08e8638bac8a5583dd11800f2748f271___::Run @ 0x18034E840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_08e8638bac8a5583dd11800f2748f271___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_08e8638bac8a5583dd11800f2748f271_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)a1 + 456LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 456LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 448LL),
         *(_QWORD *)(*(_QWORD *)a1 + 440LL),
         0);
  if ( v2 < 0 )
  {
    v3 = 2029LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)a1 + 456LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 456LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 448LL),
         *(_QWORD *)(*(_QWORD *)a1 + 440LL),
         2);
  if ( v2 < 0 )
  {
    v3 = 2034LL;
    goto LABEL_3;
  }
  return 0LL;
}
