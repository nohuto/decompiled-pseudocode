/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800BDD60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800BC0CC (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x1800BE1EC (--$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@X.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE648 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800BE814 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellC.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3b092b602b32291197616247ac44fb10___ @ 0x180465278 (Windows--Internal--ComTaskPool--QueueTask__lambda_3b092b602b32291197616247ac44fb10___.c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::_lambda_3b092b602b32291197616247ac44fb10_ @ 0x180467B50 (_lambda_3b092b602b32291197616247ac44fb10_--_lambda_3b092b602b32291197616247ac44fb10_.c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_ @ 0x1804685F0 (_lambda_3b092b602b32291197616247ac44fb10_--__lambda_3b092b602b32291197616247ac44fb10_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  char *Ptr; // rdi
  char *v6; // r15
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 *v10; // r15
  int v11; // r14d
  __int64 *v12; // rdi
  struct IApplicationFrame *v13; // rdx
  struct IApplicationFrame *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationFrame *v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  int v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v27[352]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Start<>((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v26);
  v4 = 0LL;
  v25 = 0LL;
  AcquireSRWLockShared(this + 38);
  v24 = (__int64 *)&this[38];
  Ptr = (char *)this[39].Ptr;
  v6 = (char *)this[40].Ptr;
  while ( Ptr != v6
       && ((unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)Ptr + 32LL)
        || !*(_BYTE *)(v7 + 33)
        || !*(_QWORD *)(v7 + 56)
        || *(_DWORD *)(**(_QWORD **)(v7 + 48) + 16LL) == -1
        || *(_DWORD *)(v7 + 104) == -1
        || (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationFrame *))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL)
                                                                              + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == this[40].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v26,
      L"appFrameWrapper was not found");
    *(_QWORD *)v26 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v26);
    return 2147943568LL;
  }
  v9 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v4 = v9;
    v25 = v9;
  }
  if ( this != (RTL_SRWLOCK *)-304LL )
    ReleaseSRWLockShared(this + 38);
  v22 = 0LL;
  v24 = &v22;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v24);
  v24 = 0LL;
  v11 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>(
          &this[-15],
          &GUID_00000038_0000_0000_c000_000000000046,
          &v24);
  if ( v11 < 0 )
  {
    if ( v24 )
      (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
  }
  else
  {
    v23 = 0LL;
    v12 = v24;
    v11 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationFrame **))(*v24 + 24))(v24, &v23);
    if ( v11 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      if ( v12 )
        (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    }
    else
    {
      v13 = v23;
      v14 = v23;
      if ( v23 )
      {
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v23 + 8LL))(v23);
        v13 = v23;
      }
      v15 = *v10;
      *v10 = (__int64)v14;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v13 = v23;
      }
      if ( v13 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
      v11 = 0;
    }
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD98,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_44;
  }
  v24 = (__int64 *)&this[-15];
  v23 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
  v16 = lambda_3b092b602b32291197616247ac44fb10_::_lambda_3b092b602b32291197616247ac44fb10_(
          (unsigned int)v27,
          (unsigned int)&v23,
          (unsigned int)&v22,
          (unsigned int)&v24,
          (__int64)v26);
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3b092b602b32291197616247ac44fb10___(
          v18,
          v17,
          HIDWORD(this[106].Ptr),
          v16);
  lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_(v27);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
    v21 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_44:
    *(_QWORD *)v26 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v26);
    return (unsigned int)v11;
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)v26 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v26);
  return 0LL;
}
