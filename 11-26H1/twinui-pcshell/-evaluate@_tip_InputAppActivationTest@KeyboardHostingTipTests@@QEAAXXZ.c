/*
 * XREFs of ?evaluate@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXXZ @ 0x180474E54
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x180474E20 (-evaluate@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::evaluate(
        KeyboardHostingTipTests::_tip_InputAppActivationTest *this,
        const char *a2)
{
  tip2::details *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // r10
  __int64 v8; // r8
  char v9; // r10
  __int64 v10; // r8
  char v11; // r10
  __int64 v12; // r8
  char v13; // r10
  __int64 v14; // r8
  char v15; // r10
  __int64 v16; // r8
  char v17; // r10
  __int64 v18; // r8
  char v19; // r10
  __int64 v20; // r8
  char v21; // r10
  __int64 v22; // r8
  char v23; // r10
  __int16 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  tip2::details *v28; // rax
  __int64 v29; // r9
  char v30; // r10
  char v31; // r10
  char v32; // r10

  if ( *((_BYTE *)this + 25) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::session_shutting_down", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 152) = v3 + 4;
    *(_WORD *)(v5 + 154) = v3 + 4;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 31) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::shutdown_services", a2);
    v5 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v5 + 152) == v7 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 9;
LABEL_4:
      *(_QWORD *)(v5 + 160) = v2;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 32) )
  {
    if ( *((_BYTE *)this + 26) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::relaunch_immediately", a2);
      v5 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(v5 + 152) == v11 )
      {
        *(_BYTE *)(v5 + 152) = 1;
        *(_WORD *)(v5 + 154) = 5;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 27) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::relaunch_after_few_seconds", a2);
      v5 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v5 + 152) == v13 )
      {
        *(_BYTE *)(v5 + 152) = 1;
        *(_WORD *)(v5 + 154) = 6;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 29) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::another_activation_started", a2);
      v5 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v5 + 152) == v15 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 7;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 30) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::get_input_app_id_failed", a2);
      v5 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v5 + 152) == v17 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 8;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 24) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::retry_count_max_reached", a2);
      v5 = *(_QWORD *)(v18 + 8);
      if ( *(_BYTE *)(v5 + 152) == v19 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 1;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 16) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::input_app_id_invalid", a2);
      v5 = *(_QWORD *)(v20 + 8);
      if ( *(_BYTE *)(v5 + 152) == v21 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 2;
        goto LABEL_4;
      }
      return;
    }
    if ( *((_BYTE *)this + 28) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::dont_relaunch", a2);
      v5 = *(_QWORD *)(v22 + 8);
      if ( *(_BYTE *)(v5 + 152) == v23 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 10;
        goto LABEL_4;
      }
      return;
    }
    if ( !*((_BYTE *)this + 17) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::not_activated", a2);
      v5 = *(_QWORD *)(v25 + 8);
      if ( *(_BYTE *)(v5 + 152) == (_BYTE)v24 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = v24;
        goto LABEL_4;
      }
      return;
    }
    v26 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v26 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v26 + 152) )
        return;
      *(_BYTE *)(v26 + 152) = 3;
      *(_WORD *)(v26 + 154) = 16385;
LABEL_50:
      *(_QWORD *)(v26 + 160) = 0LL;
      return;
    }
    v27 = *((_DWORD *)this + 5);
    if ( v27 < 100 )
    {
      if ( v27 < 10 )
      {
        if ( v27 <= 0 )
        {
          if ( *(_BYTE *)(v26 + 152) )
            return;
          *(_BYTE *)(v26 + 152) = 1;
          *(_WORD *)(v26 + 154) = 0x8000;
          goto LABEL_50;
        }
        v28 = tip2::details::reason_string((tip2::details *)"reason::success_with_retry", a2);
        if ( *(_BYTE *)(v29 + 152) != v32 )
          return;
        *(_WORD *)(v29 + 154) = 3;
      }
      else
      {
        v28 = tip2::details::reason_string((tip2::details *)"reason::success_with_retry_10_or_more", a2);
        if ( *(_BYTE *)(v29 + 152) != v31 )
          return;
        *(_WORD *)(v29 + 154) = 11;
      }
    }
    else
    {
      v28 = tip2::details::reason_string((tip2::details *)"reason::success_with_retry_100_or_more", a2);
      if ( *(_BYTE *)(v29 + 152) != v30 )
        return;
      *(_WORD *)(v29 + 154) = 13;
    }
    *(_BYTE *)(v29 + 152) = 1;
    *(_QWORD *)(v29 + 160) = v28;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::connected_standby", a2);
  v5 = *(_QWORD *)(v8 + 8);
  if ( *(_BYTE *)(v5 + 152) == v9 )
  {
    *(_BYTE *)(v5 + 152) = 4;
    *(_WORD *)(v5 + 154) = 12;
    goto LABEL_4;
  }
}
