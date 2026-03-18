/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0
 * Callers:
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x1401D7B20 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140317190 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2, struct Gre::Base::SESSION_GLOBALS *a3)
{
  __int64 v6; // r8

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v6) = 5;
  *((_QWORD *)this + 4) = HmgShareLock(a3, a2, v6, 0LL);
  return this;
}
