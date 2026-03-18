/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98
 * Callers:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x140111F1C (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiRoundRect @ 0x140112B50 (NtGdiRoundRect.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140113090 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     GreEllipse @ 0x140113870 (GreEllipse.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x140114810 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401149D4 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     GrePolyBezierTo @ 0x140114C50 (GrePolyBezierTo.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GrePolylineTo @ 0x140213620 (GrePolylineTo.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140246C10 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ??0PATH@@QEAA@XZ @ 0x140067D28 (--0PATH@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x14019C4CC (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1401DE9F8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20 (-vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  char *v3; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // ebx
  DC *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // rcx
  const struct _POINTL *v15; // rdx
  _QWORD *v16; // rax
  const struct _POINTL *v17; // r8
  LONG x; // ebx
  DC *v19; // rax
  struct HPATH__ *v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-E0h] BYREF
  bool v22; // [rsp+28h] [rbp-D8h]
  char v23[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct HPATH__ **v24; // [rsp+38h] [rbp-C8h]
  char v25[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+160h] [rbp+60h] BYREF

  v3 = (char *)this + 120;
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
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v7 = *((_DWORD *)*a2 + 62);
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 62) = v7 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v25, *((struct HPATH__ **)*a2 + 25));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v23);
      if ( v24 && v26 && EPATHOBJ::bClone((EPATHOBJ *)v23, (const struct EPATHOBJ *)v25) )
        v20 = *v24;
      else
        v20 = 0LL;
      DC::hpath(*a2, v20);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v25);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 28) )
    {
      PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 28) = 1;
    }
    EPATHOBJ::vLock(this, a2[2], *((struct HPATH__ **)*a2 + 25));
    v14 = *((_QWORD *)this + 1);
    if ( v14 && a3 )
    {
      v15 = (const struct _POINTL *)*((_QWORD *)*a2 + 122);
      if ( (v15[19].x & 0x200) != 0 )
      {
        x = v15[26].x;
        DC::QuickInitXform(*a2, &v27, 516LL);
        v21 = v27;
        v19 = *a2;
        v22 = x != 2;
        EXFORMOBJR::bXformRound(
          (EXFORMOBJR *)&v21,
          (const struct _POINTL *)(*((_QWORD *)v19 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)v19 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
        v17 = (const struct _POINTL *)(*((_QWORD *)*a2 + 122) + 8LL);
      }
      else
      {
        if ( (*(_DWORD *)(v14 + 72) & 1) != 0 )
          v16 = (_QWORD *)(v14 + 64);
        else
          v16 = (_QWORD *)(*(_QWORD *)(v14 + 40)
                         + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 40) + 20LL) - 1) + 3LL));
        v17 = v15 + 1;
        if ( *(_QWORD *)&v15[1] == *v16 )
          return this;
      }
      EPATHOBJ::bMoveTo(this, 0LL, v17);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 18) = (char *)this + 440;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 1) = v3;
    *((_DWORD *)this + 48) = 1;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 52) = 1;
    *((_QWORD *)this + 56) = (char *)this + 464;
    *((_DWORD *)this + 114) = 256;
    if ( a3 )
    {
      v8 = *((_QWORD *)*a2 + 122);
      if ( (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
      {
        v9 = *(_DWORD *)(v8 + 208);
        DC::QuickInitXform(*a2, &v27, 516LL);
        v21 = v27;
        v10 = *a2;
        v22 = v9 != 2;
        EXFORMOBJR::bXformRound(
          (EXFORMOBJR *)&v21,
          (const struct _POINTL *)(*((_QWORD *)v10 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)v10 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
      }
      *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)*a2 + 122) + 8LL);
      v11 = *((_QWORD *)*a2 + 122);
      v12 = *(_DWORD *)(v11 + 152);
      if ( (v12 & 0x400) != 0 )
      {
        *(_DWORD *)(v11 + 152) = v12 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 60) = 0;
      }
    }
  }
  return this;
}
