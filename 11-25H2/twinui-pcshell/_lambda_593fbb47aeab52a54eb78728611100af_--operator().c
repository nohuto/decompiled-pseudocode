/*
 * XREFs of _lambda_593fbb47aeab52a54eb78728611100af_::operator() @ 0x18047B5CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_593fbb47aeab52a54eb78728611100af___::Run @ 0x18047CD90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_593fbb47aeab52a54eb78728611100af___--Run.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18002D49C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801E31F0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18047B248 (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18047B4B8 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18047C8B4 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@w.c)
 */

__int64 __fastcall lambda_593fbb47aeab52a54eb78728611100af_::operator()(__int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetImpl'::`2'::impl) )
  {
    v2 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      v9 = qword_18089C768;
      v10 = (const wchar_t *)"ActivateApplicationForExperience";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v2,
        byte_1807D1B67,
        v3,
        v4,
        &v10,
        (const WCHAR **)&v9);
    }
  }
  v5 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_18089C768,
         &LocaleName,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1,
         0LL);
  v6 = wil::details::in1diag3::Log_Hr(
         retaddr,
         (void *)0x2E3,
         (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
         (const char *)v5);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)(*(_QWORD *)a1 + 416LL)) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                  *(_QWORD *)a1 + 416LL,
                  &v9)
             + 266) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((void **)&v9);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                   *(_QWORD *)a1 + 416LL,
                   &v9)
              + 268) = v6;
    tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((void **)&v9);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)(*(_QWORD *)a1 + 416LL));
  }
  return v6;
}
