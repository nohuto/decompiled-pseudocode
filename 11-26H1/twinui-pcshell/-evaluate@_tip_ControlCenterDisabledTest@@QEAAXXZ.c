/*
 * XREFs of ?evaluate@_tip_ControlCenterDisabledTest@@QEAAXXZ @ 0x18036F034
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXXZ @ 0x18036F020 (-evaluate@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ControlCenterDisabledTest::evaluate(_tip_ControlCenterDisabledTest *this, const char *a2)
{
  __int64 v2; // r8
  char v3; // al
  tip2::details *v4; // rax
  __int64 v5; // r8
  char v6; // r9
  char v7; // r9
  char v8; // r9
  char v9; // r9

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
    return;
  }
  v3 = *((_BYTE *)this + 16);
  if ( !*((_WORD *)this + 8) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_enabled_correctly", a2);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_BYTE *)(v5 + 152) = 4;
    *(_WORD *)(v5 + 154) = 3;
    goto LABEL_18;
  }
  LOBYTE(a2) = *((_BYTE *)this + 17);
  if ( v3 )
  {
    if ( v3 != (_BYTE)a2 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_enabled_incorrectly", a2);
      if ( *(_BYTE *)(v5 + 152) != v7 )
        return;
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 4;
      goto LABEL_18;
    }
  }
  else if ( (_BYTE)a2 )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_disabled_incorrectly", a2);
    if ( *(_BYTE *)(v5 + 152) != v8 )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 2;
    goto LABEL_18;
  }
  if ( v3 )
  {
    if ( v3 == *((_BYTE *)this + 17) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_disabled_correctly", a2);
      if ( *(_BYTE *)(v5 + 152) == v9 )
      {
        *(_BYTE *)(v5 + 152) = 1;
        *(_WORD *)(v5 + 154) = 1;
LABEL_18:
        *(_QWORD *)(v5 + 160) = v4;
      }
    }
  }
}
