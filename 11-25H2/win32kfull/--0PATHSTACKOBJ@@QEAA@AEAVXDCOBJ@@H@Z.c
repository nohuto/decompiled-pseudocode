/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98
 * Callers:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400790D8 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1400799B0 (GrePolyBezierTo.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1400A1F34 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400A7B74 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     NtGdiRoundRect @ 0x1400E6A70 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E6D70 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E7180 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiArcInternal @ 0x1400E8410 (NtGdiArcInternal.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140179C90 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401C62B4 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     GrePolylineTo @ 0x1401DFD20 (GrePolylineTo.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140332DB4 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400D5B3C (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E58DC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  _QWORD *v3; // rbx
  char *v4; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  const struct _POINTL *v13; // r10
  _QWORD *v14; // rax
  const struct _POINTL *v15; // r8
  LONG x; // ebx
  DC *v18; // rax
  __int64 v19; // rbx
  int v20; // ebx
  DC *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  struct HPATH__ *v24; // rdx
  __int64 v25; // [rsp+28h] [rbp-E0h] BYREF
  bool v26; // [rsp+30h] [rbp-D8h]
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  struct HPATH__ **v28; // [rsp+40h] [rbp-C8h]
  char v29[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+168h] [rbp+60h] BYREF

  v3 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 9) = 0LL;
  v4 = (char *)this + 120;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  PATH_CORE::PATH_CORE((PATHSTACKOBJ *)((char *)this + 144));
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v11 = *((_DWORD *)*a2 + 62);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 62) = v11 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v29, *((struct HPATH__ **)*a2 + 25));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v27);
      if ( v28 && v30 && EPATHOBJ::bClone((EPATHOBJ *)&v27, (const struct EPATHOBJ *)v29) )
        v24 = *v28;
      else
        v24 = 0LL;
      DC::hpath(*a2, v24);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v27);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v29);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 28) )
    {
      PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap, v10);
      *((_DWORD *)this + 28) = 1;
    }
    LOBYTE(v8) = 7;
    v12 = HmgShareLock(*((_QWORD *)*a2 + 25), v8, v9, v10);
    *((_QWORD *)this + 1) = v12;
    if ( v12 )
    {
      *((_DWORD *)this + 1) = *(_DWORD *)(v12 + 96);
      *(_DWORD *)this = *(_DWORD *)(v12 + 92);
      if ( a3 )
      {
        v13 = (const struct _POINTL *)*((_QWORD *)*a2 + 122);
        if ( (v13[19].x & 0x200) != 0 )
        {
          x = v13[26].x;
          DC::QuickInitXform(*a2, &v31, 516LL);
          v25 = v31;
          v18 = *a2;
          v26 = x != 2;
          EXFORMOBJR::bXformRound(
            (EXFORMOBJR *)&v25,
            (const struct _POINTL *)(*((_QWORD *)v18 + 122) + 216LL),
            (struct _POINTFIX *)(*((_QWORD *)v18 + 122) + 8LL),
            1uLL);
          *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
          v15 = (const struct _POINTL *)(*((_QWORD *)*a2 + 122) + 8LL);
        }
        else
        {
          if ( (*(_DWORD *)(v12 + 72) & 1) != 0 )
            v14 = (_QWORD *)(v12 + 64);
          else
            v14 = (_QWORD *)(*(_QWORD *)(v12 + 40)
                           + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 20LL) - 1) + 3LL));
          v15 = v13 + 1;
          if ( *(_QWORD *)&v13[1] == *v14 )
            return this;
        }
        EPATHOBJ::bMoveTo(this, 0LL, v15);
      }
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *v3 = (char *)this + 440;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = (char *)this + 464;
    *((_QWORD *)this + 1) = v4;
    *((_DWORD *)this + 48) = 1;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 52) = 1;
    *((_DWORD *)this + 114) = 256;
    if ( a3 )
    {
      v19 = *((_QWORD *)*a2 + 122);
      if ( (*(_DWORD *)(v19 + 152) & 0x200) != 0 )
      {
        v20 = *(_DWORD *)(v19 + 208);
        DC::QuickInitXform(*a2, &v31, 516LL);
        v25 = v31;
        v21 = *a2;
        v26 = v20 != 2;
        EXFORMOBJR::bXformRound(
          (EXFORMOBJR *)&v25,
          (const struct _POINTL *)(*((_QWORD *)v21 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)v21 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
      }
      *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)*a2 + 122) + 8LL);
      v22 = *((_QWORD *)*a2 + 122);
      v23 = *(_DWORD *)(v22 + 152);
      if ( (v23 & 0x400) != 0 )
      {
        *(_DWORD *)(v22 + 152) = v23 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 60) = 0;
      }
    }
  }
  return this;
}
