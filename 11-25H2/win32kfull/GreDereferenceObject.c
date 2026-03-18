/*
 * XREFs of GreDereferenceObject @ 0x14007BF50
 * Callers:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14005CD64 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14005DC60 (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14007A83C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6, a1);
  v4 = 0;
  if ( v7 )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      DEC_SHARE_REF_CNT(v7);
    }
    else if ( HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, 5) && (unsigned int)SURFACE::bDeleteSurface(v7, 0LL, 1LL) )
    {
      v7 = 0LL;
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
  return v4;
}
