/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x1404AD3B0
 * Callers:
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  _OWORD v4[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = 1;
  if ( *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[72]
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
