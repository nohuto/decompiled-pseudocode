/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1400CF8C8
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1400CE390 (-UMPDDrvStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUS.c)
 *     ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D1150 (-UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@P.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkLINEATTRS(UMPDOBJ *this, struct _LINEATTRS **a2)
{
  void *v4; // rcx
  int v5; // esi
  unsigned int v6; // esi
  _QWORD *KernelPtr; // rax
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( !*a2 )
    return 1LL;
  v5 = *((_DWORD *)v4 + 5);
  v9 = (void *)*((_QWORD *)v4 + 3);
  v6 = 4 * v5;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(this, (void **)a2, 0x28u)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(this, &v9, v6) )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(this, *a2);
    KernelPtr[3] = v9;
    return 1LL;
  }
  return 0LL;
}
