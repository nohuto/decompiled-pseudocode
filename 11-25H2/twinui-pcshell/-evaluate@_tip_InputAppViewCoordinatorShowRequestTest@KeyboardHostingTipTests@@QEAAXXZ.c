/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXXZ @ 0x1804695A4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x180468F70 (-evaluate@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U1.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r10
  char v7; // r11
  __int64 v8; // r9
  int v9; // eax
  const char *v10; // rax
  __int64 v11; // r9
  char v12; // r11
  char v13; // r11
  char v14; // r11
  __int16 v15; // r10
  char v16; // r11
  __int16 v17; // r11

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::invalid_appviewid", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 22;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 20) && *((_BYTE *)this + 19) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::still_cloaked", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_WORD *)(v4 + 154) = 21;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 3;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else
  {
    v8 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v8 + 56) & 0x200) != 0 )
    {
      v9 = *((_DWORD *)this + 6);
      if ( v9 )
      {
        switch ( v9 )
        {
          case 4:
            v10 = tip2::details::reason_string((tip2::details *)"reason::view_voicetyping", a2);
            if ( *(_BYTE *)(v11 + 152) != v13 )
              return;
            *(_WORD *)(v11 + 154) = 2;
            break;
          case 2:
            v10 = tip2::details::reason_string((tip2::details *)"reason::view_emoji", a2);
            if ( *(_BYTE *)(v11 + 152) != v14 )
              return;
            *(_WORD *)(v11 + 154) = 3;
            break;
          case 13:
            v10 = tip2::details::reason_string((tip2::details *)"reason::view_smartactions", a2);
            if ( *(_BYTE *)(v11 + 152) != v16 )
              return;
            *(_WORD *)(v11 + 154) = v15;
            break;
          default:
            v10 = tip2::details::reason_string((tip2::details *)"reason::view_unknown", a2);
            if ( *(_BYTE *)(v11 + 152) != (_BYTE)v17 )
              return;
            *(_WORD *)(v11 + 154) = v17;
            break;
        }
        *(_BYTE *)(v11 + 152) = 1;
      }
      else
      {
        v10 = tip2::details::reason_string((tip2::details *)"reason::view_touchkeyboard", a2);
        if ( *(_BYTE *)(v11 + 152) != v12 )
          return;
        *(_BYTE *)(v11 + 152) = 1;
        *(_WORD *)(v11 + 154) = 1;
      }
      *(_QWORD *)(v11 + 160) = v10;
    }
    else if ( !*(_BYTE *)(v8 + 152) )
    {
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 16385;
      *(_QWORD *)(v8 + 160) = 0LL;
    }
  }
}
