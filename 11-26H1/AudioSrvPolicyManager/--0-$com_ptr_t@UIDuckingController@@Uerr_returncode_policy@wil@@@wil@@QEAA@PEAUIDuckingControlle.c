/*
 * XREFs of ??0?$com_ptr_t@UIDuckingController@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDuckingController@@@Z @ 0x180024B70
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_::_Copy @ 0x180040950 (std--_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Copy @ 0x1800409B0 (std--_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_--_Copy.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDuckingController,wil::err_returncode_policy>::com_ptr_t<IDuckingController,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
