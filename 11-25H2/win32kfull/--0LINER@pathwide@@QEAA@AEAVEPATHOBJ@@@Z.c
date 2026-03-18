/*
 * XREFs of ??0LINER@pathwide@@QEAA@AEAVEPATHOBJ@@@Z @ 0x1400A7118
 * Callers:
 *     ??0STYLER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A538C (--0STYLER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bNextFigure@READER@pathwide@@IEAAHXZ @ 0x1400A7510 (-bNextFigure@READER@pathwide@@IEAAHXZ.c)
 *     ?bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z @ 0x1400A757C (-bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z.c)
 */

struct _POINTFIX *__fastcall pathwide::LINER::LINER(struct _POINTFIX *this, struct EPATHOBJ *a2)
{
  int v2; // esi

  *this = (struct _POINTFIX)a2;
  v2 = 1;
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  this[5].x |= 1u;
  if ( (unsigned int)pathwide::READER::bNextFigure((pathwide::READER *)this) )
  {
    pathwide::READER::bNextPoint((pathwide::READER *)this, this + 28);
    this[29] = this[28];
  }
  else
  {
    v2 = 4;
  }
  this[63].x = v2;
  return this;
}
