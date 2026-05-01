/*
 * XREFs of ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255750
 * Callers:
 *     _lambda_a425cb1f9a85c2275f94348d493772b0_::operator() @ 0x18045E814 (_lambda_a425cb1f9a85c2275f94348d493772b0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D4F0C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18014EB20 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ?StartActivity@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18014F560 (-StartActivity@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028A258 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802AA078 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@det.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802AAD9C (--C-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802AADC8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12.c)
 *     ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1802BB820 (-Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C6178 (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 *     ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CD680 (--1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CEA04 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ActivateInputApp(TouchKeyboardExperienceManager *this)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  const unsigned __int16 *v4; // rdx
  char v5; // r14
  char v6; // al
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  char *v9; // rdi
  int DefautInputAppIdAndContinue; // eax
  int v11; // esi
  char v13[8]; // [rsp+20h] [rbp-E0h] BYREF
  char v14[8]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  void **v16; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h]
  char v18; // [rsp+58h] [rbp-A8h]
  char *v19; // [rsp+60h] [rbp-A0h]
  void ***v20; // [rsp+78h] [rbp-88h]
  _BYTE v21[48]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v22[42]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"ActivateInputApp");
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v22);
  v2 = 0;
  if ( *((_BYTE *)this + 813) )
  {
    v3 = (char *)this + 1976;
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool(v3) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                              v3,
                              v13)
               + 280LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>(v13);
      tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v3);
    }
    v4 = L"SkippedDuringConnectedStandby";
LABEL_16:
    TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::Stop(
      (TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v22,
      v4);
    goto LABEL_17;
  }
  v5 = 0;
  v6 = *((_BYTE *)this + 812);
  *((_BYTE *)this + 812) = 1;
  if ( v6 )
  {
    v5 = 1;
LABEL_14:
    v4 = L"SkippedDuringAnotherActivation";
    if ( !v5 )
      v4 = L"Activated";
    goto LABEL_16;
  }
  v7 = (_QWORD *)((char *)this + 1976);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 1976) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                            (char *)this + 1976,
                            v14)
             + 277LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>(v14);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((char *)this + 1976);
  }
  if ( *v7 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v7 + 8LL) )
    wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>,wil::err_returncode_policy>::reset((char *)this + 1976);
  v8 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::ensure_data((char *)this + 1976);
  tip2::details::shared_data<0,0,0>::start(*v8 + 8LL, v21);
  v9 = (char *)this - 200;
  *(_QWORD *)&v15 = TouchKeyboardExperienceManager::OnInputAppChangeApproved;
  DWORD2(v15) = 0;
  v16 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(unsigned short const *),TouchKeyboardExperienceManager *,std::_Ph<1> const &>,long,unsigned short const *>::`vftable';
  v17 = v15;
  v18 = v21[32];
  v19 = v9;
  v20 = &v16;
  DefautInputAppIdAndContinue = TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(
                                  (__int64)v9,
                                  (__int64)&v16);
  v11 = DefautInputAppIdAndContinue;
  if ( DefautInputAppIdAndContinue >= 0 )
    goto LABEL_14;
  v9[1012] = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C9,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)DefautInputAppIdAndContinue);
  v2 = v11;
LABEL_17:
  TouchKeyboardExperienceTelemetryLogger::ActivateInputApp::~ActivateInputApp((TouchKeyboardExperienceTelemetryLogger::ActivateInputApp *)v22);
  return v2;
}
