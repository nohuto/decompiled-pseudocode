/*
 * XREFs of ?OnGamingPostureChanged@ShellPositionerManager@@AEAAJH@Z @ 0x1804D8EF8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120___::Invoke @ 0x1804D8E80 (CAsyncCallbackWithLambda__lambda_8a72c3f35978c46449f60b59a3b64120___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA?AW4SHELL_POSITIONER_TYPE@@W4_TABLETMODESTATE@@H@Z @ 0x1804D8EB0 (-MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA-AW4SHELL_POSITIONER_TYPE@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::OnGamingPostureChanged(ShellPositionerManager *this, int a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // eax
  char *v7; // r12
  int v8; // eax
  __int64 (__fastcall *v9)(char *, __int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int i; // r14d
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  unsigned int v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  if ( *((_QWORD *)this + 24) )
  {
    v4 = *((_DWORD *)this + 37);
    if ( a2 != v4 )
    {
      v5 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(*((_DWORD *)this + 36), v4);
      v6 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(*((_DWORD *)this + 36), a2);
      v7 = (char *)this + 88;
      v8 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 11) + 40LL))(
             (char *)this + 88,
             v5,
             v6);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x234,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v8);
      if ( a2 )
      {
        v21 = 0LL;
        v9 = *(__int64 (__fastcall **)(char *, __int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 64LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        v10 = v9((char *)this + 88, 4LL, 0LL, &v21);
        v11 = v10;
        if ( v10 < 0 )
        {
          v12 = 570LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v10);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          return v11;
        }
        v20 = 0;
        v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
        v11 = v10;
        if ( v10 < 0 )
        {
          v12 = 573LL;
          goto LABEL_10;
        }
        for ( i = 0; i < v20; ++i )
        {
          v22 = 0LL;
          v15 = v21;
          v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 32LL);
          v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
          if ( v16(v15, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v17) >= 0 )
          {
            v18 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*(_QWORD *)v7 + 32LL))(
                    (char *)this + 88,
                    v22,
                    4LL);
            if ( v18 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x243,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
                (const char *)(unsigned int)v18);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      }
      *((_DWORD *)this + 37) = a2;
    }
  }
  return 0LL;
}
