/*
 * XREFs of ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002CA68
 * Callers:
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18002C968 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z @ 0x18002C9E4 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18003F828 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180015470 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@PEAUIAudioSessionInfo@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x18003E970 (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::ForEachDuckableSession(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 result; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v14);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  try
  {
    v16 = a1 + 24;
    if ( v14 != (_QWORD *)(a1 + 64) )
      std::forward_list<IAudioSessionInfo *>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<IAudioSessionInfo *>>,std::_Iterator_base0>,std::_Default_sentinel>(
        v14,
        *(_QWORD *)(a1 + 64),
        0LL);
    if ( a1 != -24 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v7 = (_QWORD *)v14[0];
    v8 = (_QWORD *)v14[0];
    while ( v8 )
    {
      v9 = v8[1];
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL))(v9);
      if ( !(unsigned int)_o__wcsicmp(a2, v10) && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9) )
      {
        v16 = v9;
        v11 = *(_QWORD *)(a3 + 56);
        if ( !v11 )
          std::_Xbad_function_call();
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v16);
      }
      v8 = (_QWORD *)*v8;
      v7 = (_QWORD *)v14[0];
    }
    v14[0] = 0LL;
    if ( v7 )
    {
      do
      {
        v12 = (_QWORD *)*v7;
        std::_Deallocate<16>(v7, (const struct std::nothrow_t *)0x10);
        v7 = v12;
      }
      while ( v12 );
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E5,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v6);
  }
  return result;
}
