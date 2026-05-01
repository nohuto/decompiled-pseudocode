/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180463040
 * Callers:
 *     ?Resize@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@@Z @ 0x1804642D0 (-Resize@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_21bbf2e079f5591be5df5fdb5b101015___ @ 0x180458ECC (Windows--Internal--ComTaskPool--QueueTask__lambda_21bbf2e079f5591be5df5fdb5b101015___.c)
 *     _lambda_21bbf2e079f5591be5df5fdb5b101015_::_lambda_21bbf2e079f5591be5df5fdb5b101015_ @ 0x18045B5DC (_lambda_21bbf2e079f5591be5df5fdb5b101015_--_lambda_21bbf2e079f5591be5df5fdb5b101015_.c)
 *     _lambda_21bbf2e079f5591be5df5fdb5b101015_::__lambda_21bbf2e079f5591be5df5fdb5b101015_ @ 0x18045C1D0 (_lambda_21bbf2e079f5591be5df5fdb5b101015_--__lambda_21bbf2e079f5591be5df5fdb5b101015_.c)
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045C844 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180464A88 (-StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedResize(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        struct tagRECT *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[42]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[368]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  v15 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"OnInputAppRequestedResizeActivity_Queued");
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v18,
    a2);
  v16 = 0LL;
  *(_QWORD *)v17 = &v16;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v17);
  v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)v17 = this;
    v11 = lambda_21bbf2e079f5591be5df5fdb5b101015_::_lambda_21bbf2e079f5591be5df5fdb5b101015_(
            (__int64)v19,
            &v15,
            a3,
            &v16,
            v17,
            v18);
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_21bbf2e079f5591be5df5fdb5b101015___(
           v13,
           v12,
           *((_DWORD *)this + 243),
           v11);
    lambda_21bbf2e079f5591be5df5fdb5b101015_::__lambda_21bbf2e079f5591be5df5fdb5b101015_((__int64)v19);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 1533LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 1497LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v18);
  return (unsigned int)v8;
}
