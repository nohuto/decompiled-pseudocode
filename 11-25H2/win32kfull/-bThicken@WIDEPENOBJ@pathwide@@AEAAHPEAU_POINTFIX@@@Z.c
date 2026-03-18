/*
 * XREFs of ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400A6F34
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400A5464 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1400A4260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x1400A6360 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x1400A6EE4 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x1400A8CEC (-vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bThicken(pathwide::WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  struct EVECTORFX *v3; // rdx
  int x; // r8d
  int y; // r11d
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // r11d
  struct _POINTFIX v12; // rax
  FIX v13; // ebx
  FIX v14; // r14d
  int v15; // esi
  int v16; // edx
  int v17; // edi
  int v19; // ecx
  struct _POINTFIX v20; // [rsp+20h] [rbp-10h] BYREF
  struct _POINTFIX v21; // [rsp+28h] [rbp-8h] BYREF
  struct _POINTFIX v22; // [rsp+68h] [rbp+38h] BYREF
  struct _POINTFIX v23; // [rsp+70h] [rbp+40h] BYREF

  v20 = *a2;
  v21 = a2[1];
  pathwide::vHalve((pathwide *)&v20, (struct EVECTORFX *)a2);
  pathwide::vHalve((pathwide *)&v21, v3);
  x = v20.x;
  if ( v20.x < 0 )
    x = -v20.x;
  y = v20.y;
  if ( v20.y < 0 )
    y = -v20.y;
  v6 = v21.x;
  if ( v21.x < 0 )
    v6 = -v21.x;
  v7 = v21.y;
  if ( v21.y < 0 )
    v7 = -v21.y;
  if ( ((x | y | v6 | v7) & 0xFFFFF000) != 0 )
    return 0LL;
  v8 = v21.x * v20.y;
  v9 = v20.x * v21.y;
  v10 = v20.x * v20.x + v20.y * v20.y;
  v11 = v21.x * v21.x + v21.y * v21.y;
  if ( v10 > v11 )
  {
    if ( 16LL * v10 < (v9 - v8) * (__int64)(v9 - v8) )
      return 0LL;
    v12 = v20;
  }
  else
  {
    if ( 16LL * v11 < (v8 - v9) * (__int64)(v8 - v9) )
      return 0LL;
    v12 = v21;
    v10 = v21.x * v21.x + v21.y * v21.y;
  }
  v23 = v12;
  v13 = 8;
  if ( v10 < 64 )
  {
    v15 = 8;
    v23 = (struct _POINTFIX)8LL;
    v14 = 0;
  }
  else
  {
    v14 = v23.y;
    v15 = v12.x;
  }
  v22 = 0LL;
  v16 = -v14;
  if ( v14 > 0 )
    v16 = v14;
  if ( v16 <= v15 )
  {
    v13 = -8;
    goto LABEL_19;
  }
  v19 = -v15;
  if ( v15 > 0 )
    v19 = v15;
  if ( v19 <= -v14 )
  {
    v17 = -8;
    v22.x = -8;
    v13 = 0;
    goto LABEL_20;
  }
  if ( v16 <= -v15 )
  {
LABEL_19:
    v17 = 0;
    v22.x = 0;
LABEL_20:
    v22.y = v13;
    goto LABEL_21;
  }
  v17 = 8;
  v22 = (struct _POINTFIX)8LL;
  v13 = 0;
LABEL_21:
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v23);
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v22);
  v23.x = -v15;
  v23.y = -v14;
  v22.x = -v17;
  v22.y = -v13;
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v23);
  pathwide::WIDEPATHOBJ::vAddPoint(this, &v22);
  pathwide::WIDEPATHOBJ::vEndFigure(this);
  return 1LL;
}
