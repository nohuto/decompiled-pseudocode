/*
 * XREFs of ?evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ @ 0x180589804
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805897D0 (-evaluate@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ColumnSmartFillTest::evaluate(_tip_ColumnSmartFillTest *this, const char *a2)
{
  __int64 v2; // r9
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  const char *v9; // rdx
  const char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  const char *v15; // rax

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
LABEL_4:
    *(_QWORD *)(v2 + 160) = 0LL;
LABEL_25:
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
  v4 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 5) > v4 || (v5 = *((_DWORD *)this + 7), v4 > v5) )
  {
    v15 = tip2::details::reason_string((tip2::details *)"reason::pos_outside_work_area", a2);
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 1;
    goto LABEL_24;
  }
  if ( *((_DWORD *)this + 12) > v4 || v4 > *((_DWORD *)this + 14) )
  {
    v15 = tip2::details::reason_string((tip2::details *)"reason::pos_outside_result_rect", a2);
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 2;
LABEL_24:
    *(_QWORD *)(v2 + 160) = v15;
    goto LABEL_25;
  }
  v6 = *((_DWORD *)this + 8) - *((_DWORD *)this + 6);
  v7 = MulDiv(v5 - *((_DWORD *)this + 5), 96, *((_DWORD *)this + 9));
  v8 = MulDiv(v6, 96, *((_DWORD *)this + 9));
  if ( v7 >= *((_DWORD *)this + 10) )
  {
    if ( v8 >= *((_DWORD *)this + 11) )
    {
      v14 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v14 + 152) )
      {
        *(_QWORD *)(v14 + 160) = 0LL;
        *(_BYTE *)(v14 + 152) = 1;
        *(_WORD *)(v14 + 154) = 0x8000;
      }
    }
    else
    {
      v12 = tip2::details::reason_string((tip2::details *)"reason::result_rect_too_short", v9);
      v13 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v13 + 152) )
      {
        *(_BYTE *)(v13 + 152) = 3;
        *(_WORD *)(v13 + 154) = 4;
        *(_QWORD *)(v13 + 160) = v12;
      }
    }
  }
  else
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::result_rect_too_narrow", v9);
    v11 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v11 + 152) )
    {
      *(_QWORD *)(v11 + 160) = v10;
      *(_BYTE *)(v11 + 152) = 3;
      *(_WORD *)(v11 + 154) = 3;
    }
  }
}
