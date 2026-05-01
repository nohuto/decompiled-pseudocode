/*
 * XREFs of _lambda_41d14996f06832153f35f30c97717118_::operator() @ 0x180307ECC
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_41d14996f06832153f35f30c97717118___ @ 0x1803070B0 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_41d14996f06832153f35f30c97717118___.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180048120 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_41d14996f06832153f35f30c97717118_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = **(_DWORD **)a1;
  if ( v5 < 0 )
    return v5 >= 0;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v6 + 544) )
    return v5 >= 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 536);
    if ( !IsEqualByHwnd(a2, *(int (__fastcall ****)(struct IApplicationView *, GUID *, __int64 *))(v7 + 8 * v4)) )
      goto LABEL_12;
    v16 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 16) + 24LL))(
           **(_QWORD **)(a1 + 16),
           &v16);
    if ( v8 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    **(_DWORD **)a1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 16) + 40LL))(
                        **(_QWORD **)(a1 + 16),
                        *(_QWORD *)(v7 + 8 * v4));
LABEL_12:
    ++v4;
    v5 = **(_DWORD **)a1;
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v4 < *(_QWORD *)(v6 + 544) )
        continue;
    }
    return v5 >= 0;
  }
  v9 = 0;
  if ( !v16 )
    goto LABEL_11;
  while ( 1 )
  {
    v17 = 0LL;
    v10 = **(_QWORD **)(a1 + 16);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 32LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v17);
    v13 = v11(v10, v9, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12);
    if ( v13 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_10:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    if ( ++v9 >= v16 )
      goto LABEL_11;
  }
  if ( !SHIsSameObject(*(struct IUnknown **)(v7 + 8 * v4), v17) )
    goto LABEL_10;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return 1LL;
}
