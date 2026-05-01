/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001EA30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18001EE60 (--$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@X.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001F080 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001F294 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellC.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18002FE18 (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46a8ca2e66b0a909e1f565be00ec5b40___ @ 0x1804590B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_46a8ca2e66b0a909e1f565be00ec5b40___.c)
 *     _lambda_46a8ca2e66b0a909e1f565be00ec5b40_::_lambda_46a8ca2e66b0a909e1f565be00ec5b40_ @ 0x18045B6C4 (_lambda_46a8ca2e66b0a909e1f565be00ec5b40_--_lambda_46a8ca2e66b0a909e1f565be00ec5b40_.c)
 *     _lambda_46a8ca2e66b0a909e1f565be00ec5b40_::__lambda_46a8ca2e66b0a909e1f565be00ec5b40_ @ 0x18045C228 (_lambda_46a8ca2e66b0a909e1f565be00ec5b40_--__lambda_46a8ca2e66b0a909e1f565be00ec5b40_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  char *Ptr; // rsi
  char *v6; // r15
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rsi
  __int64 *v10; // r15
  __int64 *v11; // rdi
  struct IApplicationFrame *v12; // rdx
  struct IApplicationFrame *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationFrame *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h]
  int v28[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v29[352]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Start<>((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v28);
  v4 = 0LL;
  v27 = 0LL;
  AcquireSRWLockShared(this + 38);
  v26 = (__int64 *)&this[38];
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
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v28,
      L"appFrameWrapper was not found");
    v8 = -2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v4 = v9;
      v27 = v9;
    }
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    v24 = 0LL;
    v26 = &v24;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
    v26 = 0LL;
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>(
           &this[-15],
           &_uuidof__AUIWeakReferenceSource_Details_Platform__,
           &v26);
    if ( v8 < 0 )
    {
      if ( v26 )
        (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
    }
    else
    {
      v25 = 0LL;
      v11 = v26;
      v8 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationFrame **))(*v26 + 24))(v26, &v25);
      if ( v8 < 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
        if ( v11 )
          (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
      }
      else
      {
        v12 = v25;
        v13 = v25;
        if ( v25 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v25 + 8LL))(v25);
          v12 = v25;
        }
        v14 = *v10;
        *v10 = (__int64)v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v12 = v25;
        }
        if ( v12 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
        v8 = 0;
      }
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDBE,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v22);
      v20 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v26 = (__int64 *)&this[-15];
      v25 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = lambda_46a8ca2e66b0a909e1f565be00ec5b40_::_lambda_46a8ca2e66b0a909e1f565be00ec5b40_(
              (unsigned int)v29,
              (unsigned int)&v25,
              (unsigned int)&v24,
              (unsigned int)&v26,
              (__int64)v28);
      v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_46a8ca2e66b0a909e1f565be00ec5b40___(
             v17,
             v16,
             HIDWORD(this[106].Ptr),
             v15);
      lambda_46a8ca2e66b0a909e1f565be00ec5b40_::__lambda_46a8ca2e66b0a909e1f565be00ec5b40_(v29);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDDD,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8,
          v23);
        if ( a2 )
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
        v21 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      else
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
        v18 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v8 = 0;
      }
    }
  }
  *(_QWORD *)v28 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v28);
  return (unsigned int)v8;
}
