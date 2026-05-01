/*
 * XREFs of ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x1805A969C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805A93F0 (-evaluate@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TabTearOutEventTest::evaluate(_tip_TabTearOutEventTest *this, const char *a2)
{
  tip2::details *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // r9
  char v7; // r10
  char v8; // al
  char v9; // r11
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r8
  int v13; // eax
  tip2::details *v14; // rax
  __int64 v15; // r8
  __int16 v16; // r11
  char v17; // r10
  char v18; // r10

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_cancelled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 3;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 18) )
  {
    if ( !*((_BYTE *)this + 17) || (v8 = 1, *((_DWORD *)this + 6)) )
      v8 = 0;
    if ( v8 )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::tearout_pending", a2);
      v4 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(v4 + 152) == v11 )
      {
        *(_BYTE *)(v4 + 152) = v9;
        *(_WORD *)(v4 + 154) = 4;
        goto LABEL_5;
      }
      return;
    }
    v12 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v12 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v12 + 152) )
        return;
      *(_BYTE *)(v12 + 152) = 3;
      *(_WORD *)(v12 + 154) = 16385;
LABEL_27:
      *(_QWORD *)(v12 + 160) = 0LL;
      return;
    }
    v13 = *((_DWORD *)this + 5);
    if ( v13 )
    {
      if ( v13 == *((_DWORD *)this + 6) )
      {
        if ( *(_BYTE *)(v12 + 152) )
          return;
        *(_BYTE *)(v12 + 152) = 1;
        *(_WORD *)(v12 + 154) = 0x8000;
        goto LABEL_27;
      }
      v14 = tip2::details::reason_string((tip2::details *)"reason::mismatched_snap_regions", a2);
      if ( *(_BYTE *)(v15 + 152) != v18 )
        return;
      *(_WORD *)(v15 + 154) = 2;
    }
    else
    {
      v14 = tip2::details::reason_string((tip2::details *)"reason::start_snap_region_not_initialized", a2);
      if ( *(_BYTE *)(v15 + 152) != v17 )
        return;
      *(_WORD *)(v15 + 154) = v16;
    }
    *(_BYTE *)(v15 + 152) = 3;
    *(_QWORD *)(v15 + 160) = v14;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::tearout_interrupted", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_WORD *)(v4 + 154) = 5;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 4;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
  }
}
