/*
 * XREFs of _lambda_d1f34b7883c7be61d92cb130c4decd2f_::operator() @ 0x18055D184
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_d1f34b7883c7be61d92cb130c4decd2f___ @ 0x18055B800 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_d1f34b7883c7be61d92cb130c4decd2f___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d1f34b7883c7be61d92cb130c4decd2f_::operator()(_QWORD *a1, HWND a2)
{
  __int64 v4; // rdi
  __m128i v5; // xmm0
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  void *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *v22; // [rsp+50h] [rbp-29h] BYREF
  int v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v24; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v26[4]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+90h] [rbp+17h] BYREF
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  struct tagRECT Rect; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v23 = 0;
  v25[0] = 18LL;
  v25[1] = &v23;
  v25[2] = 4LL;
  if ( GetPropW(a2, L"DesktopWindow")
    && IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, v25)
    && !v23 )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v4 = *a1;
    v5 = *(__m128i *)(*a1 + 184LL);
    v26[0] = _mm_cvtsi128_si32(v5) - Rect.left;
    v26[2] = v5.m128i_i32[2] - Rect.left;
    v26[3] = v5.m128i_i32[3] - Rect.top;
    v26[1] = v5.m128i_i32[1] - Rect.top;
    v22 = 0LL;
    v6 = *(_QWORD *)(v4 + 56);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v6 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    v8 = v7(v6, *(_QWORD *)a1[1], a2, 0LL, 0LL, v26, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (__int64 *)&v22);
    if ( v8 >= 0 )
    {
      v9 = *v22;
      v10 = *(_DWORD *)(*a1 + 196LL) - *(_DWORD *)(*a1 + 188LL);
      v11 = *(_DWORD *)(*a1 + 192LL) - *(_DWORD *)(*a1 + 184LL);
      v27 = 0LL;
      v28 = v11;
      v29 = v10;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v9 + 24))(v22, &v27, 0LL, 0LL);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x327,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v12);
      LOBYTE(v13) = 1;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*v22 + 152))(v22, 0LL, v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x328,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v14);
      v15 = (_QWORD *)a1[2];
      v16 = (__int64)v22;
      v24 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      v18 = 0;
      v19 = v15[1];
      if ( v19 != v15[3]
        || (v18 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v15,
                    v19 + 1,
                    v17),
            v18 >= 0) )
      {
        v20 = (__int64 *)(*v15 + 8 * v15[1]++);
        if ( v20 )
        {
          *v20 = 0LL;
          if ( v20 != (__int64 *)&v24 )
          {
            *v20 = v16;
            v24 = 0LL;
          }
        }
      }
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x329,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x325,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  }
  return 1LL;
}
