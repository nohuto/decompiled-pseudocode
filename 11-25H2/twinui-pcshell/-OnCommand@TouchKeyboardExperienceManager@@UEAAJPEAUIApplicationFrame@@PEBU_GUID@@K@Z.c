/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017B660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001F080 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18017B924 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18017BA70 (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18017BCD4 (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0E94 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802227EC (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ce5f0a13437f36dbd45420a359bd80e9___ @ 0x1804593CC (Windows--Internal--ComTaskPool--QueueTask__lambda_ce5f0a13437f36dbd45420a359bd80e9___.c)
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::_lambda_ce5f0a13437f36dbd45420a359bd80e9_ @ 0x18045B8B0 (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--_lambda_ce5f0a13437f36dbd45420a359bd80e9_.c)
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::__lambda_ce5f0a13437f36dbd45420a359bd80e9_ @ 0x18045C2E8 (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--__lambda_ce5f0a13437f36dbd45420a359bd80e9_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  GUID v20; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[42]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[368]; // [rsp+1B0h] [rbp+B0h] BYREF
  OLECHAR sz[40]; // [rsp+320h] [rbp+220h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  memset_0(sz, 0, sizeof(sz));
  if ( !StringFromGUID2(a3, sz, 40) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDE9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v21,
    (__int64)"OnApplicationFrameCommand");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21,
    sz);
  v18 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((char *)this - 120, a2, &v18);
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
            v21,
            0LL);
LABEL_23:
          FrameWrapper = 0;
          goto LABEL_24;
        }
      }
    }
    v17 = 0LL;
    v16 = &v17;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
    v11 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v10);
    FrameWrapper = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)v19 = (char *)this - 120;
      v16 = (__int64 *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      v20 = *a3;
      v12 = lambda_ce5f0a13437f36dbd45420a359bd80e9_::_lambda_ce5f0a13437f36dbd45420a359bd80e9_(
              (unsigned int)v22,
              (unsigned int)&v16,
              (unsigned int)&v20,
              (unsigned int)&v17,
              (__int64)v19,
              (__int64)v21);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_ce5f0a13437f36dbd45420a359bd80e9___(
                       v14,
                       v13,
                       *((unsigned int *)this + 213),
                       v12);
      lambda_ce5f0a13437f36dbd45420a359bd80e9_::__lambda_ce5f0a13437f36dbd45420a359bd80e9_(v22);
      if ( FrameWrapper >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        goto LABEL_23;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)FrameWrapper);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDFB,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
LABEL_24:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21);
    return (unsigned int)FrameWrapper;
  }
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21,
    L"appFrameWrapper was not found");
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v21);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return (unsigned int)FrameWrapper;
}
