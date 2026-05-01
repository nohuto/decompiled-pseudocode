/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C404C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180382474 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x180409718 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x18040978C (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___ @ 0x180409800 (Windows--Internal--ComTaskPool--QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___ @ 0x1804098AC (Windows--Internal--ComTaskPool--QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___.c)
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::_lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x180409BA8 (_lambda_fc6cce9727cf9f8deae1663544b26742_--_lambda_fc6cce9727cf9f8deae1663544b26742_.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x180409C60 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     _lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_ @ 0x180409CB4 (_lambda_fc6cce9727cf9f8deae1663544b26742_--__lambda_fc6cce9727cf9f8deae1663544b26742_.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x180409DF0 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18040ACE0 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18040D1E0 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x18040D610 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x18040D684 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x18040D744 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x18040DB50 (-TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ.c)
 *     ?push_back@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@Z @ 0x18040DE24 (-push_back@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeopleP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rbx
  PeoplePaneViewManager *v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int *v13; // rcx
  const char *v14; // r9
  int v15; // eax
  RTL_SRWLOCK *v16; // rdi
  __m128i v17; // xmm6
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int16 *v24; // [rsp+38h] [rbp-D0h] BYREF
  RTL_SRWLOCK *v25; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  char v28; // [rsp+58h] [rbp-B0h]
  __int128 v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+80h] [rbp-88h]
  char v33; // [rsp+88h] [rbp-80h]
  RTL_SRWLOCK *v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35[42]; // [rsp+98h] [rbp-70h] BYREF
  int v36[100]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v37[100]; // [rsp+378h] [rbp+270h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  v24 = a2;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"PeoplePaneAppLaunch");
  v35[0] = (__int64)&CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v35, v24);
  v29 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((RTL_SRWLOCK *)this - 11, (__int64)v24, &v29) < 0 )
  {
    v16 = (RTL_SRWLOCK *)operator new(0x60uLL);
    v34 = v16;
    *(_OWORD *)&v16->Ptr = 0LL;
    LODWORD(v16[1].Ptr) = 1;
    HIDWORD(v16[1].Ptr) = 1;
    v16->Ptr = &std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
    PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)&v16[2], (__int64)v24, 0, 0x28800000168LL);
    v25 = v16 + 2;
    v26 = (std::_Ref_count_base *)v16;
    PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)&v16[2]);
    wil::AcquireSRWLockExclusive(&v34, (RTL_SRWLOCK *)this + 5);
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::push_back((char *)this + 48, &v25);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v34);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    v17 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                        &v25,
                        (__int64)this - 88,
                        (__int64)&v24);
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>(
      (__int64)v35,
      (const WCHAR **)&v24);
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&v25,
            (__int64)v24,
            0xFFFFFFFFFFFFFFFFuLL);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0;
      v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v30,
              (__int64)a3,
              0xFFFFFFFFFFFFFFFFuLL);
      v8 = v19;
      if ( v19 >= 0 )
      {
        CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v35, v37);
        v20 = lambda_fc6cce9727cf9f8deae1663544b26742_::_lambda_fc6cce9727cf9f8deae1663544b26742_(
                (__int64)v36,
                (__int64)this - 88,
                (__int64 *)&v25,
                &v30,
                (__int64)v37);
        v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc6cce9727cf9f8deae1663544b26742___(
               v22,
               v21,
               *((_DWORD *)this + 107),
               v20);
        lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_((__int64)v36);
        if ( v8 >= 0 )
        {
          v13 = v37;
LABEL_30:
          CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v13);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
          goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v8);
        CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v37);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v19);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v18);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      (PeoplePaneViewManager *)v17.m128i_i64[0],
      *(const unsigned __int16 **)_mm_srli_si128(v17, 8).m128i_i64[0]);
LABEL_10:
    if ( *((_QWORD *)&v29 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v29 + 1));
    goto LABEL_34;
  }
  v5 = v29;
  if ( *(_QWORD *)(v29 + 32) )
  {
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView<unsigned short const * &>(
      (__int64)v35,
      (const WCHAR **)&v24);
    if ( !a3 )
    {
      if ( !(unsigned int)PeoplePaneViewManager::TrySendFocusToTray(v6) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xB7,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 32) + 56LL))(*(_QWORD *)(v5 + 32));
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB8,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v15);
      goto LABEL_31;
    }
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v25,
           (__int64)v24,
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
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
      goto LABEL_10;
    }
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v30,
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
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
      goto LABEL_9;
    }
    CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v35, v36);
    v10 = lambda_fc6cce9727cf9f8deae1663544b26742_::_lambda_fc6cce9727cf9f8deae1663544b26742_(
            (__int64)v37,
            (__int64)this - 88,
            (__int64 *)&v25,
            &v30,
            (__int64)v36);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_7fb1d73188a4d99ee1a3e1b09221d397___(
           v12,
           v11,
           *((_DWORD *)this + 107),
           v10);
    lambda_fc6cce9727cf9f8deae1663544b26742_::__lambda_fc6cce9727cf9f8deae1663544b26742_((__int64)v37);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
      CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v36);
      goto LABEL_8;
    }
    v13 = v36;
    goto LABEL_30;
  }
LABEL_31:
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v35,
    0);
  if ( *((_QWORD *)&v29 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v29 + 1));
  v8 = 0;
LABEL_34:
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v35);
  return (unsigned int)v8;
}
