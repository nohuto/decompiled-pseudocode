/*
 * XREFs of ?evaluate@_tip_VDSlideAnimationPerfTest@@QEAAXXZ @ 0x180558A24
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@EEAAXXZ @ 0x180558A10 (-evaluate@-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_VDSlideAnimationPerfTest::evaluate(_tip_VDSlideAnimationPerfTest *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // r9
  __int16 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // r8
  char v13; // r9
  __int64 v14; // r8
  char v15; // r9
  __int64 v16; // r8
  char v17; // r9
  __int64 v18; // r8
  char v19; // r9
  __int64 v20; // r8
  char v21; // r9
  __int64 v22; // r8
  char v23; // r9
  __int64 v24; // rax

  if ( *((_BYTE *)this + 22) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::animationNotNeeded", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 6;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToInitializeHotkeyWindow", a2);
    v4 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v4 + 152) == (_BYTE)v6 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = v6;
      goto LABEL_5;
    }
    return;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToAddWindowIntoCollection", a2);
    v4 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v4 + 152) == v9 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 1;
      goto LABEL_5;
    }
    return;
  }
  if ( *((_BYTE *)this + 25) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToMakeBackgroundThumbnail", a2);
    v4 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v4 + 152) != v11 )
      return;
    *(_WORD *)(v4 + 154) = 8;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 18) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToCreateAdjacentDesktop", a2);
    v4 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v4 + 152) == v13 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_5;
    }
    return;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::focusNotChanged", a2);
    v4 = *(_QWORD *)(v14 + 8);
    if ( *(_BYTE *)(v4 + 152) != v15 )
      return;
    *(_WORD *)(v4 + 154) = 7;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 4;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
    return;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToSwitchDesktop", a2);
    v4 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v4 + 152) == v17 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 3;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 20) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToCommitAnimation", a2);
    v4 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v4 + 152) == v19 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 4;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 21) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::failedToAnimate", a2);
    v4 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v4 + 152) == v21 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 5;
      goto LABEL_5;
    }
  }
  else if ( *((_BYTE *)this + 26) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::stretchBltBitfailed", a2);
    v4 = *(_QWORD *)(v22 + 8);
    if ( *(_BYTE *)(v4 + 152) == v23 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 9;
      goto LABEL_5;
    }
  }
  else
  {
    v24 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v24 + 80) )
    {
      if ( *(_BYTE *)(v24 + 152) )
        return;
      *(_BYTE *)(v24 + 152) = 3;
      *(_WORD *)(v24 + 154) = 0x4000;
    }
    else if ( (*(_DWORD *)(v24 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v24 + 152) )
        return;
      *(_BYTE *)(v24 + 152) = 1;
      *(_WORD *)(v24 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v24 + 152) )
        return;
      *(_BYTE *)(v24 + 152) = 3;
      *(_WORD *)(v24 + 154) = 16385;
    }
    *(_QWORD *)(v24 + 160) = 0LL;
  }
}
