/*
 * XREFs of ??R_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@QEBA@XZ @ 0x180529CC8
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18052A050 (-Run@-$CTaskWrapper@V_lambda_7aa9acfd8aab90d02032eccdb335cb01_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_7aa9acfd8aab90d02032eccdb335cb01_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  unsigned int i; // ebp
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < v13; ++i )
    {
      v14 = 0LL;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL);
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v14);
      if ( v10(v9, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, v11) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))a1)(v14, v7, v6, v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
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
