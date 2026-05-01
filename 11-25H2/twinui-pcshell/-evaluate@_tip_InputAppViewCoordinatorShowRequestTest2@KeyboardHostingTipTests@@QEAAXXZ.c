/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXXZ @ 0x1804692E4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x180468F50 (-evaluate@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2 *this,
        const char *a2)
{
  char *v2; // r9
  const char *v3; // rax
  __int64 *v4; // r9
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdx
  const char *v9; // rax
  __int64 *v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 *v13; // r9
  __int64 *v14; // r9
  __int64 v15; // r9
  const char *v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int16 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r10

  v2 = (char *)this + 8;
  if ( *((_BYTE *)this + 16) )
    *(_DWORD *)(*(_QWORD *)v2 + 172LL) = 56561732;
  if ( *((_BYTE *)this + 25) )
  {
    if ( *((_BYTE *)this + 26) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::mdm_policy_rejected_show", a2);
      v5 = *v4;
      if ( *(_BYTE *)(*v4 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 26;
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 27) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::osk_launched", a2);
      v8 = *v7;
      if ( *(_BYTE *)(*v7 + 152) )
        return;
      *(_WORD *)(v8 + 154) = 27;
LABEL_45:
      *(_QWORD *)(v8 + 160) = v6;
      *(_BYTE *)(v8 + 152) = 1;
      return;
    }
    v9 = tip2::details::reason_string((tip2::details *)"reason::refused_by_tabtipadapter", a2);
    v11 = *v10;
    if ( *(_BYTE *)(*v10 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 25;
LABEL_13:
    *(_BYTE *)(v11 + 152) = 3;
    *(_QWORD *)(v11 + 160) = v9;
    return;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 18) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::view_hidden", a2);
      v8 = *v13;
      if ( *(_BYTE *)(*v13 + 152) )
        return;
      *(_WORD *)(v8 + 154) = 23;
      goto LABEL_45;
    }
    if ( !*((_BYTE *)this + 17) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::still_cloaked", a2);
      v11 = *v14;
      if ( *(_BYTE *)(*v14 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 21;
      goto LABEL_13;
    }
    v15 = *(_QWORD *)v2;
    if ( (*(_DWORD *)(v15 + 56) & 0x200) == 0 )
    {
      if ( !*(_BYTE *)(v15 + 152) )
      {
        *(_BYTE *)(v15 + 152) = 3;
        *(_WORD *)(v15 + 154) = 16385;
        *(_QWORD *)(v15 + 160) = 0LL;
      }
      return;
    }
    if ( *((_BYTE *)this + 28) )
    {
      v16 = tip2::details::reason_string((tip2::details *)"reason::view_win8keyboard", a2);
      if ( *(_BYTE *)(v17 + 152) )
        return;
      *(_WORD *)(v17 + 154) = 5;
    }
    else
    {
      v18 = *((_DWORD *)this + 5);
      if ( !v18 )
      {
        v16 = tip2::details::reason_string((tip2::details *)"reason::view_touchkeyboard", a2);
        if ( *(_BYTE *)(v17 + 152) )
          return;
        *(_BYTE *)(v17 + 152) = 1;
        *(_WORD *)(v17 + 154) = 1;
LABEL_30:
        *(_QWORD *)(v17 + 160) = v16;
        return;
      }
      if ( v18 == 4 )
      {
        v16 = tip2::details::reason_string((tip2::details *)"reason::view_voicetyping", a2);
        if ( *(_BYTE *)(v17 + 152) )
          return;
        *(_WORD *)(v17 + 154) = 2;
      }
      else
      {
        if ( v18 != 2 )
        {
          if ( v18 == 13 )
          {
            v6 = tip2::details::reason_string((tip2::details *)"reason::view_smartactions", a2);
            v8 = *(_QWORD *)(v20 + 8);
            if ( *(_BYTE *)(v8 + 152) )
              return;
            *(_WORD *)(v8 + 154) = v19;
          }
          else
          {
            v6 = tip2::details::reason_string((tip2::details *)"reason::view_unknown", a2);
            v8 = *(_QWORD *)(v21 + 8);
            if ( *(_BYTE *)(v8 + 152) )
              return;
            *(_WORD *)(v8 + 154) = 0;
          }
          goto LABEL_45;
        }
        v16 = tip2::details::reason_string((tip2::details *)"reason::view_emoji", a2);
        if ( *(_BYTE *)(v17 + 152) )
          return;
        *(_WORD *)(v17 + 154) = 3;
      }
    }
    *(_BYTE *)(v17 + 152) = 1;
    goto LABEL_30;
  }
  v3 = tip2::details::reason_string((tip2::details *)"reason::another_show_request", a2);
  v5 = *v12;
  if ( !*(_BYTE *)(*v12 + 152) )
  {
    *(_WORD *)(v5 + 154) = 24;
LABEL_7:
    *(_BYTE *)(v5 + 152) = 4;
    *(_QWORD *)(v5 + 160) = v3;
  }
}
