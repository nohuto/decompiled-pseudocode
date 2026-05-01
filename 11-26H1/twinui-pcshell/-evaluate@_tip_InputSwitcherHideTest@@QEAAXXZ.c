/*
 * XREFs of ?evaluate@_tip_InputSwitcherHideTest@@QEAAXXZ @ 0x18063A3E4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@EEAAXXZ @ 0x18063A3B0 (-evaluate@-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InputSwitcherHideTest::evaluate(_tip_InputSwitcherHideTest *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // r9
  __int16 v6; // r9
  __int64 v7; // r8
  tip2::details *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // r9
  __int64 v12; // rax
  char v13; // cl

  if ( !*((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::control_center_hidden", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 4;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::timed_out", a2);
    v4 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v4 + 152) == (_BYTE)v6 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = v6;
LABEL_4:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 18) )
  {
    v12 = *((_QWORD *)this + 1);
    v13 = *(_BYTE *)(v12 + 152);
    if ( (*(_DWORD *)(v12 + 56) & 0x200) != 0 )
    {
      if ( v13 )
        return;
      *(_BYTE *)(v12 + 152) = 1;
      *(_WORD *)(v12 + 154) = 0x8000;
    }
    else
    {
      if ( v13 )
        return;
      *(_BYTE *)(v12 + 152) = 3;
      *(_WORD *)(v12 + 154) = 16385;
    }
    *(_QWORD *)(v12 + 160) = 0LL;
  }
  else
  {
    v8 = tip2::details::reason_string((tip2::details *)"reason::control_center_not_available", a2);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v10 + 152) == v11 )
    {
      *(_BYTE *)(v10 + 152) = 3;
      *(_WORD *)(v10 + 154) = 1;
      *(_QWORD *)(v10 + 160) = v8;
    }
  }
}
