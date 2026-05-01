/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002F130
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002EFF0 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800022B8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180024650 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___ @ 0x180025B58 (wil--details--lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___--_lambda_call__lambda_95b9.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile *a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  volatile signed __int64 *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  signed __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  __int64 v20; // rcx
  signed __int32 v21; // eax
  HSTRING v22; // r14
  HSTRING v23; // r15
  volatile signed __int64 *v24; // rsi
  signed __int64 v25; // rcx
  signed __int64 v26; // rax
  signed __int32 v27; // eax
  char *v28; // rax
  __int64 v29; // r8
  char *v30; // rbx
  char *v31; // rax
  __int64 v33; // [rsp+38h] [rbp-49h] BYREF
  HSTRING string; // [rsp+40h] [rbp-41h] BYREF
  HSTRING newString; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v36; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v37; // [rsp+58h] [rbp-29h] BYREF
  int v38; // [rsp+60h] [rbp-21h] BYREF
  __int64 v39; // [rsp+64h] [rbp-1Dh]
  _QWORD v40[4]; // [rsp+70h] [rbp-11h] BYREF
  char v41; // [rsp+90h] [rbp+Fh]
  char v42; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  UINT32 length; // [rsp+E8h] [rbp+67h] BYREF

  v7 = (volatile signed __int64 *)((char *)this - 16);
  if ( *((_QWORD *)this + 30) )
  {
    v8 = -2147024891;
    v9 = 1483LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    return v8;
  }
  if ( WindowsGetStringLen(a3) >= 0x104 )
  {
    v8 = -2147024809;
    v9 = 1486LL;
    goto LABEL_52;
  }
  string = 0LL;
  if ( a2 )
  {
    v33 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *))a2)(
            a2,
            &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
            &v33);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D4,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
      v11 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_47:
      WindowsDeleteString(string);
      return v8;
    }
    v12 = v33;
    v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v33 + 96LL);
    WindowsDeleteString(string);
    v14 = v13(v12, &string);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v14);
      v15 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_47;
    }
    length = 0;
    WindowsGetStringRawBuffer(string, &length);
    if ( !string || !length )
    {
      v8 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D9,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070057LL);
      v20 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_47;
    }
    v16 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  if ( v7 )
  {
    v17 = *((_QWORD *)v7 + 17);
    while ( v17 >= 0 )
    {
      if ( (_DWORD)v17 != 0x7FFFFFFF )
      {
        v19 = _InterlockedCompareExchange64(v7 + 17, v17 + 1, v17);
        v18 = v17 == v19;
        v17 = v19;
        if ( !v18 )
          continue;
      }
      goto LABEL_28;
    }
    do
      v21 = *(_DWORD *)(2 * v17 + 0x10);
    while ( v21 != 0x7FFFFFFF
         && v21 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v17 + 16), v21 + 1, v21) );
  }
LABEL_28:
  WindowsDeleteString(0LL);
  newString = 0LL;
  WindowsDuplicateString(a3, &newString);
  v22 = string;
  string = 0LL;
  v36 = v22;
  v23 = newString;
  newString = 0LL;
  v37 = v23;
  v40[0] = &string;
  v40[1] = &v36;
  v40[2] = &newString;
  v40[3] = &v37;
  v41 = 1;
  v24 = v7;
  if ( v7 )
  {
    v25 = *((_QWORD *)v7 + 17);
    while ( v25 >= 0 )
    {
      if ( (_DWORD)v25 != 0x7FFFFFFF )
      {
        v26 = _InterlockedCompareExchange64(v7 + 17, v25 + 1, v25);
        v18 = v25 == v26;
        v25 = v26;
        if ( !v18 )
          continue;
      }
      goto LABEL_36;
    }
    do
      v27 = *(_DWORD *)(2 * v25 + 0x10);
    while ( v27 != 0x7FFFFFFF
         && v27 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v25 + 16), v27 + 1, v27) );
LABEL_36:
    v22 = v36;
    v23 = v37;
  }
  v38 = 3;
  v39 = 128LL;
  v28 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v28;
  if ( v28 )
  {
    *((_QWORD *)v28 + 1) = v7;
    v31 = v28 + 16;
    *(_QWORD *)v31 = 0LL;
    if ( v31 != &v42 )
    {
      *(_QWORD *)v31 = v7;
      v24 = 0LL;
    }
    *((_QWORD *)v30 + 3) = v22;
    *((_QWORD *)v30 + 4) = v23;
    *(_QWORD *)v30 = &off_180049BD8;
    *((_DWORD *)v30 + 10) = 0;
    `eh vector constructor iterator'(
      v30 + 48,
      8LL,
      1LL,
      (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v30 + 10) = 0;
  }
  else
  {
    v30 = 0LL;
  }
  v8 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
         (__int64)&v38,
         a4,
         v29,
         (void (__fastcall ***)(_QWORD, __int64))v30);
  if ( v24 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v24);
  if ( (v8 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___((__int64)v40);
    WindowsDeleteString(newString);
    newString = 0LL;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v7);
    goto LABEL_47;
  }
  v41 = 0;
  wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___((__int64)v40);
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v7);
  WindowsDeleteString(string);
  return 0LL;
}
