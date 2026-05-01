/*
 * XREFs of ??R_lambda_fb189054ea513898645e6db750f42f18_@@QEBA@XZ @ 0x180287840
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180287830 (-Run@-$CTaskWrapper@V_lambda_fb189054ea513898645e6db750f42f18_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$RemoveRefCountWrappers@AEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA?A_PAEBV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x1801ABD50 (--$RemoveRefCountWrappers@AEBV-$tuple@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@@YA-A_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_fb189054ea513898645e6db750f42f18_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // esi
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    RemoveRefCountWrappers<std::tuple<Microsoft::WRL::ComPtr<IApplicationView>> const &>((__int64)&v13, a1 + 16);
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL);
      v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v12);
      if ( v7(v6, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, v8) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v12, v13);
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
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
