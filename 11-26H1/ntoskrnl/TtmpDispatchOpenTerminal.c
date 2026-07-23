/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1407EDC44
 * Callers:
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmiOpenDefaultTerminal @ 0x1407F1A70 (TtmiOpenDefaultTerminal.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // r8
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 = TtmiAcquireCurrentSession((__int64)&v9, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    v6 = TtmiOpenDefaultTerminal(v9, *(unsigned int *)(a1 + 8), CurrentThread, a2);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 152LL, (unsigned int)v5, (unsigned int)v5);
  }
  if ( v9 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  return v6;
}
