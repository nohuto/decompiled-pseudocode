/*
 * XREFs of ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18005A6C4
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800589A0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18005AF24 (-has_extension@path@filesystem@std@@QEBA_NXZ.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18005B1E4 (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18005B5D0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180127670 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     __std_find_trivial_2 @ 0x1802D5540 (__std_find_trivial_2.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031CCF0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall StartupNotification::GetFileDescription(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  unsigned __int64 v4; // rdi
  _OWORD *v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  PCWSTR *v8; // rax
  char v9; // di
  __int64 v10; // r9
  void **i; // rcx
  void **v12; // rdx
  void **v13; // rdi
  void **v14; // rax
  void **trivial_2; // rax
  void **v16; // rcx
  void **v17; // rax
  unsigned __int64 v18; // rsi
  char v19; // r14
  void *v20; // rdx
  void *v21; // rcx
  void *v22; // rdx
  void *v23; // rcx
  const WCHAR *v24; // rcx
  const char *v25; // r9
  void **v26; // r9
  const char *v27; // r9
  void *v28; // rdx
  WCHAR *v29; // rcx
  size_t size_of; // rax
  WCHAR *v32; // rax
  HRESULT v33; // eax
  __int64 (__fastcall **v34)(LPVOID, GUID *, void **); // rax
  int v35; // eax
  PCWSTR *v36; // rdx
  int v37; // eax
  void **v38; // rax
  PCWSTR *v39; // rax
  int ppv; // [rsp+20h] [rbp-A9h]
  void *v41; // [rsp+30h] [rbp-99h] BYREF
  LPVOID v42; // [rsp+38h] [rbp-91h] BYREF
  void *v43[2]; // [rsp+40h] [rbp-89h] BYREF
  PWSTR ppszApplication; // [rsp+50h] [rbp-79h] BYREF
  int v45; // [rsp+58h] [rbp-71h]
  PWSTR ppszParameters; // [rsp+60h] [rbp-69h] BYREF
  PCWSTR pszCmdTemplate[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-51h]
  unsigned __int64 v49; // [rsp+80h] [rbp-49h]
  void *v50[2]; // [rsp+88h] [rbp-41h] BYREF
  __int128 v51; // [rsp+98h] [rbp-31h]
  void *v52[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v54; // [rsp+C0h] [rbp-9h]
  void *v55[2]; // [rsp+C8h] [rbp-1h] BYREF
  __m128i si128; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v2 = a2;
  v43[0] = a1;
  v45 = 0;
  *(_OWORD *)pszCmdTemplate = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v4 = a2[2];
  v5 = a2;
  if ( a2[3] > 7uLL )
    v5 = (_OWORD *)*a2;
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( v4 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( v4 > 7 )
  {
    v49 = 7LL;
    if ( (v4 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v6 = v4 | 7;
      if ( (v4 | 7) < 0xA )
        v6 = 10LL;
    }
    size_of = std::_Get_size_of_n<2>(v6 + 1);
    if ( size_of >= 0x1000 )
    {
      v32 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(size_of);
    }
    else if ( size_of )
    {
      v32 = (WCHAR *)operator new(size_of);
    }
    else
    {
      v32 = 0LL;
    }
    pszCmdTemplate[0] = v32;
    v48 = v4;
    v49 = v6;
    memcpy_0(v32, v5, 2 * v4 + 2);
    v7 = v6;
  }
  else
  {
    v48 = a2[2];
    v7 = 7LL;
    v49 = 7LL;
    *(_OWORD *)pszCmdTemplate = *v5;
  }
  v8 = pszCmdTemplate;
  if ( v7 > 7 )
    v8 = (PCWSTR *)pszCmdTemplate[0];
  v43[0] = v8;
  v43[1] = (void *)v4;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v52, v43);
  v9 = 8;
  if ( !std::filesystem::path::has_extension((std::filesystem::path *)v52) )
  {
    v18 = *((_QWORD *)&v51 + 1);
    goto LABEL_31;
  }
  v43[0] = (void *)L".lnk";
  v43[1] = (void *)4;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v50, v43);
  v45 = 41;
  i = v52;
  if ( v54 > 7 )
    i = (void **)v52[0];
  v12 = (void **)((char *)i + 2 * v53);
  v13 = v12;
  LOWORD(v10) = 47;
  if ( v53 >= 2 )
  {
    if ( (*(_DWORD *)i & 0xFFFFFFDF) - 3801153 >= 0x1A )
    {
      if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        if ( v53 >= 4
          && (*((_WORD *)i + 3) == 92 || *((_WORD *)i + 3) == 47)
          && (v53 == 4 || *((_WORD *)i + 4) != 92 && *((_WORD *)i + 4) != 47)
          && ((*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
           && (*((_WORD *)i + 2) == 63 || *((_WORD *)i + 2) == 46)
           || *((_WORD *)i + 1) == 63 && *((_WORD *)i + 2) == 63) )
        {
          i = (void **)((char *)i + 6);
        }
        else if ( 2 * v53 >= 6
               && (*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
               && *((_WORD *)i + 2) != 92
               && *((_WORD *)i + 2) != 47 )
        {
          for ( i = (void **)((char *)i + 6);
                i != v12 && *(_WORD *)i != 92 && *(_WORD *)i != 47;
                i = (void **)((char *)i + 2) )
          {
            ;
          }
        }
      }
    }
    else
    {
      i = (void **)((char *)i + 4);
    }
  }
  while ( i != v12 && (*(_WORD *)i == 92 || *(_WORD *)i == 47) )
    i = (void **)((char *)i + 2);
  if ( i != v12 )
  {
    do
    {
      v14 = (void **)((char *)v13 - 2);
      if ( *((_WORD *)v13 - 1) == 92 )
        break;
      if ( *(_WORD *)v14 == 47 )
        break;
      v13 = (void **)((char *)v13 - 2);
    }
    while ( i != v14 );
  }
  trivial_2 = (void **)_std_find_trivial_2(v13, v12, 58LL, v10);
  v16 = trivial_2;
  if ( v13 != trivial_2 )
  {
    trivial_2 = (void **)((char *)trivial_2 - 2);
    if ( v13 == trivial_2 )
      goto LABEL_130;
    if ( *(_WORD *)trivial_2 != 46 )
    {
      while ( 1 )
      {
        trivial_2 = (void **)((char *)trivial_2 - 2);
        if ( v13 == trivial_2 )
          goto LABEL_130;
        if ( *(_WORD *)trivial_2 == 46 )
          goto LABEL_26;
      }
    }
    if ( v13 == (void **)((char *)trivial_2 - 2) && *((_WORD *)trivial_2 - 1) == 46 )
LABEL_130:
      trivial_2 = v16;
  }
LABEL_26:
  v43[0] = trivial_2;
  v43[1] = (void *)(((char *)v16 - (char *)trivial_2) >> 1);
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v55, v43);
  v9 = -85;
  v17 = v50;
  v18 = *((_QWORD *)&v51 + 1);
  if ( *((_QWORD *)&v51 + 1) > 7uLL )
    v17 = (void **)v50[0];
  v43[0] = v17;
  v43[1] = (void *)v51;
  if ( !(unsigned int)std::filesystem::path::compare(v55, v43) )
  {
    v19 = 1;
    goto LABEL_32;
  }
LABEL_31:
  v19 = 0;
LABEL_32:
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( si128.m128i_i64[1] > 7uLL )
    {
      v20 = (void *)(2 * si128.m128i_i64[1] + 2);
      v42 = v20;
      v21 = v55[0];
      v41 = v55[0];
      if ( (unsigned __int64)v20 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v41, (unsigned __int64 *)&v42);
        v20 = v42;
        v21 = v41;
      }
      operator delete(v21, (const struct std::nothrow_t *)v20);
      v18 = *((_QWORD *)&v51 + 1);
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v55[0]) = 0;
  }
  if ( (v9 & 1) != 0 && v18 > 7 )
  {
    v22 = (void *)(2 * v18 + 2);
    v42 = v22;
    v23 = v50[0];
    v41 = v50[0];
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v41, (unsigned __int64 *)&v42);
      v22 = v42;
      v23 = v41;
    }
    operator delete(v23, (const struct std::nothrow_t *)v22);
  }
  if ( v19 )
  {
    v42 = 0LL;
    v33 = CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, &v42);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v33,
        ppv);
    v41 = 0LL;
    v34 = *(__int64 (__fastcall ***)(LPVOID, GUID *, void **))v42;
    v41 = 0LL;
    v35 = (*v34)(v42, &GUID_0000010b_0000_0000_c000_000000000046, &v41);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v35,
        ppv);
    if ( v2[3] > 7uLL )
      v2 = (_QWORD *)*v2;
    if ( (*(int (__fastcall **)(void *, _QWORD *, _QWORD))(*(_QWORD *)v41 + 40LL))(v41, v2, 0LL) < 0 )
    {
      std::wstring::wstring((char **)a1, &LocaleName);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
LABEL_73:
      std::wstring::_Tidy_deallocate(v52);
      std::wstring::_Tidy_deallocate((void **)pszCmdTemplate);
      return a1;
    }
    if ( v48 >= 0x104 )
    {
      v39 = pszCmdTemplate;
      if ( v49 > 7 )
        v39 = (PCWSTR *)pszCmdTemplate[0];
      v48 = 260LL;
      *((_WORD *)v39 + 260) = 0;
    }
    else
    {
      std::wstring::append(pszCmdTemplate, 260 - v48, 0LL);
    }
    v36 = pszCmdTemplate;
    if ( v49 > 7 )
      v36 = (PCWSTR *)pszCmdTemplate[0];
    v37 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR *, __int64, _QWORD))(*(_QWORD *)v42 + 24LL))(v42, v36, 260LL, 0LL);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x68,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v37,
        4);
    if ( v41 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
    if ( v42 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v42 + 16LL))(v42);
  }
  ppszParameters = 0LL;
  ppszApplication = 0LL;
  v24 = (const WCHAR *)pszCmdTemplate;
  if ( v49 > 7 )
    v24 = pszCmdTemplate[0];
  if ( SHEvaluateSystemCommandTemplate(v24, &ppszApplication, 0LL, &ppszParameters) < 0 )
  {
    *(_OWORD *)a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    if ( ppszParameters )
      CoTaskMemFree(ppszParameters);
    if ( ppszApplication )
      CoTaskMemFree(ppszApplication);
    goto LABEL_73;
  }
  *(_OWORD *)v50 = 0LL;
  *(_QWORD *)&v51 = 0LL;
  *((_QWORD *)&v51 + 1) = 7LL;
  LOWORD(v50[0]) = 0;
  LODWORD(v41) = 0;
  if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, 0LL, &v41) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x71,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      v25);
  if ( (unsigned int)v41 <= (unsigned __int64)v51 )
  {
    v38 = v50;
    if ( *((_QWORD *)&v51 + 1) > 7uLL )
      v38 = (void **)v50[0];
    *(_QWORD *)&v51 = (unsigned int)v41;
    *((_WORD *)v38 + (unsigned int)v41) = 0;
  }
  else
  {
    std::wstring::append(v50, (unsigned int)v41 - (_QWORD)v51, 0LL);
  }
  v26 = v50;
  if ( *((_QWORD *)&v51 + 1) > 7uLL )
    v26 = (void **)v50[0];
  if ( !(unsigned int)SHGetFileDescriptionW(ppszApplication, 0LL, 0LL, v26, &v41) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x73,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      v27);
  *(_OWORD *)a1 = *(_OWORD *)v50;
  *((_OWORD *)a1 + 1) = v51;
  *(_QWORD *)&v51 = 0LL;
  *((_QWORD *)&v51 + 1) = 7LL;
  LOWORD(v50[0]) = 0;
  if ( ppszParameters )
    CoTaskMemFree(ppszParameters);
  if ( ppszApplication )
    CoTaskMemFree(ppszApplication);
  std::wstring::_Tidy_deallocate(v52);
  if ( v49 > 7 )
  {
    v28 = (void *)(2 * v49 + 2);
    v42 = v28;
    v29 = (WCHAR *)pszCmdTemplate[0];
    v43[0] = (void *)pszCmdTemplate[0];
    if ( (unsigned __int64)v28 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v43, (unsigned __int64 *)&v42);
      v28 = v42;
      v29 = (WCHAR *)v43[0];
    }
    operator delete(v29, (const struct std::nothrow_t *)v28);
  }
  return a1;
}
