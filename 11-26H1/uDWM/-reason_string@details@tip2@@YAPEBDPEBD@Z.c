/*
 * XREFs of ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1800D4EB8
 * Callers:
 *     ?evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800D4554 (-evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

tip2::details *__fastcall tip2::details::reason_string(tip2::details *this, const char *a2)
{
  tip2::details *v2; // rdx
  char v3; // al

LABEL_3:
  v2 = this;
  while ( 1 )
  {
    v3 = *(_BYTE *)this;
    if ( !*(_BYTE *)this )
      return v2;
    this = (tip2::details *)((char *)this + 1);
    if ( v3 == 58 )
      goto LABEL_3;
  }
}
