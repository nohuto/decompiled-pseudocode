/*
 * XREFs of xxxClearForegroundThread @ 0x14027A390
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall xxxClearForegroundThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18904)
    || (_InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18904) + 528LL),
          0,
          0) & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4249);
  }
  v5[0] = 0;
  v6 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v5, v4);
  xxxSetForegroundThreadWithWindowHint(0LL, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
}
