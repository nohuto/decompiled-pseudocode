/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1407E80E4
 * Callers:
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiAcquireCurrentSession @ 0x1407E6640 (TtmiAcquireCurrentSession.c)
 *     TtmiOpenDefaultTerminal @ 0x1407EBF0C (TtmiOpenDefaultTerminal.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
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
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  return v6;
}
