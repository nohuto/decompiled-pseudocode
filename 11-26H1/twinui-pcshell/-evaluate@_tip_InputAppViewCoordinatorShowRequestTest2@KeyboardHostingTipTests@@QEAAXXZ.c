/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXXZ @ 0x1804751B4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x180474E40 (-evaluate@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2 *this,
        const char *a2)
{
  tip2::details *v2; // rax
  __int64 *v3; // r8
  __int64 v4; // rcx
  char v5; // r11
  tip2::details *v6; // rax
  __int64 *v7; // r8
  __int64 v8; // rdx
  char v9; // r11
  __int64 *v10; // r8
  char v11; // r11
  __int64 *v12; // r8
  char v13; // r11
  __int64 *v14; // r8
  char v15; // r11
  __int64 v16; // r9
  char v17; // r11
  __int64 v18; // r9
  char v19; // r11
  __int64 v20; // r8
  tip2::details *v21; // rax
  __int64 v22; // r8
  char v23; // r11
  int v24; // eax
  tip2::details *v25; // rax
  __int64 v26; // r8
  char v27; // r11
  char v28; // r11
  char v29; // r11
  __int16 v30; // r10
  char v31; // r11
  __int16 v32; // r11

  if ( *((_BYTE *)this + 16) )
    *(_DWORD *)(*((_QWORD *)this + 1) + 172LL) = 56561732;
  if ( *((_BYTE *)this + 29) )
  {
    if ( *((_BYTE *)this + 30) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::mdm_policy_rejected_show", a2);
      v4 = *v3;
      if ( *(_BYTE *)(*v3 + 152) != v5 )
        return;
      *(_WORD *)(v4 + 154) = 26;
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 31) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::osk_launched", a2);
      v8 = *v7;
      if ( *(_BYTE *)(*v7 + 152) != v9 )
        return;
      *(_WORD *)(v8 + 154) = 27;
      goto LABEL_11;
    }
    v6 = tip2::details::reason_string((tip2::details *)"reason::refused_by_tabtipadapter", a2);
    v8 = *v10;
    if ( *(_BYTE *)(*v10 + 152) == v11 )
    {
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 25;
      goto LABEL_12;
    }
  }
  else if ( *((_BYTE *)this + 28) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::another_show_request", a2);
    v4 = *v12;
    if ( *(_BYTE *)(*v12 + 152) == v13 )
    {
      *(_WORD *)(v4 + 154) = 24;
LABEL_7:
      *(_BYTE *)(v4 + 152) = 4;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 20) && *((_BYTE *)this + 19) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::view_hidden", a2);
    v8 = *v14;
    if ( *(_BYTE *)(*v14 + 152) == v15 )
    {
      *(_WORD *)(v8 + 154) = 23;
LABEL_11:
      *(_BYTE *)(v8 + 152) = 1;
LABEL_12:
      *(_QWORD *)(v8 + 160) = v6;
    }
  }
  else if ( !*((_BYTE *)this + 18) || *((_BYTE *)this + 17) )
  {
    if ( !*((_BYTE *)this + 34) || *((_BYTE *)this + 33) )
    {
      v20 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v20 + 56) & 0x200) == 0 )
      {
        if ( !*(_BYTE *)(v20 + 152) )
        {
          *(_BYTE *)(v20 + 152) = 3;
          *(_WORD *)(v20 + 154) = 16385;
          *(_QWORD *)(v20 + 160) = 0LL;
        }
        return;
      }
      if ( *((_BYTE *)this + 32) )
      {
        v21 = tip2::details::reason_string((tip2::details *)"reason::view_win8keyboard", a2);
        if ( *(_BYTE *)(v22 + 152) != v23 )
          return;
        *(_WORD *)(v22 + 154) = 5;
      }
      else
      {
        v24 = *((_DWORD *)this + 6);
        switch ( v24 )
        {
          case 0:
            v25 = tip2::details::reason_string((tip2::details *)"reason::view_touchkeyboard", a2);
            if ( *(_BYTE *)(v26 + 152) == v27 )
            {
              *(_QWORD *)(v26 + 160) = v25;
              *(_BYTE *)(v26 + 152) = 1;
              *(_WORD *)(v26 + 154) = 1;
            }
            return;
          case 4:
            v21 = tip2::details::reason_string((tip2::details *)"reason::view_voicetyping", a2);
            if ( *(_BYTE *)(v22 + 152) != v28 )
              return;
            *(_WORD *)(v22 + 154) = 2;
            break;
          case 2:
            v21 = tip2::details::reason_string((tip2::details *)"reason::view_emoji", a2);
            if ( *(_BYTE *)(v22 + 152) != v29 )
              return;
            *(_WORD *)(v22 + 154) = 3;
            break;
          case 13:
            v21 = tip2::details::reason_string((tip2::details *)"reason::view_smartactions", a2);
            if ( *(_BYTE *)(v22 + 152) != v31 )
              return;
            *(_WORD *)(v22 + 154) = v30;
            break;
          default:
            v21 = tip2::details::reason_string((tip2::details *)"reason::view_unknown", a2);
            if ( *(_BYTE *)(v22 + 152) != (_BYTE)v32 )
              return;
            *(_WORD *)(v22 + 154) = v32;
            break;
        }
      }
      *(_QWORD *)(v22 + 160) = v21;
      *(_BYTE *)(v22 + 152) = 1;
      return;
    }
    v6 = tip2::details::reason_string((tip2::details *)"reason::inputapp_not_active", a2);
    v8 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v8 + 152) == v19 )
    {
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 28;
      goto LABEL_12;
    }
  }
  else
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::still_cloaked", a2);
    v8 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v8 + 152) == v17 )
    {
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 21;
      goto LABEL_12;
    }
  }
}
