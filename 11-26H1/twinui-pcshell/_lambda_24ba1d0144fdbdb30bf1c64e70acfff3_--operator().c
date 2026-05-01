/*
 * XREFs of _lambda_24ba1d0144fdbdb30bf1c64e70acfff3_::operator() @ 0x18048C0B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___::Run @ 0x18048D720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___--Run.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180009F88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180073520 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18028B464 (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048BC60 (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18048BE78 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall lambda_24ba1d0144fdbdb30bf1c64e70acfff3_::operator()(__int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  const char *v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = GazeUITraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v10 = "ActivateApplicationForExperience";
    v9 = qword_1808DCE08;
    v11 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)v2,
      (__int64)&unk_180810EF6,
      v3,
      v4,
      (__int64)&v11,
      &v10,
      &v9);
  }
  v5 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_1808DCE08,
         &pvData,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1,
         0LL);
  v6 = wil::details::in1diag3::Log_Hr(
         retaddr,
         (void *)0x330,
         (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
         (const char *)v5);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)(*(_QWORD *)a1 + 416LL)) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                  *(_QWORD *)a1 + 416LL,
                  &v9)
             + 274) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((void **)&v9);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                   *(_QWORD *)a1 + 416LL,
                   &v9)
              + 276) = v6;
    tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((void **)&v9);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(*(_QWORD *)a1 + 416LL));
  }
  return v6;
}
