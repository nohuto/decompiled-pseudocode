/*
 * XREFs of ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x180023080
 * Callers:
 *     ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180022FA0 (-AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800384C0 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ @ 0x180039C6C (-ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000670C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180012A00 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcess::ForEachSession<IAudioSessionInfo>(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  int *v19; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v5 = *(_QWORD **)(a1 + 72);
  v6 = (_QWORD *)*v5;
  try
  {
    while ( v6 != v5 )
    {
      v7 = v6[3];
      v18 = 0LL;
      v19 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, int **))(*(_QWORD *)v7 + 24LL))(
             v7,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v19);
      if ( v8 >= 0 )
      {
        if ( !v19 )
          goto LABEL_11;
        v8 = (**(__int64 (__fastcall ***)(int *, GUID *, __int64 *))v19)(
               v19,
               &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
               &v18);
        (*(void (__fastcall **)(int *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( v8 >= 0 )
      {
        if ( *((_QWORD *)&v14 + 1) == v15 )
        {
          std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy> const &>(
            (unsigned __int64 *)&v14,
            *((__int64 **)&v14 + 1),
            &v18);
        }
        else
        {
          v9 = v18;
          **((_QWORD **)&v14 + 1) = v18;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          *((_QWORD *)&v14 + 1) += 8LL;
        }
        LOBYTE(v17) = 0;
        v19 = &v17;
        v13 = v18;
        v10 = *(_QWORD *)(a2 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          goto LABEL_23;
        }
        (*(void (__fastcall **)(__int64, __int64 *, int **))(*(_QWORD *)v10 + 16LL))(v10, &v13, &v19);
        if ( (_BYTE)v17 )
        {
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          break;
        }
      }
LABEL_11:
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v6 = (_QWORD *)*v6;
    }
    v11 = v14;
    if ( !(_QWORD)v14 )
      goto LABEL_15;
LABEL_23:
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>>(
      v11,
      *((__int64 *)&v14 + 1));
    std::_Deallocate<16>((void *)v14, (const struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_15:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36B,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.h",
                           a4);
  }
  return result;
}
