/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180062930
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800626E0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180013178 (-Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE648 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180136344 (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18014531C (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1801454B8 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetStopResult@?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801E2A38 (-SetStopResult@-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorT_ea_1801E2A38.c)
 *     ?StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1801F57B0 (-StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020714C (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a469c2389bb8dc71f832d95fbc03d5e0___ @ 0x180465528 (Windows--Internal--ComTaskPool--QueueTask__lambda_a469c2389bb8dc71f832d95fbc03d5e0___.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UKBViewInfo@@@1@AEAV21@@Z @ 0x1804663D0 (--$emplace_back@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V.c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::_lambda_a469c2389bb8dc71f832d95fbc03d5e0_ @ 0x180467D30 (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--_lambda_a469c2389bb8dc71f832d95fbc03d5e0_.c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::__lambda_a469c2389bb8dc71f832d95fbc03d5e0_ @ 0x1804686AC (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--__lambda_a469c2389bb8dc71f832d95fbc03d5e0_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct EventRegistrationToken a3)
{
  struct IUnknown ***Ptr; // rdi
  struct IUnknown ***v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  KBViewInfo *v13; // rdi
  KBViewInfo *v14; // rdx
  const char *v15; // r9
  KBViewInfo *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __m128i v21; // xmm6
  std::_Ref_count_base *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  std::_Ref_count_base *v26; // rcx
  std::_Ref_count_base *v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-358h] BYREF
  RTL_SRWLOCK *v30; // [rsp+38h] [rbp-350h] BYREF
  KBViewInfo *v31[2]; // [rsp+40h] [rbp-348h] BYREF
  struct IUnknown *v32; // [rsp+50h] [rbp-338h] BYREF
  std::_Ref_count_base *v33[2]; // [rsp+60h] [rbp-328h] BYREF
  RTL_SRWLOCK *v34; // [rsp+70h] [rbp-318h] BYREF
  _QWORD v35[42]; // [rsp+80h] [rbp-308h] BYREF
  _BYTE v36[368]; // [rsp+1D0h] [rbp-1B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+0h]

  v32 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v35,
    "OnViewCreated");
  v35[0] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v35);
  AcquireSRWLockExclusive(this + 53);
  v34 = this + 53;
  Ptr = (struct IUnknown ***)this[54].Ptr;
  v6 = (struct IUnknown ***)this[55].Ptr;
  v7 = ((char *)v6 - (char *)Ptr) >> 4;
  while ( Ptr != v6 && !(unsigned int)SHIsSameObject(**Ptr, a2) )
    Ptr += 2;
  if ( Ptr != this[55].Ptr )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)v35,
      &v30);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v35[34],
      2147483661LL,
      0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v30);
    TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v35,
      v7);
    goto LABEL_47;
  }
  v29 = 0LL;
  v30 = (RTL_SRWLOCK *)&v29;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v30);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(this, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v30 = this;
    *(_OWORD *)v31 = 0LL;
    try
    {
      v12 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>();
      v13 = *(KBViewInfo **)v12;
      v14 = *(KBViewInfo **)(v12 + 8);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      v31[0] = v13;
      v31[1] = v14;
      if ( v33[1] )
        std::_Ref_count_base::_Decref(v33[1]);
      KBViewInfo::InitializeIds(v13);
      std::vector<std::shared_ptr<KBViewInfo>>::emplace_back<std::shared_ptr<KBViewInfo> &>(&this[54], v31);
    }
    catch ( ... )
    {
      LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x1502,
                       (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                       v15);
      if ( v31[1] )
        std::_Ref_count_base::_Decref(v31[1]);
      v10 = (unsigned int)v32;
LABEL_45:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
LABEL_48:
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v34);
      TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v35);
      return v10;
    }
    v16 = v31[0];
    if ( !(_DWORD)v7 || KBViewInfo::IsAppDefaultView(v31[0]) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v16 + 344LL))(*(_QWORD *)v16, 3LL);
      v10 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x150A,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
        if ( v31[1] )
          std::_Ref_count_base::_Decref(v31[1]);
        v20 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_27;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v16 + 344LL))(*(_QWORD *)v16, 1LL);
      v10 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x150E,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        if ( v31[1] )
          std::_Ref_count_base::_Decref(v31[1]);
        v18 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_27;
      }
    }
    v21 = 0LL;
    *(_OWORD *)v33 = 0LL;
    v22 = v31[1];
    if ( v31[1] )
    {
      v21 = *(__m128i *)v31;
      *(_OWORD *)v33 = *(_OWORD *)v31;
      _InterlockedIncrement((volatile signed __int32 *)v31[1] + 3);
    }
    v23 = lambda_a469c2389bb8dc71f832d95fbc03d5e0_::_lambda_a469c2389bb8dc71f832d95fbc03d5e0_(
            (unsigned int)v36,
            (unsigned int)&v32,
            (unsigned int)&v29,
            (unsigned int)&v30,
            (__int64)v33,
            (__int64)v35);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_a469c2389bb8dc71f832d95fbc03d5e0___(
            v25,
            v24,
            HIDWORD(this[121].Ptr),
            v23);
    lambda_a469c2389bb8dc71f832d95fbc03d5e0_::__lambda_a469c2389bb8dc71f832d95fbc03d5e0_(v36);
    if ( (v10 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x154F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v10);
      v26 = (std::_Ref_count_base *)_mm_srli_si128(v21, 8).m128i_u64[0];
      if ( v26 )
        std::_Ref_count_base::_Decwref(v26);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      goto LABEL_45;
    }
    v27 = (std::_Ref_count_base *)_mm_srli_si128(v21, 8).m128i_u64[0];
    if ( v27 )
      std::_Ref_count_base::_Decwref(v27);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
LABEL_47:
    v10 = 0;
    goto LABEL_48;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  v11 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_27:
  if ( this != (RTL_SRWLOCK *)-424LL )
    ReleaseSRWLockExclusive(this + 53);
  v35[0] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v35);
  return v10;
}
