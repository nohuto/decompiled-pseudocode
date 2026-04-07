/*
 * XREFs of ??0?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180041C34
 * Callers:
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@2@XZ @ 0x180041C08 (-watch_errors@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800244D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  *a1 = &tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::`vftable';
  v4 = a1 + 1;
  *v4 = 0LL;
  v4[1] = a1;
  v4[2] = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  v4[4] = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v4, (__int64)a2);
  v5 = *a2;
  a1[6] = *a2;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 288));
  return a1;
}
