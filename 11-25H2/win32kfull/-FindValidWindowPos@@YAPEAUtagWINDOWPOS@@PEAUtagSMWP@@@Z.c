/*
 * XREFs of ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1401951B4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x140232848 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWINDOWPOS *__fastcall FindValidWindowPos(struct tagSMWP *a1)
{
  __int64 v1; // r10
  int v2; // eax
  __int64 v3; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  v1 = *((int *)a1 + 7);
  v2 = 0;
  v3 = 0LL;
  v5 = 0LL;
  while ( v3 < v1 )
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v5 + v6) )
      return (struct tagWINDOWPOS *)(v6 + 168LL * v2);
    ++v2;
    ++v3;
    v5 += 168LL;
  }
  return 0LL;
}
