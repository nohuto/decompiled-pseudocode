/*
 * XREFs of ??0DCOBJA@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@@Z @ 0x1401AAAF8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, struct Gre::Base::SESSION_GLOBALS *a2, HDC a3)
{
  __int64 v5; // r8

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((_OWORD *)this + 2);
  LOBYTE(v5) = 1;
  *(_QWORD *)this = HmgShareLock(*((_QWORD *)this + 2), a3, v5, 1LL);
  return this;
}
