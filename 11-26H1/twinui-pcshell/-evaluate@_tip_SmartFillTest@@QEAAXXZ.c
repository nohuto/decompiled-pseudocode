/*
 * XREFs of ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1805ADA60
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805AD870 (-evaluate@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1805AD4E4 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SmartFillTest::evaluate(_tip_SmartFillTest *this)
{
  __int64 v1; // r8
  const char *v2; // rdx
  const struct Geometry::CRect *v3; // rcx
  __int64 v4; // r9
  tip2::details *v5; // rax
  __int64 v6; // r8
  const struct Geometry::CRect *v7; // rcx
  __int64 v8; // r9
  _DWORD *v9; // r11
  int v10; // eax
  __int64 v11; // r8
  tip2::details *v12; // r9
  int v13; // eax
  tip2::details *v14; // rax
  __int16 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v1 + 80) )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_WORD *)(v1 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
  {
    if ( !RectContainsRect((_tip_SmartFillTest *)((char *)this + 32), (_tip_SmartFillTest *)((char *)this + 16))
      || !RectContainsRect(v3, (const struct Geometry::CRect *)(v4 + 48)) )
    {
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v8 + 84) )
    {
      if ( !RectContainsRect(v7, (const struct Geometry::CRect *)(v8 + 68)) )
        goto LABEL_9;
      if ( *v9 != *(_DWORD *)v2 )
      {
        v10 = *(_DWORD *)(v8 + 76);
        if ( *v9 != v10 && *(_DWORD *)(v8 + 56) != *(_DWORD *)v2 && *(_DWORD *)(v8 + 56) != v10 )
          goto LABEL_19;
      }
    }
    v2 = (const char *)(v8 + 92);
    if ( !*(_BYTE *)(v8 + 108) )
    {
LABEL_27:
      if ( ((*(_BYTE *)(v8 + 64) & 2) == 0 || *v9 == *(_DWORD *)v7)
        && ((*(_BYTE *)(v8 + 64) & 8) == 0 || *(_DWORD *)(v8 + 56) == *(_DWORD *)(v8 + 40))
        && ((*(_BYTE *)(v8 + 64) & 1) == 0 || *(_DWORD *)(v8 + 52) == *(_DWORD *)(v8 + 36)) )
      {
        if ( (*(_BYTE *)(v8 + 64) & 4) == 0 || *(_DWORD *)(v8 + 60) == *(_DWORD *)(v8 + 44) )
        {
          v18 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v18 + 152) )
          {
            *(_BYTE *)(v18 + 152) = 1;
            *(_WORD *)(v18 + 154) = 0x8000;
            *(_QWORD *)(v18 + 160) = 0LL;
          }
        }
        else
        {
          v14 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_anchored", v2);
          v17 = *(_QWORD *)(v16 + 8);
          if ( !*(_BYTE *)(v17 + 152) )
          {
            *(_BYTE *)(v17 + 152) = 3;
            *(_WORD *)(v17 + 154) = v15;
            *(_QWORD *)(v17 + 160) = v14;
          }
        }
        return;
      }
      v5 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_anchored", v2);
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 4;
LABEL_11:
      *(_QWORD *)(v6 + 160) = v5;
      return;
    }
    if ( RectContainsRect(v7, (const struct Geometry::CRect *)v2) )
    {
      v2 = (const char *)*(unsigned int *)(v8 + 96);
      if ( *(_DWORD *)(v8 + 52) != (_DWORD)v2 )
      {
        v13 = *(_DWORD *)(v8 + 104);
        if ( *(_DWORD *)(v8 + 52) != v13 && *(_DWORD *)(v8 + 60) != (_DWORD)v2 && *(_DWORD *)(v8 + 60) != v13 )
        {
LABEL_19:
          v12 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_to_target", v2);
          if ( !*(_BYTE *)(v11 + 152) )
          {
            *(_BYTE *)(v11 + 152) = 3;
            *(_WORD *)(v11 + 154) = 3;
            *(_QWORD *)(v11 + 160) = v12;
          }
          return;
        }
      }
      goto LABEL_27;
    }
LABEL_9:
    v5 = tip2::details::reason_string((tip2::details *)"reason::rect_not_in_work_area", v2);
    if ( *(_BYTE *)(v6 + 152) )
      return;
    *(_BYTE *)(v6 + 152) = 3;
    *(_WORD *)(v6 + 154) = 1;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_WORD *)(v1 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v1 + 152) = 3;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
}
