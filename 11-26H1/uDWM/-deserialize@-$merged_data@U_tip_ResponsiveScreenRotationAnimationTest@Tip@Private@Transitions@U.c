/*
 * XREFs of ?deserialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  return tson::input_archive::process<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest &>(
           a2,
           (a1 + 256) & -(__int64)(a1 != 0));
}
