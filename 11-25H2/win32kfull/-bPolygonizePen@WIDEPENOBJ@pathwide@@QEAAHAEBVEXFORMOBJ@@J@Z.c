/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400A5464
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1400A4CE8 (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400A4FB4 (-bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400A6F34 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400A77E8 (-bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x1400A8CEC (-vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bPolygonizePen(
        struct _POINTFIX **this,
        const struct EXFORMOBJ *a2,
        unsigned int a3)
{
  FIX x; // ecx
  FIX y; // edx
  FIX v6; // eax
  FIX v7; // r8d
  struct EVECTORFX *v9; // r8
  struct EVECTORFX *v10; // rdx
  struct EVECTORFX *v11; // rdx
  int v12; // ebx
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  struct _POINTFIX v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h] BYREF
  struct _POINTFIX v18; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+38h] [rbp-38h]
  int v20; // [rsp+3Ch] [rbp-34h]
  int v21; // [rsp+40h] [rbp-30h]
  int v22; // [rsp+44h] [rbp-2Ch]
  __int64 v23; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+50h] [rbp-20h]
  int v25; // [rsp+54h] [rbp-1Ch]
  int v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+5Ch] [rbp-14h]
  int v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+64h] [rbp-Ch]

  LODWORD(v17) = 0;
  v16 = (struct _POINTFIX)a3;
  HIDWORD(v17) = -a3;
  EXFORMOBJ::bXform(a2, (const struct _VECTORL *)&v16, (struct _VECTORFX *)&v16, 2uLL);
  x = v16.x;
  y = v16.y;
  if ( v16 == __PAIR64__(-(int)v17, HIDWORD(v17)) || v16 == __PAIR64__(v17, -HIDWORD(v17)) )
  {
    v6 = v16.x;
    if ( v16.x < 0 )
      v6 = -v16.x;
    v7 = v16.y;
    if ( v16.y < 0 )
      v7 = -v16.y;
    if ( v6 <= v7 )
    {
      if ( v16.y < 0 )
        y = -v16.y;
      x = y;
    }
    else if ( v16.x < 0 )
    {
      x = -v16.x;
    }
    if ( x < 104 )
    {
      if ( (unsigned int)pathwide::WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v16) )
        return 1LL;
      if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)this) )
        return 0LL;
    }
  }
  if ( (unsigned int)pathwide::WIDEPENOBJ::bThicken((pathwide::WIDEPENOBJ *)this, &v16) )
    return 1LL;
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)this) )
    return 0LL;
  if ( !pathwide::bTurnLeftRandom((pathwide *)&v16, (struct EVECTORFX *)&v17, v9) )
  {
    LODWORD(v17) = -(int)v17;
    HIDWORD(v17) = -HIDWORD(v17);
  }
  pathwide::vHalve((pathwide *)&v16, v10);
  pathwide::vHalve((pathwide *)&v17, v11);
  v12 = v16.x - ((unsigned __int64)(1922922357LL * v16.x) >> 32);
  v13 = v16.y - ((unsigned __int64)(1922922357LL * v16.y) >> 32);
  v29 = -v16.y;
  v25 = HIDWORD(v17) - v13;
  v22 = v13 + HIDWORD(v17);
  v23 = v17;
  v14 = v17 - ((unsigned __int64)(1922922357LL * (int)v17) >> 32);
  v18 = v16;
  v15 = HIDWORD(v17) - ((unsigned __int64)(1922922357LL * SHIDWORD(v17)) >> 32);
  v20 = v15 + v16.y;
  v28 = -v16.x;
  v27 = v15 - v16.y;
  v26 = v14 - v16.x;
  v24 = v17 - v12;
  v21 = v12 + v17;
  v19 = v14 + v16.x;
  return pathwide::WIDEPENOBJ::bPenFlatten((pathwide::WIDEPENOBJ *)this, &v18);
}
