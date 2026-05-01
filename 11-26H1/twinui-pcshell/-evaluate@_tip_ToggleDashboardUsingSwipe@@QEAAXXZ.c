/*
 * XREFs of ?evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ @ 0x1805DC0F4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ @ 0x1805DB6F0 (-evaluate@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ToggleDashboardUsingSwipe::evaluate(_tip_ToggleDashboardUsingSwipe *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // r9
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // r8
  char v11; // r9
  __int64 v12; // r8
  char v13; // r9
  __int64 v14; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::swipe_canceled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 4;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::start_swipe_failed", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 2;
LABEL_4:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 21) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::continue_swipe_failed", a2);
    v4 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v4 + 152) == v9 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 3;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 22) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::commit_swipe_failed", a2);
    v4 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v4 + 152) == v11 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 4;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 23) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::cancel_swipe_failed", a2);
    v4 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v4 + 152) == v13 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 5;
      goto LABEL_4;
    }
  }
  else
  {
    v14 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v14 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v14 + 152) )
        return;
      *(_BYTE *)(v14 + 152) = 1;
      *(_WORD *)(v14 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v14 + 152) )
        return;
      *(_BYTE *)(v14 + 152) = 3;
      *(_WORD *)(v14 + 154) = 16385;
    }
    *(_QWORD *)(v14 + 160) = 0LL;
  }
}
