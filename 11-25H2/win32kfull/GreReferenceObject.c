/*
 * XREFs of GreReferenceObject @ 0x14005CDA4
 * Callers:
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x14005CBC4 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  unsigned int v1; // ebx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v1 = 0;
  if ( v4 )
    INC_SHARE_REF_CNT(v4);
  else
    v1 = -1073741816;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v3);
  return v1;
}
