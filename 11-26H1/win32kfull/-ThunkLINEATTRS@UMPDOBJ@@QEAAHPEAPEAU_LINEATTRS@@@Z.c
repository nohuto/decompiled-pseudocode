/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x14023CDD4
 * Callers:
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D6B00 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14023CAD0 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkLINEATTRS(UMPDOBJ *this, struct _LINEATTRS **a2)
{
  _QWORD *v4; // rcx
  unsigned int v5; // esi
  void *Src; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    Src = (void *)v4[3];
    v5 = 4 * *((_DWORD *)v4 + 5);
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (void **)a2, 0x28u)
      || !(unsigned int)UMPDOBJ::ThunkMemBlock(this, &Src, v5) )
    {
      return 0LL;
    }
    UMPDOBJ::CopyToUser(this, &(*a2)->pstyle, &Src, 8uLL);
  }
  return 1LL;
}
