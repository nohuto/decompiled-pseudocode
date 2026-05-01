/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180289628
 * Callers:
 *     ?Hide@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x18046E300 (-Hide@TouchKeyboardExperienceManager@@UEAAJIE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE648 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1800C04CC (-StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180201550 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_ @ 0x1802897EC (_lambda_fc11afed419eac497169c2fc21e58d6f_--__lambda_fc11afed419eac497169c2fc21e58d6f_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc11afed419eac497169c2fc21e58d6f___ @ 0x180289814 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc11afed419eac497169c2fc21e58d6f___.c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::_lambda_fc11afed419eac497169c2fc21e58d6f_ @ 0x1802898C0 (_lambda_fc11afed419eac497169c2fc21e58d6f_--_lambda_fc11afed419eac497169c2fc21e58d6f_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        int a2,
        char a3)
{
  __int64 *v5; // rax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[42]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[352]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+228h]

  v15 = a2;
  v13 = a3;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"OnInputAppRequestedHideActivity_Queued");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v17,
    a2);
  if ( a2 == *((_DWORD *)this + 153) )
  {
    *((_DWORD *)this + 154) = 2;
    _InterlockedExchange((volatile __int32 *)this + 235, 0);
    *((_BYTE *)this + 944) = 0;
  }
  v14 = 0LL;
  *(_QWORD *)v16 = &v14;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v16);
  v6 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x556,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_9;
  }
  *(_QWORD *)v16 = this;
  v9 = lambda_fc11afed419eac497169c2fc21e58d6f_::_lambda_fc11afed419eac497169c2fc21e58d6f_(
         (unsigned int)v18,
         (unsigned int)&v15,
         (unsigned int)&v13,
         (unsigned int)&v14,
         (__int64)v16,
         (__int64)v17);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc11afed419eac497169c2fc21e58d6f___(
         v11,
         v10,
         *((unsigned int *)this + 243),
         v9);
  lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_(v18);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
LABEL_9:
    v17[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
    return (unsigned int)v7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v17);
  return 0LL;
}
