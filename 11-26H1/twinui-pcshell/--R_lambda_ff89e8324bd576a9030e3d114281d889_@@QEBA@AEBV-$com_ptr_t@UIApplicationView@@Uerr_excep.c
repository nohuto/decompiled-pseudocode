/*
 * XREFs of ??R_lambda_ff89e8324bd576a9030e3d114281d889_@@QEBA@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804EFBEC
 * Callers:
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F19BC (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804EF374 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall _lambda_ff89e8324bd576a9030e3d114281d889_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *result; // rax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = **a1;
  if ( v4 == *a1[1] )
  {
    wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v10);
    *(_WORD *)(v10 + 104) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 320LL))(*a2, v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEB,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7,
        v8);
    return (__int64 *)Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v10);
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 16);
    v11 = *a2;
    v5 = a1[2][7];
    if ( !v5 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v11, &v10);
    result = (__int64 *)**a1;
    **a1 = *result;
  }
  return result;
}
