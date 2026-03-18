/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x1404B3DE0
 * Callers:
 *     PspCreateThread @ 0x140A0175C (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  _OWORD v4[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = 1;
  if ( *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[68]
    && (*(_DWORD *)(a1 + 1532) & 1) == 0
    && (*(_DWORD *)(a1 + 1532) & 0x1000) == 0
    && (*(_BYTE *)(a1 + 368) & 1) == 0 )
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v4);
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 24LL) != 0LL;
    KiUnstackDetachProcess((__int64)v4, 0);
  }
  return v2;
}
