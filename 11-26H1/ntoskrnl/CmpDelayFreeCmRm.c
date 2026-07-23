/*
 * XREFs of CmpDelayFreeCmRm @ 0x140B49FE0
 * Callers:
 *     CmpRunDownCmRM @ 0x1408B55A0 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_140EF9D28;
  if ( *(PVOID **)qword_140EF9D28 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = WheapPfaLock.WaitBlockFill4[0] == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_140EF9D28 = (__int64)a1;
  if ( v3 )
  {
    WheapPfaLock.WaitBlockFill4[0] = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
