/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180013620
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1800138E8 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180013A1C (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800148C8 (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BE648 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF6F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1800BF6F4.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802138F8 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0181179693446beb1d5841bdc72a572d___ @ 0x1804651CC (Windows--Internal--ComTaskPool--QueueTask__lambda_0181179693446beb1d5841bdc72a572d___.c)
 *     _lambda_0181179693446beb1d5841bdc72a572d_::_lambda_0181179693446beb1d5841bdc72a572d_ @ 0x180467A64 (_lambda_0181179693446beb1d5841bdc72a572d_--_lambda_0181179693446beb1d5841bdc72a572d_.c)
 *     _lambda_0181179693446beb1d5841bdc72a572d_::__lambda_0181179693446beb1d5841bdc72a572d_ @ 0x180468598 (_lambda_0181179693446beb1d5841bdc72a572d_--__lambda_0181179693446beb1d5841bdc72a572d_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  int FrameWrapper; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+20h] [rbp-E0h]
  struct IApplicationFrame *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  GUID v22; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[42]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[368]; // [rsp+1B0h] [rbp+B0h] BYREF
  OLECHAR sz[40]; // [rsp+320h] [rbp+220h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  memset_0(sz, 0, sizeof(sz));
  if ( !StringFromGUID2(a3, sz, 40) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDC3,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL,
      v16);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v23,
    "OnApplicationFrameCommand");
  v23[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v23,
    sz);
  v20 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((char *)this - 120, a2, &v20);
  if ( FrameWrapper >= 0 )
  {
    v7 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
      v7 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
        v8 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
          v9 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
        if ( v9 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v23,
            0LL);
LABEL_23:
          FrameWrapper = 0;
          goto LABEL_24;
        }
      }
    }
    v19 = 0LL;
    v18 = (struct IApplicationFrame *)&v19;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v11 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((char *)this - 120, v10);
    FrameWrapper = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)v21 = (char *)this - 120;
      v18 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
      v22 = *a3;
      v12 = lambda_0181179693446beb1d5841bdc72a572d_::_lambda_0181179693446beb1d5841bdc72a572d_(
              (unsigned int)v24,
              (unsigned int)&v18,
              (unsigned int)&v22,
              (unsigned int)&v19,
              (__int64)v21,
              (__int64)v23);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_0181179693446beb1d5841bdc72a572d___(
                       v14,
                       v13,
                       *((unsigned int *)this + 213),
                       v12);
      lambda_0181179693446beb1d5841bdc72a572d_::__lambda_0181179693446beb1d5841bdc72a572d_(v24);
      if ( FrameWrapper >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
        goto LABEL_23;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE08,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)FrameWrapper,
        v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD5,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11,
        v16);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v23);
    return (unsigned int)FrameWrapper;
  }
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v23,
    L"appFrameWrapper was not found");
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v23[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v23);
  return (unsigned int)FrameWrapper;
}
