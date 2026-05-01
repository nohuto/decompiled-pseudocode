/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180401A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B9C6C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803781D0 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1803781D0.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A5E4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1803FEDA8 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1803FEE1C (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___ @ 0x1803FEE90 (Windows--Internal--ComTaskPool--QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___ @ 0x1803FEF34 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1803FF288 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x1803FF2DC (_lambda_fc6cce9727cf9f8deae1663544b26742_--__lambda_fc6cce9727cf9f8deae1663544b26742_.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1803FF418 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180400268 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804027D0 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x180402BB0 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x180402C24 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x180402CD0 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x180403070 (-TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ.c)
 *     ?push_back@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@Z @ 0x1804032D8 (-push_back@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeopleP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  std::_Ref_count_base *v5; // rbx
  PeoplePaneViewManager *v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  RTL_SRWLOCK *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  RTL_SRWLOCK **v14; // rcx
  const char *v15; // r9
  int v16; // eax
  RTL_SRWLOCK *v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int16 *v25; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+40h] [rbp-C0h]
  std::_Ref_count_base *v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v31; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  char v34; // [rsp+70h] [rbp-90h]
  RTL_SRWLOCK *v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  char v39; // [rsp+98h] [rbp-68h]
  _QWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  char v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char v45; // [rsp+E0h] [rbp-20h]
  void **v46; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v47[4]; // [rsp+230h] [rbp+130h] BYREF
  char v48; // [rsp+250h] [rbp+150h]
  __int64 v49; // [rsp+258h] [rbp+158h]
  __int64 v50; // [rsp+260h] [rbp+160h]
  __int64 v51; // [rsp+268h] [rbp+168h]
  char v52; // [rsp+270h] [rbp+170h]
  void **v53; // [rsp+278h] [rbp+178h] BYREF
  __int64 v54[42]; // [rsp+3C0h] [rbp+2C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+458h]

  v25 = a2;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v54,
    (__int64)"PeoplePaneAppLaunch");
  v54[0] = (__int64)&CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v54, v25);
  *(_OWORD *)v30 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((RTL_SRWLOCK *)this - 11, (char *)v25, v30) < 0 )
  {
    v17 = (RTL_SRWLOCK *)operator new(0x60uLL);
    v35 = v17;
    *(_OWORD *)&v17->Ptr = 0LL;
    LODWORD(v17[1].Ptr) = 1;
    HIDWORD(v17[1].Ptr) = 1;
    v17->Ptr = &std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
    PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)&v17[2], v25, 0, 0x28800000168LL);
    v31 = v17 + 2;
    v32 = (std::_Ref_count_base *)v17;
    PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)&v17[2]);
    wil::AcquireSRWLockExclusive(&v35, (RTL_SRWLOCK *)this + 5);
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::push_back((char *)this + 48, &v31);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v35);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>(
      (__int64)v54,
      (const WCHAR **)&v25);
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0;
    v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&v26,
            (__int64)v25,
            0xFFFFFFFFFFFFFFFFuLL);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0;
      v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v36,
              (__int64)a3,
              0xFFFFFFFFFFFFFFFFuLL);
      v8 = v19;
      if ( v19 >= 0 )
      {
        CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v54, v47);
        v40[0] = (char *)this - 88;
        v40[2] = v27;
        v40[3] = v28;
        v20 = v26;
        v26 = 0LL;
        v28 = 0LL;
        v27 = 0LL;
        v40[1] = v20;
        v41 = 0;
        v29 = 1;
        v43 = v37;
        v44 = v38;
        v21 = v36;
        v36 = 0LL;
        v38 = 0LL;
        v37 = 0LL;
        v42 = v21;
        v45 = 0;
        v39 = 1;
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)&v46,
          (__int64)v47);
        v46 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___(
               v23,
               v22,
               *((_DWORD *)this + 107),
               (__int64)v40);
        lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_((__int64)v40);
        if ( v8 >= 0 )
        {
          CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
          v14 = (RTL_SRWLOCK **)&v26;
LABEL_30:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
          goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v8);
        CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v19);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v36);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v18);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId((PeoplePaneViewManager *)((char *)this - 88), v25);
LABEL_10:
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
    goto LABEL_34;
  }
  v5 = v30[0];
  if ( *((_QWORD *)v30[0] + 4) )
  {
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView<unsigned short const * &>(
      (__int64)v54,
      (const WCHAR **)&v25);
    if ( !a3 )
    {
      if ( !(unsigned int)PeoplePaneViewManager::TrySendFocusToTray(v6) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xB7,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v15);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 4) + 56LL))(*((_QWORD *)v5 + 4));
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB8,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v16);
      goto LABEL_31;
    }
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v31,
           (__int64)v25,
           0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_9:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v31);
      goto LABEL_10;
    }
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v26,
           (__int64)a3,
           0xFFFFFFFFFFFFFFFFuLL);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_8:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
      goto LABEL_9;
    }
    CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v54, v40);
    v47[0] = (char *)this - 88;
    v47[2] = v32;
    v47[3] = v33;
    v10 = v31;
    v31 = 0LL;
    v33 = 0LL;
    v32 = 0LL;
    v47[1] = v10;
    v48 = 0;
    v34 = 1;
    v50 = v27;
    v51 = v28;
    v11 = v26;
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v49 = v11;
    v52 = 0;
    v29 = 1;
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v53,
      (__int64)v40);
    v53 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___(
           v13,
           v12,
           *((_DWORD *)this + 107),
           (__int64)v47);
    lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_((__int64)v47);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
      CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v40);
      goto LABEL_8;
    }
    CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v40);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    v14 = &v31;
    goto LABEL_30;
  }
LABEL_31:
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v54,
    0);
  if ( v30[1] )
    std::_Ref_count_base::_Decref(v30[1]);
  v8 = 0;
LABEL_34:
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v54);
  return (unsigned int)v8;
}
