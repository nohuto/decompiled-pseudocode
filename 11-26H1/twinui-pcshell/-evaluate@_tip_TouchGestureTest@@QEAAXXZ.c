/*
 * XREFs of ?evaluate@_tip_TouchGestureTest@@QEAAXXZ @ 0x1805936D4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805936C0 (-evaluate@-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TouchGestureTest::evaluate(_tip_TouchGestureTest *this, const char *a2)
{
  __int64 v2; // r8
  tip2::details *v3; // rax
  __int64 v4; // r8
  char v5; // r9
  __int16 v6; // r9
  char v7; // r9
  char v8; // r11
  char v9; // r9
  __int16 v10; // r11
  char v11; // r9
  char v12; // r9

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_31;
  }
  if ( !*((_DWORD *)this + 4) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::InvalidGestureType", a2);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
LABEL_7:
    *(_BYTE *)(v4 + 152) = 4;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::InvalidTarget", a2);
    if ( *(_BYTE *)(v4 + 152) != (_BYTE)v6 )
      return;
    *(_WORD *)(v4 + 154) = v6;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 25) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::HasRecognizerException", a2);
    if ( *(_BYTE *)(v4 + 152) != v7 )
      return;
    *(_WORD *)(v4 + 154) = 5;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 5) < 3u )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::InvalidContacts", a2);
    if ( *(_BYTE *)(v4 + 152) != v9 )
      return;
    *(_BYTE *)(v4 + 152) = v8;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::InvalidFinish", a2);
    if ( *(_BYTE *)(v4 + 152) != v11 )
      return;
    *(_BYTE *)(v4 + 152) = v10;
    *(_WORD *)(v4 + 154) = v10;
    goto LABEL_8;
  }
  if ( *((int *)this + 7) < 0
    || *((int *)this + 8) < 0
    || *((int *)this + 9) < 0
    || *((int *)this + 10) < 0
    || *((int *)this + 11) < 0
    || *((int *)this + 12) < 0 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::HasFailedTargetResult", a2);
    if ( *(_BYTE *)(v4 + 152) != v12 )
      return;
    *(_BYTE *)(v4 + 152) = 2;
    *(_WORD *)(v4 + 154) = 4;
LABEL_8:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  *(_WORD *)(v2 + 154) = 0x8000;
LABEL_31:
  *(_QWORD *)(v2 + 160) = 0LL;
}
