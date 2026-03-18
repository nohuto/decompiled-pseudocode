/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401DF3CC
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1401DECD8 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1401DF574 (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG y; // eax
  LONG x; // ebx
  int v9; // r10d
  int v10; // r11d
  int v11; // r8d
  int v13; // edx
  int v14; // ecx
  __int64 *v15; // r8
  int v16; // eax
  __int64 v17; // rt2
  __int64 *v18; // rcx
  int Red; // eax
  int v20; // r10d
  int v21; // r9d
  _DWORD v23[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  y = a1->y;
  x = a1->x;
  v10 = a3->x - a1->x;
  v11 = a2->y - y;
  v23[0] = a2->x - a1->x;
  v9 = v23[0];
  v13 = a3->y - y;
  v23[2] = v11;
  v23[3] = v13;
  v23[1] = v10;
  *((_DWORD *)a4 + 34) = x;
  v14 = v9 * v13 - v10 * v11;
  v23[5] = v14;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v11 >= 0 )
    v11 = 0;
  if ( v9 < v10 )
    v10 = v9;
  if ( v11 < v13 )
    v13 = v11;
  v15 = (__int64 *)((char *)a4 + 80);
  v23[4] = v13 + v10;
  v16 = -v14;
  if ( v14 > 0 )
    v16 = v14;
  v17 = 0x1000000000000LL % v16;
  v18 = (__int64 *)((char *)a4 + 16);
  v24 = 0x1000000000000LL / v16;
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v20 = a2->Red;
  v21 = a1->Red;
  v25 = v17;
  bDoGradient(v18, (__int64 *)a4 + 6, v15, v21, v20, Red, (struct _GRADSTRUCT *)v23);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v23);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v23);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v23);
  return 1LL;
}
