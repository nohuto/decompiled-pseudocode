/*
 * XREFs of ?evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ @ 0x1805B86FC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ @ 0x1805B7CF0 (-evaluate@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ToggleDashboardUsingSwipe::evaluate(_tip_ToggleDashboardUsingSwipe *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  char v5; // r10
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  char v9; // r10
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::swipe_canceled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 1;
      *(_QWORD *)(v4 + 160) = v2;
    }
    return;
  }
  if ( *((_BYTE *)this + 20) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::start_swipe_failed", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) != v9 )
      return;
    *(_WORD *)(v8 + 154) = 2;
LABEL_7:
    *(_BYTE *)(v8 + 152) = 3;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 21) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::continue_swipe_failed", a2);
    v8 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v8 + 152) != v11 )
      return;
    *(_BYTE *)(v8 + 152) = 3;
    *(_WORD *)(v8 + 154) = 3;
LABEL_8:
    *(_QWORD *)(v8 + 160) = v6;
    return;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::commit_swipe_failed", a2);
    v8 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v8 + 152) != v13 )
      return;
    *(_WORD *)(v8 + 154) = 4;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 23) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::cancel_swipe_failed", a2);
    v8 = *(_QWORD *)(v14 + 8);
    if ( *(_BYTE *)(v8 + 152) != v15 )
      return;
    *(_WORD *)(v8 + 154) = 5;
    goto LABEL_7;
  }
  v16 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v16 + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v16 + 152) )
      return;
    *(_BYTE *)(v16 + 152) = 1;
    *(_WORD *)(v16 + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v16 + 152) )
      return;
    *(_BYTE *)(v16 + 152) = 3;
    *(_WORD *)(v16 + 154) = 16385;
  }
  *(_QWORD *)(v16 + 160) = 0LL;
}
