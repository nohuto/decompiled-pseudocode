/*
 * XREFs of ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x1802B1CBC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ @ 0x1805DB5F0 (-evaluate@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_AppPrelaunch::evaluate(_tip_AppPrelaunch *this, const char *a2)
{
  const char *v3; // rax
  char v4; // cl
  const char *v5; // rdx
  __int64 v6; // rcx
  tip2::details *v7; // rax
  __int16 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // r10
  __int64 v12; // r8
  char v13; // r10
  char v14; // r11
  __int64 v15; // r8
  char v16; // r10
  __int64 v17; // rax
  char v18; // cl

  if ( !*((_BYTE *)this + 16) )
  {
    v3 = "reason::no_prelaunch";
    v4 = 114;
    v5 = "reason::no_prelaunch";
    do
    {
      ++v3;
      if ( v4 == 58 )
        v5 = v3;
      v4 = *v3;
    }
    while ( *v3 );
    v6 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v6 + 152) )
    {
      *(_BYTE *)(v6 + 152) = 4;
      *(_WORD *)(v6 + 154) = 5;
      *(_QWORD *)(v6 + 160) = v5;
    }
    return;
  }
  if ( *((_DWORD *)this + 5) && *((_DWORD *)this + 5) != 2 )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::should_prelaunch_policy_failed_read", a2);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v10 + 152) != v11 )
      return;
    *(_BYTE *)(v10 + 152) = 3;
    *(_WORD *)(v10 + 154) = v8;
    goto LABEL_12;
  }
  if ( *((__int64 *)this + 3) > 3000 )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::delay_unexpectedly_long", a2);
    v10 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v10 + 152) != v13 )
      return;
    *(_BYTE *)(v10 + 152) = 3;
LABEL_16:
    *(_WORD *)(v10 + 154) = 4;
LABEL_12:
    *(_QWORD *)(v10 + 160) = v7;
    return;
  }
  if ( *((__int64 *)this + 3) > 500 )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::delay_unexpectedly_long", a2);
    v10 = *(_QWORD *)(v15 + 8);
    if ( *(_BYTE *)(v10 + 152) != v16 )
      return;
    *(_BYTE *)(v10 + 152) = v14;
    goto LABEL_16;
  }
  v17 = *((_QWORD *)this + 1);
  v18 = *(_BYTE *)(v17 + 152);
  if ( (*(_DWORD *)(v17 + 56) & 0x200) != 0 )
  {
    if ( v18 )
      return;
    *(_BYTE *)(v17 + 152) = 1;
    *(_WORD *)(v17 + 154) = 0x8000;
  }
  else
  {
    if ( v18 )
      return;
    *(_BYTE *)(v17 + 152) = 3;
    *(_WORD *)(v17 + 154) = 16385;
  }
  *(_QWORD *)(v17 + 160) = 0LL;
}
