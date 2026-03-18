/*
 * XREFs of ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A2C
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 * Callees:
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A74 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 */

bool __fastcall pathwide::bComputeWidenedBounds(
        pathwide *this,
        struct EPATHOBJ *a2,
        const struct _RECTFX *a3,
        const struct EXFORMOBJ *a4)
{
  struct _RECTFX *v5; // rdx
  bool result; // al
  struct _LINEATTRS *v7[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct _RECTFX *)(*((_QWORD *)a2 + 1) + 48LL);
  *(_OWORD *)v7 = 0LL;
  result = pathwide::bComputeWidenedBounds((pathwide *)v7, v5, a3, a4, 0LL);
  if ( result )
  {
    *(_OWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_OWORD *)v7;
    return 1;
  }
  return result;
}
