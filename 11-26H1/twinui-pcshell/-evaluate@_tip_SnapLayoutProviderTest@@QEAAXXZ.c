/*
 * XREFs of ?evaluate@_tip_SnapLayoutProviderTest@@QEAAXXZ @ 0x1805B6394
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805B6380 (-evaluate@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1805AD4E4 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SnapLayoutProviderTest::evaluate(_tip_SnapLayoutProviderTest *this, const char *a2)
{
  _tip_SnapLayoutProviderTest *v2; // r8
  tip2::details *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  char v6; // r11
  const char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  char v10; // r11
  const char *v11; // rdx
  __int64 v12; // r8
  char v13; // r11
  __int64 v14; // r8
  const struct tagPOINT *v15; // r9
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // rax

  v2 = this;
  if ( !*((_BYTE *)this + 16) || *((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::missing_critical_data", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 3;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 18) )
    goto LABEL_13;
  if ( !RectContainsRect(
          (_tip_SnapLayoutProviderTest *)((char *)this + 28),
          (_tip_SnapLayoutProviderTest *)((char *)this + 60)) )
    goto LABEL_8;
  if ( Geometry::CRect::Contains((Geometry::CRect *)(v8 + 60), (const struct tagPOINT *)(v8 + 20)) )
  {
LABEL_13:
    if ( !RectContainsRect(
            (_tip_SnapLayoutProviderTest *)((char *)v2 + 44),
            (_tip_SnapLayoutProviderTest *)((char *)v2 + 76)) )
    {
LABEL_8:
      v3 = tip2::details::reason_string((tip2::details *)"reason::snap_region_outside_monitor", v7);
      v5 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v5 + 152) == v10 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 2;
LABEL_4:
        *(_QWORD *)(v5 + 160) = v3;
        return;
      }
      return;
    }
    if ( Geometry::CRect::Contains((Geometry::CRect *)(v14 + 76), v15) )
    {
      v18 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v18 + 152) == (_BYTE)v17 )
      {
        *(_BYTE *)(v18 + 152) = 1;
        *(_WORD *)(v18 + 154) = 0x8000;
        *(_QWORD *)(v18 + 160) = v17;
      }
      return;
    }
  }
  v3 = tip2::details::reason_string((tip2::details *)"reason::invalid_snap_region_for_point", v11);
  v5 = *(_QWORD *)(v12 + 8);
  if ( *(_BYTE *)(v5 + 152) == v13 )
  {
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 1;
    goto LABEL_4;
  }
}
