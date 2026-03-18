/*
 * XREFs of ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x14010B334
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1401087D8 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x140109AD8 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x140109C18 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x14010C2E0 (-vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bThicken(pathwide::WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  struct EVECTORFX *v3; // rdx
  int x; // ecx
  int y; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r11d
  int v12; // edx
  int v13; // ebx
  struct _POINTFIX v14; // rax
  FIX v15; // ebx
  FIX v16; // r14d
  int v17; // esi
  int v18; // edx
  int v19; // edi
  int v21; // ecx
  struct _POINTFIX v22; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v23; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v24; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v25; // [rsp+70h] [rbp+40h] BYREF

  v22 = *a2;
  v23 = a2[1];
  pathwide::vHalve((pathwide *)&v22, (struct EVECTORFX *)a2);
  pathwide::vHalve((pathwide *)&v23, v3);
  x = v22.x;
  if ( v22.x < 0 )
    x = -v22.x;
  y = v22.y;
  if ( v22.y < 0 )
    y = -v22.y;
  v6 = x | y;
  v7 = v23.x;
  if ( v23.x < 0 )
    v7 = -v23.x;
  v8 = v7 | v6;
  v9 = v23.y;
  if ( v23.y < 0 )
    v9 = -v23.y;
  if ( ((v9 | v8) & 0xFFFFF000) != 0 )
    return 0LL;
  v10 = v22.x * v23.y;
  v11 = v22.x * v22.x + v22.y * v22.y;
  v12 = v22.y * v23.x;
  v13 = v23.x * v23.x + v23.y * v23.y;
  if ( v11 > v13 )
  {
    if ( 16LL * v11 < (v10 - v12) * (__int64)(v10 - v12) )
      return 0LL;
    v14 = v22;
  }
  else
  {
    if ( 16LL * v13 < (v12 - v10) * (__int64)(v12 - v10) )
      return 0LL;
    v14 = v23;
    v11 = v23.x * v23.x + v23.y * v23.y;
  }
  v25 = v14;
  v15 = 8;
  if ( v11 < 64 )
  {
    v17 = 8;
    v25 = (struct _POINTFIX)8LL;
    v16 = 0;
  }
  else
  {
    v16 = v25.y;
    v17 = v14.x;
  }
  v24 = 0LL;
  v18 = -v16;
  if ( v16 > 0 )
    v18 = v16;
  if ( v18 <= v17 )
  {
    v15 = -8;
    goto LABEL_19;
  }
  v21 = -v17;
  if ( v17 > 0 )
    v21 = v17;
  if ( v21 <= -v16 )
  {
    v19 = -8;
    v24.x = -8;
    v15 = 0;
    goto LABEL_20;
  }
  if ( v18 <= -v17 )
  {
LABEL_19:
    v19 = 0;
    v24.x = 0;
LABEL_20:
    v24.y = v15;
    goto LABEL_21;
  }
  v19 = 8;
  v24 = (struct _POINTFIX)8LL;
  v15 = 0;
LABEL_21:
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v25);
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v24);
  v25.x = -v17;
  v25.y = -v16;
  v24.x = -v19;
  v24.y = -v15;
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v25);
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v24);
  pathwide::WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
