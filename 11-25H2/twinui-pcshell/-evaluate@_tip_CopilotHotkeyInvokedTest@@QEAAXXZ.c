/*
 * XREFs of ?evaluate@_tip_CopilotHotkeyInvokedTest@@QEAAXXZ @ 0x1806112E4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180610F10 (-evaluate@-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHotkeyInvokedTest::evaluate(_tip_CopilotHotkeyInvokedTest *this, const char *a2)
{
  __int64 v2; // r10
  const char *v3; // rax
  __int16 v4; // r9
  __int64 v5; // r10
  char v6; // r9
  char v7; // r9

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)this + 16) || *((_BYTE *)this + 18)) && *((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::copilotPWALaunched", a2);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v4 )
      return;
    *(_BYTE *)(v5 + 152) = 1;
    *(_WORD *)(v5 + 154) = v4;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 16) && !*((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::copilotPWALaunchFailed", a2);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 1;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::launchOrTogglePackagedAppFailed", a2);
    if ( *(_BYTE *)(v5 + 152) != v7 )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 3;
LABEL_9:
    *(_QWORD *)(v5 + 160) = v3;
    return;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 0x4000;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 1;
    *(_WORD *)(v2 + 154) = 0x8000;
  }
LABEL_22:
  *(_QWORD *)(v2 + 160) = 0LL;
}
