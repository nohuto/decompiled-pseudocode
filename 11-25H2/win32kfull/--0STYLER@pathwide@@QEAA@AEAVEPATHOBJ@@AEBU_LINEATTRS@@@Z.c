/*
 * XREFs of ??0STYLER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A538C
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ??0LINER@pathwide@@QEAA@AEAVEPATHOBJ@@@Z @ 0x1400A7118 (--0LINER@pathwide@@QEAA@AEAVEPATHOBJ@@@Z.c)
 */

pathwide::STYLER *__fastcall pathwide::STYLER::STYLER(
        pathwide::STYLER *this,
        struct EPATHOBJ *a2,
        const struct _LINEATTRS *a3)
{
  BOOL v5; // ecx
  unsigned int v6; // r8d
  PFLOAT_LONG pstyle; // rcx
  __int64 cstyle; // rax

  pathwide::LINER::LINER(this, a2);
  *((_QWORD *)this + 101) = (char *)this + 768;
  v5 = a3->pstyle && a3->cstyle;
  v6 = *((_DWORD *)this + 10) | 2;
  if ( !v5 )
    v6 = *((_DWORD *)this + 10) & 0xFFFFFFFD;
  *((_DWORD *)this + 10) = v6;
  if ( (v6 & 2) != 0 )
  {
    pstyle = a3->pstyle;
    *((_QWORD *)this + 90) = pstyle;
    *((_QWORD *)this + 91) = pstyle;
    cstyle = a3->cstyle;
    *((_DWORD *)this + 10) = v6 & 0xFFFFFFFB;
    *((_QWORD *)this + 92) = &pstyle[cstyle];
  }
  return this;
}
