/*
 * XREFs of ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B5B40
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18023E150 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x18027EF5C (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802BF8E0 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803AE0A0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE30C (--1-$test_data_control@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE37C (--1-$test_watcher@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1803BDEC8 (-start@-$tip_test@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x18067AD98 (-SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::MitigateSpartanSubDomains(
        UndockedSearchAppExperienceManager *this)
{
  LSTATUS DWORD; // eax
  HKEY v2; // rcx
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  void **v18; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v19[40]; // [rsp+48h] [rbp-40h] BYREF
  volatile signed __int32 *v20; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  UndockedSearchAppExperienceManager *v22; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h] BYREF
  volatile signed __int32 *v24; // [rsp+A0h] [rbp+18h] BYREF

  v22 = this;
  v24 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::start(
    &v24,
    &v17);
  v18 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v19,
    (struct wil::details::IFailureCallback *)&v18,
    0LL,
    1);
  v20 = v24;
  if ( v24 )
    _InterlockedIncrement(v24 + 70);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>((void **)&v24);
  v23 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CLASSES_ROOT,
            L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client"
             ".cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
            L"NumberOfSubdomains",
            &v23);
  v3 = DWORD;
  if ( DWORD == 2 )
  {
    v4 = v20;
    v24 = v20;
    if ( v20 )
      _InterlockedIncrement(v20 + 70);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v4 + 2));
    *((_BYTE *)v4 + 275) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v24);
    v5 = v20;
    v24 = v20;
    if ( v20 )
      _InterlockedIncrement(v20 + 70);
  }
  else
  {
    if ( DWORD < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3AF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)DWORD);
      tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v18);
      return v3;
    }
    LODWORD(v22) = 0;
    SHRegGetDWORDWithDefault(
      v2,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
      L"SubdomainResetCount",
      0,
      (unsigned int *)&v22);
    if ( v23 < 0x3E8 )
    {
      if ( (_DWORD)v22 )
      {
        v14 = v20;
        v24 = v20;
        if ( v20 )
          _InterlockedIncrement(v20 + 70);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v14 + 2));
        *((_BYTE *)v14 + 273) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v24);
        v15 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                L"SubdomainResetCount",
                0);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C8,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
          tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v18);
          return v16;
        }
      }
    }
    else
    {
      v7 = SHRegSetDWORD(
             HKEY_CLASSES_ROOT,
             L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.clien"
              "t.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
             L"NumberOfSubdomains",
             1);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v18);
        return v8;
      }
      v9 = v20;
      v24 = v20;
      if ( (_DWORD)v22 )
      {
        if ( v20 )
          _InterlockedIncrement(v20 + 70);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v9 + 2));
        *((_BYTE *)v9 + 272) = 1;
      }
      else
      {
        if ( v20 )
          _InterlockedIncrement(v20 + 70);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v9 + 2));
        *((_BYTE *)v9 + 274) = 1;
      }
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v24);
      v10 = (_DWORD)v22 + 1;
      LODWORD(v22) = (_DWORD)v22 + 1;
      v11 = v20;
      v24 = v20;
      if ( v20 )
        _InterlockedIncrement(v20 + 70);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v11 + 2));
      *((_DWORD *)v11 + 69) = v10;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v24);
      v12 = SHRegSetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
              L"SubdomainResetCount",
              (int)v22);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C3,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v18);
        return v13;
      }
    }
    v5 = v20;
    v24 = v20;
    if ( v20 )
      _InterlockedIncrement(v20 + 70);
  }
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v5 + 2));
  tip2::details::shared_data<0,0,0>::complete_helper((__int64)(v5 + 2), 2048, 0xAu);
  tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v24);
  tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v18);
  return 0LL;
}
