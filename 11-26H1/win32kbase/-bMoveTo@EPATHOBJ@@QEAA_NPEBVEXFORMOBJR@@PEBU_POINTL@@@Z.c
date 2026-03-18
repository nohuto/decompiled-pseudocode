/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94
 * Callers:
 *     PATHOBJ_bMoveTo @ 0x1400C0AE0 (PATHOBJ_bMoveTo.c)
 *     EPATHOBJ_bMoveTo @ 0x1400C0D80 (EPATHOBJ_bMoveTo.c)
 *     bPolyPolygon @ 0x1400C0DA0 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

char __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, const struct EXFORMOBJR *a2, const struct _POINTL *a3)
{
  __int64 v3; // rdi
  char v4; // bl
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v8; // [rsp+38h] [rbp-8h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  v7[0] = a3;
  v7[1] = 1LL;
  v7[2] = 0LL;
  v8 = 0;
  if ( v3 )
  {
    v9 = 0LL;
    if ( a2 )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(const struct EXFORMOBJR *, _QWORD *, __int64 *, __int64))EXFORMOBJR::bXformRound)(
                               a2,
                               v7,
                               &v9,
                               1LL) )
        return v4;
    }
    else
    {
      umptr_r<_POINTL>::read<_POINTFIX>(v7, &v9, 1LL);
    }
    if ( !v8 )
    {
      v5 = v9;
      v4 = 1;
      *(_DWORD *)(v3 + 72) |= 5u;
      *(_QWORD *)(v3 + 64) = v5;
    }
  }
  return v4;
}
