/*
 * XREFs of ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5578
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C7F50 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x1804C5D2C (--_GGridRow@@QEAAPEAXI@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5408 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

void __fastcall GridLayout::LayoutRows(GridLayout *this, const RECT *a2)
{
  __int64 v2; // r14
  GridRow **v3; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  GridRow *v8; // rdx
  int v9; // r9d
  int v10; // r8d
  int v11; // r10d
  int v12; // eax
  int v13; // esi
  GridRow *v14; // r14
  int v15; // r8d
  __int64 v16; // r15
  GridRow *v17; // r15
  struct tagRECT si128; // xmm0
  int v19; // ecx
  RECT *v20; // rdi
  int v21; // edx
  RECT v22; // xmm0
  struct tagRECT v23; // xmm1
  RECT v24; // [rsp+20h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 7);
  v3 = (GridRow **)((char *)this + 48);
  if ( v2 )
  {
    v6 = v2 - 1;
    v7 = 56 * v2 - 56;
    do
    {
      if ( !*(_QWORD *)((char *)*v3 + v7 + 32) && v6 < (unsigned __int64)v3[1] )
      {
        GridRow::`scalar deleting destructor'((GridRow *)((char *)*v3 + v7));
        v8 = v3[1];
        if ( (GridRow *)v6 != (GridRow *)((char *)v8 - 1) )
          memmove_0((char *)*v3 + v7, (char *)*v3 + v7 + 56, 56 * ((_QWORD)v8 - v6) - 56);
        v3[1] = (GridRow *)((char *)v3[1] - 1);
      }
      --v6;
      v7 -= 56LL;
      --v2;
    }
    while ( v2 );
  }
  v9 = *((_DWORD *)this + 1);
  v10 = a2->bottom - a2->top;
  v11 = *((_DWORD *)this + 2);
  v12 = (v10 + v9) / (v11 + v9);
  if ( v12 >= *((_DWORD *)this + 14) )
    v12 = *((_DWORD *)this + 14);
  if ( v12 <= 0 )
    v13 = a2->bottom - a2->top;
  else
    v13 = v11 * v12 + v9 * (v12 - 1);
  v14 = *v3;
  v15 = v10 - v13;
  v16 = 56LL * (_QWORD)v3[1];
  v24 = *a2;
  v17 = (GridRow *)((char *)v14 + v16);
  si128 = 0LL;
  rcSrc1 = 0LL;
  v19 = v24.top + v15 / 2 + v11;
  v24.top += v15 / 2;
  v24.bottom = v19;
  if ( v14 != v17 )
  {
    v20 = (RECT *)((char *)v14 + 8);
    do
    {
      GridRow::LayoutRow(v14, (const struct Geometry::CRect *)&v24);
      v21 = *((_DWORD *)this + 1) + *((_DWORD *)this + 2);
      v22 = *v20;
      v24.bottom += v21;
      v24.top += v21;
      rcSrc2 = v22;
      UnionRect(&rcSrc1, &rcSrc1, &rcSrc2);
      v14 = (GridRow *)((char *)v14 + 56);
      v20 = (RECT *)((char *)v20 + 56);
    }
    while ( v14 != v17 );
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&rcSrc1);
  }
  rcDst = si128;
  rcDst.bottom = v13 + si128.top;
  IntersectRect(&rcDst, a2, &rcDst);
  v23 = rcDst;
  *((RECT *)this + 2) = rcSrc1;
  *((struct tagRECT *)this + 1) = v23;
  *((_BYTE *)this + 12) = *((_DWORD *)this + 11) - *((_DWORD *)this + 9) > *((_DWORD *)this + 7) - *((_DWORD *)this + 5);
}
