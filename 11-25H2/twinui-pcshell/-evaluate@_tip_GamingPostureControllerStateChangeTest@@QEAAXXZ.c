/*
 * XREFs of ?evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ @ 0x180331F44
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXXZ @ 0x180331F30 (-evaluate@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_GamingPostureControllerStateChangeTest::evaluate(
        _tip_GamingPostureControllerStateChangeTest *this,
        const char *a2)
{
  __int64 v3; // rcx
  char v4; // cl
  char v5; // al
  const char *v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  char v11; // r9
  const char *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // r10
  char v17; // r9
  __int64 v18; // r10
  char v19; // r9
  __int64 v20; // r10
  char v21; // r9
  __int64 v22; // r10
  char v23; // r9
  const char *v24; // rax
  __int64 v25; // r10
  __int64 v26; // rcx
  char v27; // r9
  __int64 v28; // r10
  char v29; // r9
  __int64 v30; // r10
  char v31; // r9
  __int64 v32; // r10
  char v33; // r9
  __int64 v34; // r10
  char v35; // r9
  __int64 v36; // r10
  char v37; // r9
  __int64 v38; // rax

  v3 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v3 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v3 + 152) )
    {
      *(_BYTE *)(v3 + 152) = 3;
      *(_WORD *)(v3 + 154) = 16385;
      *(_QWORD *)(v3 + 160) = 0LL;
    }
    return;
  }
  if ( *((_BYTE *)this + 18) && !*((_BYTE *)this + 19) )
  {
    LOBYTE(a2) = 1;
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  LOBYTE(a2) = 0;
  if ( !*((_BYTE *)this + 18) )
    goto LABEL_9;
  v4 = 1;
  if ( !*((_BYTE *)this + 19) )
    goto LABEL_9;
LABEL_10:
  if ( *((_BYTE *)this + 22) || *((_BYTE *)this + 23) || *((_BYTE *)this + 24) || (v5 = 0, *((_BYTE *)this + 25)) )
    v5 = 1;
  if ( !*((_BYTE *)this + 17) )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::prerequisites_not_met_for_exit", a2);
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v8 + 152) != v9 )
        return;
      *(_WORD *)(v8 + 154) = 12;
      goto LABEL_19;
    }
    if ( !*((_BYTE *)this + 17) && *((_BYTE *)this + 16) )
    {
      if ( v5 )
      {
        v6 = tip2::details::reason_string((tip2::details *)"reason::acted_on_request_with_unmet_prerequisites", a2);
        v8 = *(_QWORD *)(v10 + 8);
        if ( *(_BYTE *)(v8 + 152) != v11 )
          return;
        *(_WORD *)(v8 + 154) = 13;
        goto LABEL_19;
      }
      if ( *((_BYTE *)this + 16) )
      {
        v12 = tip2::details::reason_string((tip2::details *)"reason::prerequisites_not_met", a2);
        v14 = *(_QWORD *)(v13 + 8);
        if ( *(_BYTE *)(v14 + 152) != v15 )
          return;
        *(_WORD *)(v14 + 154) = 11;
LABEL_28:
        *(_BYTE *)(v14 + 152) = 4;
        goto LABEL_29;
      }
    }
  }
  if ( (_BYTE)a2 )
  {
    if ( !v5 )
    {
      v12 = tip2::details::reason_string((tip2::details *)"reason::invalid_transition", a2);
      v14 = *(_QWORD *)(v18 + 8);
      if ( *(_BYTE *)(v14 + 152) != v19 )
        return;
      *(_BYTE *)(v14 + 152) = 4;
      *(_WORD *)(v14 + 154) = 4;
LABEL_29:
      *(_QWORD *)(v14 + 160) = v12;
      return;
    }
    v6 = tip2::details::reason_string((tip2::details *)"reason::acted_on_an_invalid_transition", a2);
    v8 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v8 + 152) != v17 )
      return;
    *(_WORD *)(v8 + 154) = 1;
LABEL_19:
    *(_BYTE *)(v8 + 152) = 3;
    *(_QWORD *)(v8 + 160) = v6;
    return;
  }
  if ( v4 )
  {
    if ( v5 )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::acted_on_repeat_request", a2);
      v8 = *(_QWORD *)(v20 + 8);
      if ( *(_BYTE *)(v8 + 152) != v21 )
        return;
      *(_WORD *)(v8 + 154) = 2;
      goto LABEL_19;
    }
    if ( !*((_BYTE *)this + 21) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::didnt_wait_on_in_progress_change", a2);
      v8 = *(_QWORD *)(v22 + 8);
      if ( *(_BYTE *)(v8 + 152) != v23 )
        return;
      *(_WORD *)(v8 + 154) = 6;
      goto LABEL_19;
    }
LABEL_61:
    v38 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v38 + 152) )
    {
      *(_BYTE *)(v38 + 152) = 1;
      *(_WORD *)(v38 + 154) = 0x8000;
      *(_QWORD *)(v38 + 160) = 0LL;
    }
    return;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    if ( !v5 )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::didnt_act_on_state_change", a2);
      v8 = *(_QWORD *)(v30 + 8);
      if ( *(_BYTE *)(v8 + 152) != v31 )
        return;
      *(_WORD *)(v8 + 154) = 7;
      goto LABEL_19;
    }
    if ( !*((_BYTE *)this + 23) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::didnt_publish_wnf", a2);
      v8 = *(_QWORD *)(v32 + 8);
      if ( *(_BYTE *)(v8 + 152) != v33 )
        return;
      *(_WORD *)(v8 + 154) = 8;
      goto LABEL_19;
    }
    if ( !*((_BYTE *)this + 24) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::didnt_launch_gaming_app", a2);
      v8 = *(_QWORD *)(v34 + 8);
      if ( *(_BYTE *)(v8 + 152) != v35 )
        return;
      *(_WORD *)(v8 + 154) = 9;
      goto LABEL_19;
    }
    if ( !*((_BYTE *)this + 25) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::didnt_signal_in_progress_state_change_event", a2);
      v8 = *(_QWORD *)(v36 + 8);
      if ( *(_BYTE *)(v8 + 152) != v37 )
        return;
      *(_WORD *)(v8 + 154) = 10;
      goto LABEL_19;
    }
    goto LABEL_61;
  }
  if ( !v5 )
  {
    v12 = tip2::details::reason_string((tip2::details *)"reason::noop_state_change", a2);
    v14 = *(_QWORD *)(v28 + 8);
    if ( *(_BYTE *)(v14 + 152) != v29 )
      return;
    *(_WORD *)(v14 + 154) = 5;
    goto LABEL_28;
  }
  v24 = tip2::details::reason_string((tip2::details *)"reason::acted_on_noop_state_change", a2);
  v26 = *(_QWORD *)(v25 + 8);
  if ( *(_BYTE *)(v26 + 152) == v27 )
  {
    *(_QWORD *)(v26 + 160) = v24;
    *(_BYTE *)(v26 + 152) = 3;
    *(_WORD *)(v26 + 154) = 3;
  }
}
