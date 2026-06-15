/*
 * XREFs of std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Copy @ 0x1800409B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024930 (--0-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x180024B70 (--0-$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingControlle.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi

  v3 = a1 + 8;
  *a2 = off_1800536A0;
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  a2[2] = *(_QWORD *)(v3 + 8);
  wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
    a2 + 3,
    *(_QWORD *)(v3 + 16));
  return a2;
}
