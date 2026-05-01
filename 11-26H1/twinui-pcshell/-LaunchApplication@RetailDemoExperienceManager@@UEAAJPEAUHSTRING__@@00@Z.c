/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18039D590
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180073520 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1801EDC5C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_Swap_data@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x1802111D8 (-_Swap_data@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039E394 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039E670 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039EDC4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18039EF68 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  WCHAR *StringRawBuffer; // rdx
  PCWSTR v9; // rax
  __int128 *v10; // rsi
  const WCHAR *v11; // r8
  const WCHAR *v12; // rcx
  void *v13; // rbx
  DWORD v14; // eax
  char *v15; // rdi
  WCHAR *v16; // rax
  int v17; // eax
  const WCHAR *v18; // rax
  const WCHAR *v19; // rbx
  const WCHAR *v20; // rcx
  WCHAR *v21; // rax
  const unsigned __int16 *v22; // rcx
  int v23; // eax
  _QWORD *v24; // rbx
  WCHAR *v25; // rax
  __int128 *v26; // rcx
  const WCHAR *v27; // rdx
  const unsigned __int16 *v28; // rcx
  int v29; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-A8h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-A8h]
  BOOL bIgnoreCaseb; // [rsp+20h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+30h] [rbp-98h] BYREF
  LPCWCH lpString1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v36[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v37[4]; // [rsp+78h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  wil::EnterCriticalSection(&v34, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a4, 0LL);
  std::wstring::operator=((char *)this + 184, StringRawBuffer);
  RetailDemoExperienceManager::_ParseExperienceArguments((char *)this - 128, (char *)this + 184);
  v9 = WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)lpString1, (__int64)v9);
  if ( *((_QWORD *)this + 9) )
  {
    if ( !*((_QWORD *)this + 17) )
      goto LABEL_16;
    v10 = (__int128 *)((char *)this + 120);
    v11 = (const WCHAR *)((char *)this + 120);
    if ( *((_QWORD *)this + 18) > 7uLL )
      v11 = *(const WCHAR **)v10;
    v12 = (const WCHAR *)lpString1;
    if ( lpString1[3] > (LPCWCH)7 )
      v12 = lpString1[0];
    if ( CompareStringOrdinal(v12, -1, v11, -1, 1) == 2 )
    {
LABEL_16:
      v18 = WindowsGetStringRawBuffer(a3, 0LL);
      v19 = (const WCHAR *)((char *)this + 152);
      v20 = (const WCHAR *)((char *)this + 152);
      if ( *((_QWORD *)this + 22) > 7uLL )
        v20 = *(const WCHAR **)v19;
      if ( CompareStringOrdinal(v20, -1, v18, -1, 1) != 2 )
      {
        v21 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
        std::wstring::operator=((char *)this + 152, v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v34,
          0LL);
        if ( *((_QWORD *)this + 22) > 7uLL )
          v19 = *(const WCHAR **)v19;
        v22 = (const unsigned __int16 *)((char *)this + 120);
        if ( *((_QWORD *)this + 18) > 7uLL )
          v22 = *(const unsigned __int16 **)v22;
        v23 = ActivateApplicationForExperienceWithPropertySet(
                v22,
                v19,
                (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
                0LL,
                1,
                0LL);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C7,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v23,
            bIgnoreCasea);
      }
      RetailDemoExperienceManager::_Show((RetailDemoExperienceManager *)((char *)this - 128));
    }
    else
    {
      RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)this - 128));
      v13 = (void *)*((_QWORD *)this + 41);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &v34,
        0LL);
      v14 = WaitForSingleObject(v13, 0x1388u);
      wil::details::in1diag3::Log_HrIfMsg(
        retaddr,
        (void *)0x1BA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        v14 == 258,
        (unsigned __int64)"RDX Experience Manager timeout waiting for close",
        (const char *)v34);
      v15 = (char *)this + 152;
      v16 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
      std::wstring::operator=(v15, v16);
      if ( v10 != (__int128 *)lpString1 )
        std::wstring::_Swap_data(v10, (__int128 *)lpString1);
      if ( *((_QWORD *)v15 + 3) > 7uLL )
        v15 = *(char **)v15;
      if ( *((_QWORD *)v10 + 3) > 7uLL )
        v10 = *(__int128 **)v10;
      v17 = ActivateApplicationForExperienceWithPropertySet(
              (const unsigned __int16 *)v10,
              (const WCHAR *)v15,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              0LL,
              1,
              0LL);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BE,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v17,
          bIgnoreCase);
    }
  }
  else
  {
    v24 = (_QWORD *)((char *)this + 152);
    v25 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
    std::wstring::operator=((char *)this + 152, v25);
    v26 = (__int128 *)((char *)this + 120);
    if ( (LPCWCH *)((char *)this + 120) != lpString1 )
      std::wstring::_Swap_data(v26, (__int128 *)lpString1);
    if ( *((_QWORD *)v26 + 3) > 7uLL )
      v26 = *(__int128 **)v26;
    std::wstring::wstring((__int64)v37, (__int64)v26);
    if ( *((_QWORD *)this + 22) > 7uLL )
      v24 = (_QWORD *)*v24;
    std::wstring::wstring((__int64)v36, (__int64)v24);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &v34,
      0LL);
    v27 = (const WCHAR *)v36;
    if ( v36[3] > 7uLL )
      v27 = (const WCHAR *)v36[0];
    v28 = (const unsigned __int16 *)v37;
    if ( v37[3] > 7uLL )
      v28 = (const unsigned __int16 *)v37[0];
    v29 = ActivateApplicationForExperienceWithPropertySet(
            v28,
            v27,
            (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
            0LL,
            1,
            0LL);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v29,
        bIgnoreCaseb);
    std::wstring::_Tidy_deallocate(v36);
    std::wstring::_Tidy_deallocate(v37);
  }
  std::wstring::_Tidy_deallocate(lpString1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v34);
  return 0LL;
}
