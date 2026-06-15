/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call @ 0x1800BCD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  bool v4; // si
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0;
  v7 = 0LL;
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v7);
  if ( v5(v3, &v7) >= 0 )
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), v7) == 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return v4;
}
