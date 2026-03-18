/*
 * XREFs of ?_TTIntersectSegmentAndLine@@YAHUtagPOINT@@000PEAU1@@Z @ 0x140269CFC
 * Callers:
 *     ?_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z @ 0x140302974 (-_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TTIntersectSegmentAndLine(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT *a5)
{
  int v5; // esi
  int v6; // r15d
  int v7; // ebx
  int v8; // r11d
  int v9; // r12d
  int v10; // r14d
  int v11; // r10d
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // r11d
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // r10d
  LONG x; // [rsp+48h] [rbp+18h]

  x = a3.x;
  v5 = a4.x - a1.x;
  v6 = a3.x - a1.x;
  v7 = a2.x - a1.x;
  v8 = a4.y - a1.y;
  v9 = a3.y - a1.y;
  v10 = a2.y - a1.y;
  a3.x = 0;
  a4.x = v6 * (a4.y - a1.y) - (a3.y - a1.y) * (a4.x - a1.x);
  v11 = (x - a2.x) * (a4.y - a2.y) - (v5 - (a2.x - a1.x)) * (a3.y - a2.y);
  if ( a4.x )
  {
    if ( !v11 )
    {
      *a5 = a2;
      goto LABEL_6;
    }
    if ( a4.x <= 0 )
      v12 = (a4.x >= 0) - 1;
    else
      v12 = 1;
    if ( v11 <= 0 )
      v13 = (v11 >= 0) - 1;
    else
      v13 = 1;
    if ( v12 != v13 )
    {
      v14 = v10 * (v6 - v5);
      v15 = v7 * (v8 - v9);
      v16 = v6 * v8 - v9 * v5;
      v17 = v10 * v16;
      v18 = v15 + v14;
      v19 = v7 * v16;
      if ( v19 <= 0 )
        v20 = (v19 >= 0) - 1;
      else
        v20 = 1;
      v21 = v18 / -2;
      if ( v18 / -2 < 0 )
        v21 = v18 / 2;
      a5->x = a1.x + (v19 + v20 * v21) / v18;
      if ( v17 <= 0 )
      {
        if ( v17 >= 0 )
          v21 = 0;
        else
          v21 = -v21;
      }
      a3.x = 1;
      a5->y = a1.y + (v17 + v21) / v18;
    }
  }
  else if ( v11 )
  {
    *a5 = a1;
LABEL_6:
    a3.x = 1;
  }
  return (unsigned int)a3.x;
}
