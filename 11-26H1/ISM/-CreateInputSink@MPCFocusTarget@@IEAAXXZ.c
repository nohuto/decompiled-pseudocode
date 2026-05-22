/*
 * XREFs of ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x180100FB0
 * Callers:
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180100E18 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?OnFrameworkViewTypeUpdated@MPCFocusTarget@@MEAAXXZ @ 0x1801013A0 (-OnFrameworkViewTypeUpdated@MPCFocusTarget@@MEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180081358 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801013E0 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCFocusTarget::CreateInputSink(MPCFocusTarget *this)
{
  const char *v2; // r9
  __int64 v3; // xmm0_8
  __int64 v4; // rax
  unsigned int ImplicitCompositionInputSink; // eax
  void *v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h]
  __int128 v10; // [rsp+30h] [rbp-D0h]
  __int128 v11; // [rsp+40h] [rbp-C0h]
  __int128 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  _DWORD v14[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v15; // [rsp+98h] [rbp-68h]
  __int128 v16; // [rsp+A8h] [rbp-58h]
  __int128 v17; // [rsp+B8h] [rbp-48h]
  __int64 v18; // [rsp+C8h] [rbp-38h]
  __int128 v19; // [rsp+D0h] [rbp-30h]
  __int128 v20; // [rsp+E0h] [rbp-20h]
  __int128 v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  __int128 v23; // [rsp+108h] [rbp+8h]
  __int128 v24; // [rsp+118h] [rbp+18h]
  __int128 v25; // [rsp+128h] [rbp+28h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int128 v27; // [rsp+140h] [rbp+40h]
  __int128 v28; // [rsp+150h] [rbp+50h]
  __int128 v29; // [rsp+160h] [rbp+60h]
  __int64 v30; // [rsp+170h] [rbp+70h]
  _BYTE v31[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)v8 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 11))(
    *((_QWORD *)this + 11),
    &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
    v8);
  if ( *((_BYTE *)this + 40)
    && (!*(_QWORD *)v8 || !(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 56LL))(*(_QWORD *)v8)) )
  {
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    if ( IsEdition(8778LL) )
    {
      *((_QWORD *)&v12 + 1) = (*(int (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 56LL))(this);
      LODWORD(v12) = 2;
      v3 = v13;
    }
    else
    {
      if ( !*(_QWORD *)v8 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x4F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcfocustarget.cpp",
          v2);
      *((_QWORD *)&v12 + 1) = (*(int (__fastcall **)(MPCFocusTarget *))(*(_QWORD *)this + 56LL))(this);
      v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v8 + 72LL))(*(_QWORD *)v8, v31);
      v10 = *(_OWORD *)v4;
      v11 = *(_OWORD *)(v4 + 16);
      v3 = *(_QWORD *)(v4 + 32);
      LODWORD(v12) = 3;
    }
    v9 = v3;
    v14[0] = 232;
    v14[1] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 10) + 80LL))((char *)this + 80);
    v19 = v12;
    v20 = v10;
    v21 = v11;
    v22 = v9;
    v27 = v12;
    v28 = v10;
    v29 = v11;
    v30 = v9;
    v23 = v12;
    v24 = v10;
    v25 = v11;
    v26 = v9;
    v15 = v12;
    v16 = v10;
    v17 = v11;
    v18 = v9;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 12,
      0LL);
    ImplicitCompositionInputSink = NtCreateImplicitCompositionInputSink(v14, (char *)this + 96);
    if ( ImplicitCompositionInputSink )
      wil::details::in1diag3::_Log_Win32(retaddr, v6, v7, (const char *)ImplicitCompositionInputSink, v8[0]);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)v8);
}
