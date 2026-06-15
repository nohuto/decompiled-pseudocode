/*
 * XREFs of ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000FC20 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180012830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x1800383E8 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180012A00 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CProcess::ForEachSession<IAudioSessionPolicyControl>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  const struct std::nothrow_t *v12; // rdx
  __int64 result; // rax
  void *v14; // rcx
  void *v15; // [rsp+20h] [rbp-48h] BYREF
  void *v16[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE *v17; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  void *v20; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 *v21; // [rsp+88h] [rbp+20h] BYREF

  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v5 = *(_QWORD **)(a1 + 72);
  v6 = (_QWORD *)*v5;
  try
  {
    while ( 1 )
    {
      if ( v6 == v5 )
        goto LABEL_14;
      v7 = v6[3];
      v20 = 0LL;
      v21 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned __int64 **))(*(_QWORD *)v7 + 24LL))(
             v7,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v21);
      if ( v8 >= 0 )
      {
        if ( !v21 )
          goto LABEL_9;
        v8 = (*(__int64 (__fastcall **)(unsigned __int64 *, GUID *, void **))*v21)(
               v21,
               &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
               &v20);
        (*(void (__fastcall **)(unsigned __int64 *))(*v21 + 16))(v21);
      }
      if ( v8 >= 0 )
      {
        if ( v16[1] == v17 )
        {
          std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy> const &>(
            v16,
            v16[1],
            &v20);
        }
        else
        {
          v14 = v20;
          *(_QWORD *)v16[1] = v20;
          if ( v14 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
          v16[1] = (char *)v16[1] + 8;
        }
        LOBYTE(v19) = 0;
        v21 = &v19;
        v15 = v20;
        v9 = *(_QWORD *)(a2 + 56);
        if ( !v9 )
        {
          std::_Xbad_function_call();
          goto LABEL_29;
        }
        (*(void (__fastcall **)(__int64, void **, unsigned __int64 **))(*(_QWORD *)v9 + 16LL))(v9, &v15, &v21);
        if ( (_BYTE)v19 )
          break;
      }
LABEL_9:
      if ( v20 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
      v6 = (_QWORD *)*v6;
    }
    if ( v20 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_14:
    v10 = v16[0];
    if ( !v16[0] )
      goto LABEL_22;
    v11 = v16[1];
    if ( v16[0] != v16[1] )
    {
      do
      {
        if ( *v10 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 16LL))(*v10);
        ++v10;
      }
      while ( v10 != v11 );
      v10 = v16[0];
    }
    v12 = (const struct std::nothrow_t *)((v17 - (_BYTE *)v10) & 0xFFFFFFFFFFFFFFF8uLL);
    v19 = (unsigned __int64)v12;
    v20 = v10;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
LABEL_29:
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v12 = (const struct std::nothrow_t *)v19;
      v10 = v20;
    }
    operator delete(v10, v12);
LABEL_22:
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x36B,
                     (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.h",
                     a4);
    return (unsigned int)v19;
  }
  return result;
}
