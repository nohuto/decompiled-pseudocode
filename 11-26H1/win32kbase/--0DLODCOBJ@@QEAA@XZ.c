/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x1400C6D34
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6CF8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x140190BA4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1400C6DA0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  DLODCOBJ *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((__int64)this + 32);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 64);
  result = this;
  *((_WORD *)this + 48) = 256;
  return result;
}
