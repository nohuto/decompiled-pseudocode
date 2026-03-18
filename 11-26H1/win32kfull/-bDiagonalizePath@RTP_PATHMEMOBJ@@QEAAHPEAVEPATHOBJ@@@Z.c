/*
 * XREFs of ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x14019BF40
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 * Callees:
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x14019BFDC (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

__int64 __fastcall RTP_PATHMEMOBJ::bDiagonalizePath(struct _PATHDATA *this, POINTFIX *a2)
{
  POINTFIX *pptfx; // rdx
  int v4; // eax
  bool v5; // zf
  POINTFIX *v6; // rax
  __int64 result; // rax

  this->flags &= ~8u;
  this[9].pptfx = a2;
  pptfx = this->pptfx;
  LODWORD(this[7].pptfx) = 1;
  pptfx[10] = pptfx[4];
  while ( LODWORD(this[7].pptfx) )
  {
    while ( 1 )
    {
      v4 = EPATHOBJ::bEnum((EPATHOBJ *)this, this + 8);
      v5 = this[8].count == 0;
      LODWORD(this[7].pptfx) = v4;
      if ( !v5 )
        break;
      if ( !v4 )
        return 1LL;
    }
    if ( (this[8].flags & 1) == 0 )
      break;
    v6 = this[8].pptfx;
    if ( !v6 )
      break;
    *(POINTFIX *)&this[9].flags = *v6;
    result = RTP_PATHMEMOBJ::bDiagonalizeSubPath((RTP_PATHMEMOBJ *)this);
    if ( !(_DWORD)result )
      return result;
  }
  return 1LL;
}
