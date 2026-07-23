/*
 * XREFs of PspLockThreadSecurityShared @ 0x140442F10
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     PsLockThreadNameShared @ 0x140617DC4 (PsLockThreadNameShared.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockThreadSecurityShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v4; // rdi
  LegacyAutoBoost *v5; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v4 = (volatile signed __int64 *)(a1 + 1424);
  v5 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(v4, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, (struct _KTHREAD *)v4);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
