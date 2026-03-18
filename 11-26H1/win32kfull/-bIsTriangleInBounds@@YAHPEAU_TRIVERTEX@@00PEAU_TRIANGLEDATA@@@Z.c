/*
 * XREFs of ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x140060120
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140061724 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIsTriangleInBounds(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // edi
  LONG v5; // eax
  LONG v6; // ebx
  LONG y; // r10d
  LONG v8; // edx
  LONG v9; // r11d
  LONG v10; // ecx
  LONG v11; // r8d
  bool v12; // cc
  LONG v13; // ebp
  LONG v14; // ecx
  LONG v15; // esi
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax

  x = a1->x;
  v5 = a1->x;
  v6 = a2->x;
  y = a2->y;
  v8 = a1->y;
  if ( a1->x <= v6 )
    v5 = v6;
  v9 = a3->x;
  v10 = a1->x;
  v11 = a3->y;
  if ( x <= v6 )
    v10 = v6;
  v12 = v10 <= v9;
  v13 = v9;
  v14 = v8;
  v15 = v11;
  if ( !v12 )
    v13 = v5;
  v16 = v8;
  if ( v8 >= y )
  {
    v16 = y;
    v14 = y;
  }
  if ( v14 < v11 )
    v15 = v16;
  v17 = v8;
  if ( v8 <= y )
  {
    v17 = y;
    v8 = y;
  }
  v12 = v17 <= v11;
  v18 = x;
  if ( !v12 )
    v11 = v8;
  if ( x >= v6 )
  {
    x = v6;
    v18 = v6;
  }
  if ( v18 < v9 )
    v9 = x;
  return v9 < *((_DWORD *)a4 + 2) && v13 > *(_DWORD *)a4 && v15 < *((_DWORD *)a4 + 3) && v11 > *((_DWORD *)a4 + 1);
}
