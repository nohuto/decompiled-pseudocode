/*
 * XREFs of ?evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800D7464
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXXZ @ 0x1800D7450 (-evaluate@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1800D7E58 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::evaluate(
        Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r10
  char v7; // r9
  __int64 v8; // r10
  char v9; // r9
  __int64 v10; // r10
  char v11; // r9
  __int64 v12; // rax

  if ( *((_DWORD *)this + 4) != 1 )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::wrong_transition_type", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = v3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      if ( *((_DWORD *)this + 6) )
      {
        v2 = tip2::details::reason_string((tip2::details *)"reason::ends_on_wrong_rotation_state", a2);
        v5 = *(_QWORD *)(v10 + 8);
        if ( *(_BYTE *)(v5 + 152) == v11 )
        {
          *(_WORD *)(v5 + 154) = 4;
          goto LABEL_4;
        }
      }
      else
      {
        v12 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v12 + 152) )
        {
          *(_BYTE *)(v12 + 152) = 1;
          *(_WORD *)(v12 + 154) = 0x8000;
          *(_QWORD *)(v12 + 160) = 0LL;
        }
      }
    }
    else
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::state_complete_not_called", a2);
      v5 = *(_QWORD *)(v8 + 8);
      if ( *(_BYTE *)(v5 + 152) == v9 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 3;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::visual_not_deleted", a2);
    v5 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v5 + 152) == v7 )
    {
      *(_WORD *)(v5 + 154) = 2;
LABEL_4:
      *(_BYTE *)(v5 + 152) = 3;
LABEL_5:
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
}
