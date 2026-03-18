/*
 * XREFs of XLATEOBJ_hGetColorTransform @ 0x14021AFE0
 * Callers:
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14033D3C0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

HANDLE __stdcall XLATEOBJ_hGetColorTransform(XLATEOBJ *pxlo)
{
  ULONG *pulXlate; // rdx
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( !pxlo )
    return 0LL;
  if ( (pxlo[3].iUniq & 2) == 0 )
    return 0LL;
  pulXlate = pxlo[2].pulXlate;
  if ( !pulXlate )
    return 0LL;
  COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v4, pulXlate);
  if ( !v5 )
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
    return 0LL;
  }
  v3 = *(void **)(v5 + 24);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v3;
}
