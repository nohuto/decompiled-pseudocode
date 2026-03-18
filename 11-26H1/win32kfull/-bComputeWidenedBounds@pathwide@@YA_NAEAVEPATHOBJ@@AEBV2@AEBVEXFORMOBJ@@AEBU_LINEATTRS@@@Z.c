/*
 * XREFs of ?bComputeWidenedBounds@pathwide@@YA_NAEAVEPATHOBJ@@AEBV2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140117090
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 * Callees:
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 */

char __fastcall pathwide::bComputeWidenedBounds(
        pathwide *this,
        struct EPATHOBJ *a2,
        const struct _RECTFX *a3,
        const struct EXFORMOBJ *a4)
{
  struct _RECTFX *v5; // rdx
  struct _LINEATTRS *v7[2]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct _RECTFX *)(*((_QWORD *)a2 + 1) + 48LL);
  *(_OWORD *)v7 = 0LL;
  if ( !pathwide::bComputeWidenedBounds((pathwide *)v7, v5, a3, a4, 0LL) )
    return 0;
  *(_OWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_OWORD *)v7;
  return 1;
}
