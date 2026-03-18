/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140010330
 * Callers:
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140010410 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401DC270 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14032A640 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ??0PATH@@QEAA@XZ @ 0x140010160 (--0PATH@@QEAA@XZ.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this)
{
  char *v1; // rbx
  PATHSTACKOBJ *result; // rax

  v1 = (char *)this + 120;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  PATH::PATH((PATHSTACKOBJ *)((char *)this + 120));
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 18) = (char *)this + 440;
  *((_QWORD *)this + 56) = (char *)this + 464;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 1) = v1;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 52) = 1;
  *((_DWORD *)this + 114) = 256;
  return result;
}
