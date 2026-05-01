/*
 * XREFs of ?evaluate@_tip_ToggleDashboardUsingHotkey@@QEAAXXZ @ 0x1805DC02C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXXZ @ 0x1805DB6D0 (-evaluate@-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ToggleDashboardUsingHotkey::evaluate(_tip_ToggleDashboardUsingHotkey *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // r9
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // rax
  char v9; // cl

  if ( *((_BYTE *)this + 18) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::extension_call_failed", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 17) || *((_BYTE *)this + 16) )
  {
    v8 = *((_QWORD *)this + 1);
    v9 = *(_BYTE *)(v8 + 152);
    if ( (*(_DWORD *)(v8 + 56) & 0x200) != 0 )
    {
      if ( v9 )
        return;
      *(_BYTE *)(v8 + 152) = 1;
      *(_WORD *)(v8 + 154) = 0x8000;
    }
    else
    {
      if ( v9 )
        return;
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 16385;
    }
    *(_QWORD *)(v8 + 160) = 0LL;
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::toggle_failed", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_WORD *)(v4 + 154) = 2;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 3;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
}
