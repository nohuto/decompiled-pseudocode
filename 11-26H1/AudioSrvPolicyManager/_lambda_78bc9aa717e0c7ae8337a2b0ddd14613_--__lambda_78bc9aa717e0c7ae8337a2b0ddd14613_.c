/*
 * XREFs of _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180008570
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180007FB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Delete_this @ 0x180008530 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Delete_this.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Delete_this @ 0x180023440 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Delete_this.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // r8
  signed __int32 v6; // edx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(volatile signed __int32 **)a1;
  if ( *(_QWORD *)a1 )
  {
    do
      v6 = *((_DWORD *)v5 + 5);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(v5 + 5, v6 - 1, v6) );
    result = (unsigned int)(v6 - 1);
    if ( v6 == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 560LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
