/*
 * XREFs of ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x1805857DC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ @ 0x180585520 (-evaluate@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TabTearOutEventTest::evaluate(_tip_TabTearOutEventTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r10
  char v7; // r11
  char v8; // al
  __int64 v9; // r10
  char v10; // r11
  __int64 v11; // r9
  int v12; // eax
  const char *v13; // rax
  __int64 v14; // r9
  char v15; // r11
  char v16; // r11

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
      v4 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v4 + 152) == v10 )
      {
        *(_BYTE *)(v4 + 152) = 1;
        *(_WORD *)(v4 + 154) = 4;
        goto LABEL_5;
      }
      return;
    }
    v11 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v11 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_BYTE *)(v11 + 152) = 3;
      *(_WORD *)(v11 + 154) = 16385;
LABEL_27:
      *(_QWORD *)(v11 + 160) = 0LL;
      return;
    }
    v12 = *((_DWORD *)this + 5);
    if ( v12 )
    {
      if ( v12 == *((_DWORD *)this + 6) )
      {
        if ( *(_BYTE *)(v11 + 152) )
          return;
        *(_BYTE *)(v11 + 152) = 1;
        *(_WORD *)(v11 + 154) = 0x8000;
        goto LABEL_27;
      }
      v13 = tip2::details::reason_string((tip2::details *)"reason::mismatched_snap_regions", a2);
      if ( *(_BYTE *)(v14 + 152) != v16 )
        return;
      *(_WORD *)(v14 + 154) = 2;
    }
    else
    {
      v13 = tip2::details::reason_string((tip2::details *)"reason::start_snap_region_not_initialized", a2);
      if ( *(_BYTE *)(v14 + 152) != v15 )
        return;
      *(_WORD *)(v14 + 154) = 1;
    }
    *(_BYTE *)(v14 + 152) = 3;
    *(_QWORD *)(v14 + 160) = v13;
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
