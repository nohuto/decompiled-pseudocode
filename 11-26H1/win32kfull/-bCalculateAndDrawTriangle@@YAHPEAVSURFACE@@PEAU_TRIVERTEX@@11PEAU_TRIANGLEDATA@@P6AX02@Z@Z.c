/*
 * XREFs of ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1401DECD8
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140061724 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1401DEF40 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401DF3CC (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401DF6D8 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bCalculateAndDrawTriangle(
        struct SURFACE *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        void (*a6)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v6; // rbx
  struct _TRIVERTEX *v8; // r10
  struct _TRIVERTEX *v9; // rdi
  struct _TRIVERTEX *v10; // rsi
  int v11; // eax
  struct _TRIANGLEDATA *v12; // r9
  LONG y; // edx
  LONG v14; // ecx
  LONG v15; // eax
  int v16; // r8d
  _DWORD *v17; // rdx
  struct _TRIVERTEX *v19; // r8

  v6 = a4;
  if ( !a6 )
    return 0LL;
  v8 = a2;
  if ( a2->y <= a3->y )
  {
    v8 = a3;
    a3 = a2;
  }
  v9 = v8;
  if ( v8->y > a4->y )
  {
    v9 = a4;
    v6 = v8;
  }
  v10 = v9;
  if ( a3->y <= v9->y )
    v9 = a3;
  else
    v10 = a3;
  v11 = lCalculateTriangleArea(v9, v10, v6, a5);
  if ( !v11 )
    return 0LL;
  if ( v11 < 0 )
  {
    v19 = v10;
    v10 = v6;
    v6 = v19;
    if ( (int)lCalculateTriangleArea(v9, v10, v19, v12) <= 0 )
      return 0LL;
  }
  y = v9->y;
  if ( y <= *((_DWORD *)a5 + 1) )
    y = *((_DWORD *)a5 + 1);
  *((_DWORD *)a5 + 28) = y;
  v14 = v10->y;
  if ( v14 <= v6->y )
    v14 = v6->y;
  v15 = *((_DWORD *)a5 + 3);
  if ( v14 < v15 )
    v15 = v14;
  *((_DWORD *)a5 + 29) = v15;
  v16 = 0;
  if ( v15 - y > 0 )
  {
    v17 = (_DWORD *)((char *)a5 + 172);
    do
    {
      *(v17 - 1) = 0x7FFFFFFF;
      *v17 = 0x80000000;
      ++v16;
      v17 += 10;
    }
    while ( v16 < *((_DWORD *)a5 + 29) - *((_DWORD *)a5 + 28) );
  }
  if ( v9->Red > 0xFF00u )
    v9->Red = -256;
  if ( v9->Green > 0xFF00u )
    v9->Green = -256;
  if ( v9->Blue > 0xFF00u )
    v9->Blue = -256;
  if ( v10->Red > 0xFF00u )
    v10->Red = -256;
  if ( v10->Green > 0xFF00u )
    v10->Green = -256;
  if ( v10->Blue > 0xFF00u )
    v10->Blue = -256;
  if ( v6->Red > 0xFF00u )
    v6->Red = -256;
  if ( v6->Green > 0xFF00u )
    v6->Green = -256;
  if ( v6->Blue > 0xFF00u )
    v6->Blue = -256;
  bCalulateColorGradient(v9, v10, v6, a5);
  vCalculateLine(v9, v10, a5);
  vCalculateLine(v10, v6, a5);
  vCalculateLine(v6, v9, a5);
  if ( *((_QWORD *)a5 + 19) || (char *)a6 != (char *)vGradientFill4 && (char *)a6 != (char *)vGradientFill8 )
    ((void (__fastcall *)(struct SURFACE *, struct _TRIANGLEDATA *))a6)(a1, a5);
  return 1LL;
}
