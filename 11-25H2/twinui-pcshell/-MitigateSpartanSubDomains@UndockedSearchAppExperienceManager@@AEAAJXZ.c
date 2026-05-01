/*
 * XREFs of ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803AD0D0
 * Callers:
 *     ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x18024A8C0 (-Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@@Z @ 0x18028AD98 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestFlags@@W4TestQueryOptions@@.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803A4E18 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A5008 (--1-$test_data_control@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A5078 (--1-$test_watcher@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51473953@@@details@wil@@QEAA_NXZ @ 0x1803B23F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51473953@@@details@wil@@QEAA_NXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1803B46F0 (-start@-$tip_test@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z @ 0x180654DB4 (-SHRegGetDWORDWithDefault@@YAXPEAUHKEY__@@PEBG1KPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::MitigateSpartanSubDomains(
        UndockedSearchAppExperienceManager *this)
{
  LSTATUS DWORD; // eax
  HKEY v2; // rcx
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  LSTATUS v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  volatile signed __int32 *v12; // rbx
  void **v13; // rcx
  int v14; // edi
  volatile signed __int32 *v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  volatile signed __int32 *v21; // rbx
  void **v22; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v23[40]; // [rsp+38h] [rbp-90h] BYREF
  volatile signed __int32 *v24; // [rsp+60h] [rbp-68h]
  volatile signed __int32 *v25; // [rsp+68h] [rbp-60h] BYREF
  volatile signed __int32 *v26; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+78h] [rbp-50h] BYREF
  volatile signed __int32 *v28; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+88h] [rbp-40h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-38h] BYREF
  __int64 v31; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  UndockedSearchAppExperienceManager *v33; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+10h] BYREF
  volatile signed __int32 *v35; // [rsp+E0h] [rbp+18h] BYREF
  volatile signed __int32 *v36; // [rsp+E8h] [rbp+20h] BYREF

  v33 = this;
  v35 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::start(
    &v35,
    &v31);
  v22 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v23,
    (struct wil::details::IFailureCallback *)&v22,
    0LL,
    1);
  v24 = v35;
  if ( v35 )
    _InterlockedIncrement(v35 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>((void **)&v35);
  v34 = 0;
  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_51473953>::__private_IsEnabled() )
    {
      DWORD = SHRegGetDWORD(
                HKEY_CLASSES_ROOT,
                L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.cl"
                 "ient.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
                L"NumberOfSubdomains",
                &v34);
      v3 = DWORD;
      if ( DWORD == 2 )
      {
        v4 = v24;
        v36 = v24;
        if ( v24 )
          _InterlockedIncrement(v24 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v4 + 2));
        *((_BYTE *)v4 + 267) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v36);
        v5 = v24;
        v25 = v24;
        if ( v24 )
          _InterlockedIncrement(v24 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v5 + 2));
        tip2::details::shared_data<0,0,0>::complete_helper((__int64)(v5 + 2), 2048, 0xAu);
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v25);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
        return 0LL;
      }
      if ( DWORD < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3AD,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)DWORD);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
        return v3;
      }
    }
    else
    {
      v8 = SHRegGetDWORD(
             HKEY_CLASSES_ROOT,
             L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.clien"
              "t.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
             L"NumberOfSubdomains",
             &v34);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B1,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
        return v9;
      }
    }
    LODWORD(v33) = 0;
    SHRegGetDWORDWithDefault(
      v2,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
      L"SubdomainResetCount",
      0,
      (unsigned int *)&v33);
    if ( v34 < 0x3E8 )
    {
      if ( (_DWORD)v33 )
      {
        v18 = v24;
        v29 = v24;
        if ( v24 )
          _InterlockedIncrement(v24 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v18 + 2));
        *((_BYTE *)v18 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v29);
        v19 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                L"SubdomainResetCount",
                0);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3CB,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v19);
          tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
          return v20;
        }
      }
    }
    else
    {
      v10 = SHRegSetDWORD(
              HKEY_CLASSES_ROOT,
              L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.clie"
               "nt.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage",
              L"NumberOfSubdomains",
              1);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3BA,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
        return v11;
      }
      v12 = v24;
      if ( (_DWORD)v33 )
      {
        v26 = v24;
        if ( v24 )
          _InterlockedIncrement(v24 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v12 + 2));
        *((_BYTE *)v12 + 264) = 1;
        v13 = (void **)&v26;
      }
      else
      {
        v27 = v24;
        if ( v24 )
          _InterlockedIncrement(v24 + 68);
        tip2::details::shared_data<0,0,1>::begin_update((__int64)(v12 + 2));
        *((_BYTE *)v12 + 266) = 1;
        v13 = (void **)&v27;
      }
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>(v13);
      v14 = (_DWORD)v33 + 1;
      LODWORD(v33) = (_DWORD)v33 + 1;
      v15 = v24;
      v28 = v24;
      if ( v24 )
        _InterlockedIncrement(v24 + 68);
      tip2::details::shared_data<0,0,1>::begin_update((__int64)(v15 + 2));
      *((_DWORD *)v15 + 67) = v14;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v28);
      v16 = SHRegSetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
              L"SubdomainResetCount",
              (int)v33);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
        tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
        return v17;
      }
    }
    v21 = v24;
    v30 = v24;
    if ( v24 )
      _InterlockedIncrement(v24 + 68);
    tip2::details::shared_data<0,0,1>::begin_update((__int64)(v21 + 2));
    tip2::details::shared_data<0,0,0>::complete_helper((__int64)(v21 + 2), 2048, 0xAu);
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((void **)&v30);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>>((__int64)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v33) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3D1,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                     v6);
    return (unsigned int)v33;
  }
  return result;
}
