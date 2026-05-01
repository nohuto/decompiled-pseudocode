/*
 * XREFs of ??R_lambda_1a746a469b397f96443d5d0dd1083225_@@QEBA@XZ @ 0x180287250
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180287240 (-Run@-$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$RemoveRefCountWrappers@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x1801ABD50 (--$RemoveRefCountWrappers@AEBV-$tuple@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA-A_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_1a746a469b397f96443d5d0dd1083225_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    RemoveRefCountWrappers<std::tuple<Microsoft::WRL::ComPtr<IApplicationView>> const &>((__int64)&v10, a1 + 16);
    for ( i = 0; i < v8; ++i )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade,
             &v9) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v9, v10);
      v6 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
