/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019BFDC
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x14019BF40 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019C24C (-bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019C36C (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019C490 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x14019C4CC (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v1; // esi
  int v3; // r13d
  int v4; // r15d
  int v5; // r12d
  unsigned int NextPoint; // edi
  __int64 v7; // r14
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v13; // esi
  const struct _POINTL *v14; // r8

  v1 = 0;
  *((_DWORD *)this + 40) = 0;
  v3 = 0;
  *((_DWORD *)this + 47) = 0;
  v4 = 0;
  v5 = 0;
  NextPoint = RTP_PATHMEMOBJ::bFetchNextPoint(this);
  if ( NextPoint
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
  {
    v13 = *((_DWORD *)this + 54);
    v14 = (const struct _POINTL *)((char *)this + 204);
    if ( *((_DWORD *)this + 56) == v13 )
    {
      v1 = v13 - *((_DWORD *)this + 52);
      v3 = 1;
    }
    else
    {
      v1 = *((_DWORD *)this + 53) - v14->x;
    }
    v4 = 1;
    NextPoint = EPATHOBJ::bMoveTo(*((EPATHOBJ **)this + 19), 0LL, v14);
    v5 = 2;
  }
  LODWORD(v7) = 0;
  while ( NextPoint )
  {
    if ( (*((_DWORD *)this + (int)v7 + 48) & 1) != 0 )
      return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 2u)
          && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
    if ( v3 )
    {
      v8 = *((_DWORD *)this + 2 * v5 + 51) - *((_DWORD *)this + 2 * v4 + 51);
      if ( v1 <= 0 || v1 != 16 && v8 != -16 )
      {
        NextPoint = RTP_PATHMEMOBJ::bFetchNextPoint(this);
        if ( !NextPoint )
          return NextPoint;
        v3 ^= 1u;
        goto LABEL_25;
      }
      if ( (*((_DWORD *)this + v4 + 48) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      NextPoint = RTP_PATHMEMOBJ::bFetchNextPoint(this);
      if ( !NextPoint )
        return NextPoint;
      if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      v10 = (int)v7;
      v7 = v5;
      v5 = v4;
      v4 = v10;
      v1 = *((_DWORD *)this + 2 * v10 + 52) - *((_DWORD *)this + 2 * v7 + 52);
    }
    else
    {
      v8 = *((_DWORD *)this + 2 * v5 + 52) - *((_DWORD *)this + 2 * v4 + 52);
      if ( v8 >= 0 || v8 != -16 && v1 != 16 )
      {
        NextPoint = RTP_PATHMEMOBJ::bFetchNextPoint(this);
        if ( !NextPoint )
          return NextPoint;
        v3 = 1;
LABEL_25:
        v11 = v7;
        v1 = v8;
        LODWORD(v7) = v4;
        v4 = v5;
        v5 = v11;
        goto LABEL_12;
      }
      if ( (*((_DWORD *)this + v4 + 48) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      NextPoint = RTP_PATHMEMOBJ::bFetchNextPoint(this);
      if ( !NextPoint )
        return NextPoint;
      if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (const struct _POINTL *)((char *)this + 164), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      v9 = (int)v7;
      v7 = v5;
      v5 = v4;
      v4 = v9;
      v1 = *((_DWORD *)this + 2 * v9 + 51) - *((_DWORD *)this + 2 * v7 + 51);
    }
LABEL_12:
    NextPoint = RTP_PATHMEMOBJ::bWritePoint(this);
    if ( !NextPoint )
      return NextPoint;
  }
  return NextPoint;
}
