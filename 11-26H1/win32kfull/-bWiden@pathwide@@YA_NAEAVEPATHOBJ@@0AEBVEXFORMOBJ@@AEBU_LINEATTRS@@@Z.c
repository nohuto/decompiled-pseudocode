/*
 * XREFs of ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278
 * Callers:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     NtGdiWidenPath @ 0x14011ADC0 (NtGdiWidenPath.c)
 * Callees:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140109C68 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x14010A0FC (-bValid@WIDENER@pathwide@@QEBAHXZ.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x14011AF88 (-vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z.c)
 *     ?vMakeItWide@WIDENER@pathwide@@QEAAXAEAVEPATHOBJ@@@Z @ 0x1401D2BC0 (-vMakeItWide@WIDENER@pathwide@@QEAAXAEAVEPATHOBJ@@@Z.c)
 *     ??1WIDENER@pathwide@@QEAA@XZ @ 0x1401D752C (--1WIDENER@pathwide@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall pathwide::bWiden(pathwide *this, struct EPATHOBJ *a2, struct EPATHOBJ *a3, const struct _LINEATTRS *a4)
{
  char v7; // bl
  double v8; // xmm0_8
  struct EPATHOBJ *v9; // rdx
  int v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[1296]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v13[5]; // [rsp+550h] [rbp+450h] BYREF
  __int64 v14; // [rsp+564h] [rbp+464h]
  int v15; // [rsp+56Ch] [rbp+46Ch]

  pathwide::WIDENER::WIDENER((pathwide::WIDENER *)v12, a2, a3, a4);
  if ( (unsigned int)pathwide::WIDENER::bValid((pathwide::WIDENER *)v12) )
  {
    v7 = 1;
    pathwide::WIDENER::vMakeItWide((pathwide::WIDENER *)v12, this);
    *(_QWORD *)&v8 = (unsigned int)a4->elWidth.l;
    v11[0] = 0;
    bFToL(v8, v11, 6u);
    v13[0] = v11[0];
    v13[1] = v11[0];
    v13[2] = v11[0];
    v13[4] = v11[0];
    v13[3] = -v11[0];
    v15 = -v11[0];
    v14 = 0LL;
    if ( !EXFORMOBJ::bXform(a3, (const struct _VECTORL *)v13, (struct _VECTORFX *)v13, 4uLL, 1) )
      pathwide::vReComputeBounds(this, v9);
  }
  else
  {
    v7 = 0;
  }
  pathwide::WIDENER::~WIDENER((pathwide::WIDENER *)v12);
  return v7;
}
