/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@QEAAXXZ @ 0x180610FE4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180610ED0 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EE.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::evaluate(
        _tip_CopilotHardwareKeyExtendedSignalsInvokedTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // r9
  char v7; // r10
  const char *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  char v11; // r10
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // rax
  __int64 v19; // r9
  char v20; // r10

  if ( !*((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::policy_disabled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
LABEL_38:
    *(_QWORD *)(v4 + 160) = v2;
    *(_BYTE *)(v4 + 152) = 3;
    return;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failed_to_create_foreground_window", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) != v7 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_38;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 24) && (*((_BYTE *)this + 22) || *((_BYTE *)this + 23)) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::incosistent_signal_handling", a2);
      v4 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v4 + 152) != v13 )
        return;
      *(_WORD *)(v4 + 154) = 4;
      goto LABEL_38;
    }
    if ( *((_BYTE *)this + 26) || *((_BYTE *)this + 25) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::bad_longpress_signal_uri", a2);
      v4 = *(_QWORD *)(v19 + 8);
      if ( *(_BYTE *)(v4 + 152) != v20 )
        return;
      *(_WORD *)(v4 + 154) = 6;
      goto LABEL_38;
    }
    if ( *((_BYTE *)this + 29) && *((_BYTE *)this + 28) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::failed_to_read_app_extension_properties", a2);
      v4 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v4 + 152) != v15 )
        return;
      *(_WORD *)(v4 + 154) = 7;
      goto LABEL_38;
    }
    if ( !*((_BYTE *)this + 16) && !*((_BYTE *)this + 18) && !*((_BYTE *)this + 30) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::failed_to_restore_foreground", a2);
      v4 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v4 + 152) != v17 )
        return;
      *(_WORD *)(v4 + 154) = 8;
      goto LABEL_38;
    }
    v18 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v18 + 56) & 0x200) != 0 )
    {
      if ( !*(_QWORD *)(v18 + 80) )
      {
        if ( *(_BYTE *)(v18 + 152) )
          return;
        *(_BYTE *)(v18 + 152) = 1;
        *(_WORD *)(v18 + 154) = 0x8000;
LABEL_30:
        *(_QWORD *)(v18 + 160) = 0LL;
        return;
      }
      if ( *(_BYTE *)(v18 + 152) )
        return;
      *(_WORD *)(v18 + 154) = 0x4000;
    }
    else
    {
      if ( *(_BYTE *)(v18 + 152) )
        return;
      *(_WORD *)(v18 + 154) = 16385;
    }
    *(_BYTE *)(v18 + 152) = 3;
    goto LABEL_30;
  }
  v8 = tip2::details::reason_string((tip2::details *)"reason::long_press_timer_creation_failed", a2);
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_BYTE *)(v10 + 152) == v11 )
  {
    *(_QWORD *)(v10 + 160) = v8;
    *(_BYTE *)(v10 + 152) = 3;
    *(_WORD *)(v10 + 154) = 3;
  }
}
