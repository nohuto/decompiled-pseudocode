/*
 * XREFs of ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4
 * Callers:
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 * Callees:
 *     pathwide::EPATHOBJ_vBecome @ 0x1400A437C (pathwide--EPATHOBJ_vBecome.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ??1WIDENER@pathwide@@QEAA@XZ @ 0x1400A4F64 (--1WIDENER@pathwide@@QEAA@XZ.c)
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall pathwide::bWiden(pathwide *this, struct EPATHOBJ *a2, struct EPATHOBJ *a3, const struct _LINEATTRS *a4)
{
  char v5; // bl
  _BYTE v7[816]; // [rsp+20h] [rbp-538h] BYREF
  _BYTE v8[160]; // [rsp+350h] [rbp-208h] BYREF
  _BYTE v9[152]; // [rsp+3F0h] [rbp-168h] BYREF
  _BYTE v10[168]; // [rsp+488h] [rbp-D0h] BYREF

  pathwide::WIDENER::WIDENER((pathwide::WIDENER *)v7, a2, a3, a4);
  v5 = 0;
  if ( (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v10)
    && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v9)
    && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v8) )
  {
    v5 = 1;
    pathwide::EPATHOBJ_vBecome((__int64)this, (__int64)v10);
    *((_DWORD *)this + 1) = EPATHOBJ::cTotalCurves(this);
  }
  pathwide::WIDENER::~WIDENER((pathwide::WIDENER *)v7);
  return v5;
}
