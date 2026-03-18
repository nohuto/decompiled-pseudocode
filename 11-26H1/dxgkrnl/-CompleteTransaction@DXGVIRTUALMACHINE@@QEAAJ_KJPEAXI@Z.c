/*
 * XREFs of ?CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z @ 0x140235A58
 * Callers:
 *     ?VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223930 (-VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::CompleteTransaction(
        DXGVIRTUALMACHINE *this,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  DXGPUSHLOCK *v9; // rsi
  char *v10; // rax
  char *i; // rbx
  unsigned int v12; // eax

  v9 = (DXGVIRTUALMACHINE *)((char *)this + 344);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = a2;
  WdLogGlobalForLineNumber = 51;
  DXGPUSHLOCK::AcquireExclusive(v9);
  v10 = (char *)this + 376;
  for ( i = (char *)*((_QWORD *)this + 47); ; i = *(char **)i )
  {
    if ( i == v10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 88;
      a3 = -1073741823;
      goto LABEL_11;
    }
    if ( *((_QWORD *)i + 2) == a2 )
      break;
  }
  v12 = *((_DWORD *)i + 16);
  if ( v12 > a5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 80;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Transaction result from guest exceeds the buffer size provided by the transaction object. Cannot copy result.",
      80LL,
      0LL,
      0LL,
      0LL,
      0LL);
    a3 = -2147483643;
  }
  else if ( v12 )
  {
    memmove(*((void **)i + 7), a4, v12);
  }
  *((_DWORD *)i + 12) = a3;
  KeSetEvent((PRKEVENT)i + 1, 0, 0);
LABEL_11:
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return a3;
}
