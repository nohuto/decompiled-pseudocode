/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x14008E5C4
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14008E530 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014ED30 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0 (--0XDCOBJ@@QEAA@XZ.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  DLODCOBJ *result; // rax

  XDCOBJ::XDCOBJ(this);
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 40,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 40) >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_WORD *)this + 36) = 256;
  return result;
}
