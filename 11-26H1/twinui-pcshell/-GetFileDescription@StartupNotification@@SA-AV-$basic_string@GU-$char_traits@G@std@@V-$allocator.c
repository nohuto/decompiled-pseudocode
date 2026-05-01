/*
 * XREFs of ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18003263C (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180032908 (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z @ 0x180334B6C (--$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall StartupNotification::GetFileDescription(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  PCWSTR *v4; // rdx
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdx
  unsigned __int16 *v9; // r9
  unsigned __int16 *v10; // rdi
  unsigned __int16 *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  _WORD *v14; // rdx
  __int128 *v15; // rax
  char v16; // r14
  const WCHAR *v17; // rcx
  const char *v18; // r9
  LPVOID *v19; // r9
  const char *v20; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  HRESULT Instance; // eax
  __int64 (__fastcall **v25)(LPVOID, GUID *, __int64 *); // rax
  int v26; // eax
  PCWSTR *v27; // rdx
  int v28; // eax
  LPVOID *v29; // rax
  PCWSTR *v30; // rax
  unsigned __int16 *v31; // rdx
  unsigned __int16 *v32; // r8
  __int64 v33; // r8
  __int16 v34; // cx
  int ppv; // [rsp+20h] [rbp-A9h]
  __int64 v36; // [rsp+30h] [rbp-99h] BYREF
  PWSTR ppszApplication; // [rsp+38h] [rbp-91h] BYREF
  PWSTR ppszParameters; // [rsp+40h] [rbp-89h] BYREF
  int v39; // [rsp+48h] [rbp-81h]
  LPVOID v40[2]; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-69h]
  unsigned __int64 v42; // [rsp+68h] [rbp-61h]
  PCWSTR pszCmdTemplate[2]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-49h]
  unsigned __int64 v45; // [rsp+88h] [rbp-41h]
  std::filesystem *v46[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-21h]
  __int128 v49; // [rsp+B0h] [rbp-19h] BYREF
  void *v50; // [rsp+C0h] [rbp-9h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-1h]
  __int128 v52; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+17h]
  __int64 v54; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v2 = a2;
  ppszParameters = (PWSTR)a1;
  v39 = 0;
  *(_OWORD *)pszCmdTemplate = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  std::wstring::_Construct<2,unsigned short const *>(pszCmdTemplate, a2, v2[2]);
  v4 = pszCmdTemplate;
  if ( v45 > 7 )
    v4 = (PCWSTR *)pszCmdTemplate[0];
  *(_OWORD *)v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  std::wstring::_Construct<1,unsigned short const *>(v46, v4, v44);
  v5 = 24;
  if ( !std::filesystem::path::has_extension((std::filesystem::path *)v46) )
    goto LABEL_22;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)L".lnk");
  std::wstring::_Construct<1,unsigned short const *>(&v49, v7, v6);
  v39 = 121;
  v8 = (unsigned __int16 *)v46;
  if ( v48 > 7 )
    v8 = (unsigned __int16 *)v46[0];
  v9 = &v8[v47];
  v10 = v9;
  if ( (2 * v47) >> 1 >= 2 )
  {
    if ( std::filesystem::_Is_drive_prefix((std::filesystem *)v8, v8) )
    {
      v8 = v11 + 2;
      goto LABEL_13;
    }
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v11) )
    {
      if ( v22 >= 4 )
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[3])
          && (v33 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[4]))
          && ((unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[1]) && (v8[2] == 63 || v8[2] == 46)
           || v34 == 63 && v8[2] == 63) )
        {
          v8 += 3;
          goto LABEL_13;
        }
      }
      else if ( v22 < 3 )
      {
        goto LABEL_13;
      }
      if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[1])
        && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[2]) )
      {
        for ( v8 += 3; v8 != v9 && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v8); ++v8 )
          ;
      }
    }
  }
LABEL_13:
  while ( v8 != v9 )
  {
    if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v8) )
    {
      do
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(v10 - 1)) )
          break;
        v10 = v32;
      }
      while ( v31 != v32 );
      break;
    }
    v8 = (unsigned __int16 *)(v12 + 2);
  }
  v13 = std::_Find_vectorized<unsigned short const,unsigned short>(v10, v9, 58LL);
  if ( v10 == (unsigned __int16 *)v13 )
    goto LABEL_92;
  v14 = (_WORD *)(v13 - 2);
  if ( v10 == (unsigned __int16 *)(v13 - 2) )
    goto LABEL_92;
  if ( *v14 != 46 )
  {
    while ( 1 )
    {
      if ( v10 == --v14 )
        goto LABEL_92;
      if ( *v14 == 46 )
        goto LABEL_19;
    }
  }
  if ( v10 == (unsigned __int16 *)(v13 - 4) && *(_WORD *)(v13 - 4) == 46 )
LABEL_92:
    v14 = (_WORD *)v13;
LABEL_19:
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  std::wstring::_Construct<1,unsigned short const *>(&v52, v14, (v13 - (__int64)v14) >> 1);
  v5 = -5;
  v15 = &v49;
  if ( v51 > 7 )
    v15 = (__int128 *)v49;
  v40[0] = v15;
  v40[1] = v50;
  v16 = 1;
  if ( (unsigned int)std::filesystem::path::compare((std::filesystem *)&v52) )
LABEL_22:
    v16 = 0;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::wstring::_Tidy_deallocate(&v52);
  }
  if ( (v5 & 1) != 0 )
    std::wstring::_Tidy_deallocate(&v49);
  if ( v16 )
  {
    v40[0] = 0LL;
    Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, v40);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
    v36 = 0LL;
    v25 = *(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))v40[0];
    v36 = 0LL;
    v26 = (*v25)(v40[0], &GUID_0000010b_0000_0000_c000_000000000046, &v36);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v26,
        ppv);
    if ( v2[3] > 7uLL )
      v2 = (_QWORD *)*v2;
    if ( (*(int (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v36 + 40LL))(v36, v2, 0LL) < 0 )
    {
      std::wstring::wstring(a1, (__int64)&pvData);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v40);
      goto LABEL_42;
    }
    if ( v44 >= 0x104 )
    {
      v44 = 260LL;
      v30 = pszCmdTemplate;
      if ( v45 > 7 )
        v30 = (PCWSTR *)pszCmdTemplate[0];
      *((_WORD *)v30 + 260) = 0;
    }
    else
    {
      std::wstring::append(pszCmdTemplate, 260 - v44, 0LL);
    }
    v27 = pszCmdTemplate;
    if ( v45 > 7 )
      v27 = (PCWSTR *)pszCmdTemplate[0];
    v28 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR *, __int64, _QWORD))(*(_QWORD *)v40[0] + 24LL))(
            v40[0],
            v27,
            260LL,
            0LL);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x68,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v28,
        4);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    if ( v40[0] )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v40[0] + 16LL))(v40[0]);
  }
  ppszParameters = 0LL;
  ppszApplication = 0LL;
  v17 = (const WCHAR *)pszCmdTemplate;
  if ( v45 > 7 )
    v17 = pszCmdTemplate[0];
  if ( SHEvaluateSystemCommandTemplate(v17, &ppszApplication, 0LL, &ppszParameters) < 0 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    v23 = std::_WChar_traits<wchar_t>::length((__int64)&pvData);
    std::wstring::_Construct<1,unsigned short const *>(a1, &pvData, v23);
  }
  else
  {
    std::wstring::wstring(v40);
    LODWORD(v36) = 0;
    if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, 0LL, &v36) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x71,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        v18);
    if ( (unsigned int)v36 <= v41 )
    {
      v41 = (unsigned int)v36;
      v29 = v40;
      if ( v42 > 7 )
        v29 = (LPVOID *)v40[0];
      *((_WORD *)v29 + (unsigned int)v36) = 0;
    }
    else
    {
      std::wstring::append(v40, (unsigned int)v36 - v41, 0LL);
    }
    v19 = v40;
    if ( v42 > 7 )
      v19 = (LPVOID *)v40[0];
    if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, v19, &v36) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x73,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        v20);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    std::wstring::_Take_contents(a1, v40);
    std::wstring::_Tidy_deallocate(v40);
  }
  if ( ppszParameters )
    CoTaskMemFree(ppszParameters);
  if ( ppszApplication )
    CoTaskMemFree(ppszApplication);
LABEL_42:
  std::wstring::_Tidy_deallocate(v46);
  std::wstring::_Tidy_deallocate(pszCmdTemplate);
  return a1;
}
