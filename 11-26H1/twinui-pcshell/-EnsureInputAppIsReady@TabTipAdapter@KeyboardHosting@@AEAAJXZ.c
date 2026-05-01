/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C198
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C0D8 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A1AB4 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x1804697C8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18047C400 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047C6CC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18002CB60 (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180040B50 (--1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B3DEC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800BBA44 (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C294 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018C2DC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTa.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C444 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(KeyboardHosting::TabTipAdapter *this)
{
  const unsigned __int16 *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int16 *v7[4]; // [rsp+20h] [rbp-188h] BYREF
  volatile signed __int32 *v8[42]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  KeyboardHosting::TabTipAdapter::GetCurrentInputAppId((__int64)this, (__int64)v7);
  v2 = (const unsigned __int16 *)v7;
  if ( v7[3] > (unsigned __int16 *)7 )
    v2 = v7[0];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"EnsureInputAppIsReady");
  v8[0] = (volatile signed __int32 *)&TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady *)v8,
    v2);
  if ( v7[2] )
  {
    v3 = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 2331LL;
      goto LABEL_8;
    }
LABEL_9:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    v4 = 0;
    goto LABEL_10;
  }
  v3 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_9;
  v5 = 2326LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady(v8);
  std::wstring::_Tidy_deallocate(v7);
  return v4;
}
