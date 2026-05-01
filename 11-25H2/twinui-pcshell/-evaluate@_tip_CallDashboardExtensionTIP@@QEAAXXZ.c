/*
 * XREFs of ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x180202CC0
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ @ 0x1805B7C30 (-evaluate@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_CallDashboardExtensionTIP::evaluate(_tip_CallDashboardExtensionTIP *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // r8
  char v4; // r10
  const char *v5; // r9
  const char *v6; // rax
  __int64 v7; // rax
  const char *v8; // rax
  __int64 v9; // r9
  char v10; // r11

  if ( *((_BYTE *)this + 17) && *((_BYTE *)this + 16) )
  {
    v3 = "reason::extension_creation_failed";
    v4 = 114;
    v5 = "reason::extension_creation_failed";
    do
    {
      v6 = ++v3;
      if ( v4 != 58 )
        v6 = v5;
      v4 = *v3;
      v5 = v6;
    }
    while ( *v3 );
    v7 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v7 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 3;
      *(_WORD *)(v7 + 154) = 1;
      *(_QWORD *)(v7 + 160) = v5;
    }
  }
  else
  {
    v2 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v2 + 152) )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
LABEL_15:
      *(_QWORD *)(v2 + 160) = 0LL;
      return;
    }
    if ( *((_BYTE *)this + 18) )
    {
      if ( !*(_BYTE *)(v2 + 152) )
      {
        *(_BYTE *)(v2 + 152) = 1;
        *(_WORD *)(v2 + 154) = 0x8000;
        goto LABEL_15;
      }
    }
    else
    {
      v8 = tip2::details::reason_string((tip2::details *)"reason::call_failed", a2);
      if ( *(_BYTE *)(v9 + 152) == v10 )
      {
        *(_QWORD *)(v9 + 160) = v8;
        *(_BYTE *)(v9 + 152) = 2;
        *(_WORD *)(v9 + 154) = 2;
      }
    }
  }
}
