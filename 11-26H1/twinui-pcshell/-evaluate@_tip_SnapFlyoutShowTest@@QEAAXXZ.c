/*
 * XREFs of ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180269288
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805A4A60 (-evaluate@-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SnapFlyoutShowTest::evaluate(_tip_SnapFlyoutShowTest *this, const char *a2)
{
  __int64 v2; // r8
  const char *v3; // rax
  char v4; // r11
  char v5; // r11
  __int64 v6; // r8
  const char *v7; // r9
  char v8; // r11
  const char *v9; // rax
  __int64 v10; // r8
  char v11; // r11
  char v12; // r11
  char v13; // r11
  char v14; // r11
  char v15; // r10
  char v16; // r11
  char v17; // r11
  char v18; // r10
  char v19; // r11
  char v20; // r10
  char v21; // r11
  char v22; // r11

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
LABEL_4:
    *(_QWORD *)(v2 + 160) = 0LL;
LABEL_50:
    *(_BYTE *)(v2 + 152) = 3;
    return;
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 23) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::noMonitorInfo", a2);
    if ( *(_BYTE *)(v2 + 152) != v4 )
      return;
    *(_WORD *)(v2 + 154) = 5;
LABEL_49:
    *(_QWORD *)(v2 + 160) = v3;
    goto LABEL_50;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::threadFailedToStart", a2);
    if ( *(_BYTE *)(v2 + 152) != v5 )
      return;
    *(_WORD *)(v2 + 154) = 4;
    goto LABEL_49;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::controlFailedToLoad", a2);
    if ( *(_BYTE *)(v6 + 152) == v8 )
    {
      *(_QWORD *)(v6 + 160) = v7;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 3;
    }
    return;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v9 = tip2::details::reason_string((tip2::details *)"reason::showFlyoutRejected", a2);
    if ( *(_BYTE *)(v10 + 152) != v11 )
      return;
    *(_WORD *)(v10 + 154) = 8;
LABEL_20:
    *(_BYTE *)(v10 + 152) = 4;
    goto LABEL_21;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v9 = tip2::details::reason_string((tip2::details *)"reason::canceled", a2);
    if ( *(_BYTE *)(v10 + 152) != v12 )
      return;
    *(_WORD *)(v10 + 154) = 1;
    goto LABEL_20;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v9 = tip2::details::reason_string((tip2::details *)"reason::cleaningUpPreviousDrag", a2);
    if ( *(_BYTE *)(v10 + 152) != v13 )
      return;
    *(_WORD *)(v10 + 154) = 13;
    goto LABEL_20;
  }
  if ( *((_DWORD *)this + 7) == 1 )
  {
    if ( *((_BYTE *)this + 26) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::noDisplayRegion", a2);
      if ( *(_BYTE *)(v2 + 152) != v14 )
        return;
      *(_WORD *)(v2 + 154) = 7;
      goto LABEL_49;
    }
    if ( *((_BYTE *)this + 17) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::flyoutShown", a2);
      if ( *(_BYTE *)(v10 + 152) != v16 )
        return;
      *(_BYTE *)(v10 + 152) = v15;
      *(_WORD *)(v10 + 154) = 10;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 7) != 2 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::invalidControlType", a2);
      if ( *(_BYTE *)(v2 + 152) != v22 )
        return;
      *(_WORD *)(v2 + 154) = 12;
      goto LABEL_49;
    }
    if ( *((_BYTE *)this + 27) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::noWorkAreaRect", a2);
      if ( *(_BYTE *)(v2 + 152) != v17 )
        return;
      *(_WORD *)(v2 + 154) = 9;
      goto LABEL_49;
    }
    if ( *((_BYTE *)this + 17) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::barShown", a2);
      if ( *(_BYTE *)(v10 + 152) != v19 )
        return;
      *(_BYTE *)(v10 + 152) = v18;
      *(_WORD *)(v10 + 154) = 11;
      goto LABEL_21;
    }
  }
  if ( *((_BYTE *)this + 24) )
  {
    v9 = tip2::details::reason_string((tip2::details *)"reason::reused", a2);
    if ( *(_BYTE *)(v10 + 152) != v21 )
      return;
    *(_BYTE *)(v10 + 152) = v20;
    *(_WORD *)(v10 + 154) = 6;
LABEL_21:
    *(_QWORD *)(v10 + 160) = v9;
    return;
  }
  if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_BYTE *)(v2 + 152) = 1;
    *(_WORD *)(v2 + 154) = 0x8000;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
