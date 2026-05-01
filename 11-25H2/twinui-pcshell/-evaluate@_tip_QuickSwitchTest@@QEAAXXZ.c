/*
 * XREFs of ?evaluate@_tip_QuickSwitchTest@@QEAAXXZ @ 0x18048D0E4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@EEAAXXZ @ 0x18048D0D0 (-evaluate@-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18028BA7C (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_QuickSwitchTest::evaluate(tip2::test_state **this)
{
  const struct wil::FailureInfo *error; // rax
  const char *v2; // rdx
  __int64 v3; // r10
  const char *v4; // rax
  __int64 v5; // r10
  char v6; // r9

  error = tip2::test_state::last_error(this[1]);
  if ( error && *((_DWORD *)error + 2) == -2147319765 )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::view_for_hwnd_not_found", v2);
    if ( *(_BYTE *)(v5 + 152) == v6 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 1;
      *(_QWORD *)(v5 + 160) = v4;
    }
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(v3 + 80) )
      {
        if ( *(_BYTE *)(v3 + 152) )
          return;
        *(_BYTE *)(v3 + 152) = 3;
        *(_WORD *)(v3 + 154) = 0x4000;
      }
      else
      {
        if ( *(_BYTE *)(v3 + 152) )
          return;
        *(_BYTE *)(v3 + 152) = 1;
        *(_WORD *)(v3 + 154) = 0x8000;
      }
    }
    else
    {
      if ( *(_BYTE *)(v3 + 152) )
        return;
      *(_BYTE *)(v3 + 152) = 3;
      *(_WORD *)(v3 + 154) = 16385;
    }
    *(_QWORD *)(v3 + 160) = 0LL;
  }
}
