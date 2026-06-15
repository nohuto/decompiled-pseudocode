/*
 * XREFs of std::_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___::_Do_call @ 0x180040B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___::_Do_call(
        __int64 a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  char v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v6 = 0LL;
  if ( (**v3)(v3, &GUID_fe394136_900b_469c_bdfc_4321bcd92f34, &v6) >= 0 )
  {
    v5 = 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, char, _QWORD))(*(_QWORD *)v6 + 152LL))(
      v6,
      2LL,
      0LL,
      0xFFFFFFFFLL,
      v5,
      **(_QWORD **)(a1 + 8));
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  return 0LL;
}
