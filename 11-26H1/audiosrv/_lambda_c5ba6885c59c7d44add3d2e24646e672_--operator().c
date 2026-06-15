/*
 * XREFs of _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800C50B4
 * Callers:
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800C73F0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x1800465BC (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800C3F88 (--0-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800C3FEC (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263____::_2_::_Guard_type::__Guard_type @ 0x1800C44D4 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c5ba6885c59c7d44add3d2e24646e672_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  void (__fastcall *v3)(__int64, _BYTE *); // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  void *v7; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[56]; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD *v9; // [rsp+60h] [rbp-68h]
  _BYTE v10[64]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *a2;
  v3 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 368LL);
  std::function<void (bool)>::function<void (bool)>((__int64)v10, a1);
  v9 = 0LL;
  v4 = operator new(0x48uLL);
  *v4 = &off_180175068;
  std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>((__int64)(v4 + 1), (__int64)v10);
  v7 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263____::_2_::_Guard_type::__Guard_type(&v7);
  v9 = v4;
  v3(v2, v8);
  return lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)v10, v5);
}
