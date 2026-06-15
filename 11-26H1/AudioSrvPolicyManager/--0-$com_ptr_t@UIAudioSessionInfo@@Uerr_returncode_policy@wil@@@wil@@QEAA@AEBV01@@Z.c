/*
 * XREFs of ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024930
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_::_Copy @ 0x180040950 (std--_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Copy @ 0x1800409B0 (std--_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_--_Copy.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
