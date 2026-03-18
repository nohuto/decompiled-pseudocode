/*
 * XREFs of BRUSHOBJ_hGetColorTransform @ 0x1401F63A0
 * Callers:
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F6330 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

HANDLE __stdcall BRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo)
{
  void *v1; // rdx
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( !pbo )
    return 0LL;
  if ( (pbo[3].iSolidColor & 2) == 0 )
    return 0LL;
  v1 = *(void **)&pbo[2].flColorType;
  if ( !v1 )
    return 0LL;
  COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v4, v1);
  if ( !v5 )
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
    return 0LL;
  }
  v3 = *(void **)(v5 + 24);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v3;
}
