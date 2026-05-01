/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x1806111F8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180610EF0 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::evaluate(_tip_CopilotHardwareKeyInvokedTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  char v6; // r10
  char v7; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_WORD *)(v2 + 154) = 0x4000;
LABEL_4:
      *(_BYTE *)(v2 + 152) = 3;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 17) == 1 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::settingsInvoke", a2);
      if ( *(_BYTE *)(v4 + 152) != v5 )
        return;
      *(_WORD *)(v4 + 154) = 3;
    }
    else if ( *((_BYTE *)this + 18) == 1 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::searchInvoke", a2);
      if ( *(_BYTE *)(v4 + 152) != v6 )
        return;
      *(_WORD *)(v4 + 154) = 2;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::hardwareKeyFallback", a2);
      if ( *(_BYTE *)(v4 + 152) != v7 )
        return;
      *(_WORD *)(v4 + 154) = 1;
    }
    *(_QWORD *)(v4 + 160) = v3;
    *(_BYTE *)(v4 + 152) = 1;
  }
}
