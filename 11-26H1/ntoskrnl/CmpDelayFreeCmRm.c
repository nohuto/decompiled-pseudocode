/*
 * XREFs of CmpDelayFreeCmRm @ 0x140B48250
 * Callers:
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_140EF99A8;
  if ( *(PVOID **)qword_140EF99A8 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = LOBYTE(WheapPfaLock.Timer.Header.WaitListHead.Blink) == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_140EF99A8 = (__int64)a1;
  if ( v3 )
  {
    LOBYTE(WheapPfaLock.Timer.Header.WaitListHead.Blink) = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
