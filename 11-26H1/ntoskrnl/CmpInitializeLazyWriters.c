/*
 * XREFs of CmpInitializeLazyWriters @ 0x140862FD4
 * Callers:
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpCreateRegistryThread @ 0x14085D308 (CmpCreateRegistryThread.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS CmpInitializeLazyWriters()
{
  __int64 v0; // rsi
  __int64 v1; // rdx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  dword_140E02160 = CmpLazyFlushIntervalInSeconds;
  v0 = 0LL;
  dword_140E02220 = CmpLazyReconcileIntervalInSeconds;
  dword_140E022E0 = CmpLazyLocalizeIntervalInSeconds;
  Handle = 0LL;
  while ( (unsigned int)v0 < 3 )
  {
    KeInitializeTimer(&CmpLazyWriterData + 3 * v0);
    KeInitializeEvent((PRKEVENT)(&CmpLazyWriterData + 3 * v0 + 2), SynchronizationEvent, 0);
    KeInitializeDpc(
      (PRKDPC)&CmpLazyWriterData + 3 * v0 + 1,
      (PKDEFERRED_ROUTINE)CmpLazyFlushDpcRoutine,
      &CmpLazyWriterData + 3 * v0);
    *((_QWORD *)&CmpLazyWriterData + 24 * v0 + 19) = 0LL;
    if ( (int)CmpCreateRegistryThread(
                (__int64)&Handle,
                v1,
                (__int64)CmpLazyWriteWorker,
                (__int64)(&CmpLazyWriterData + 3 * v0)) < 0 )
      KeBugCheckEx(0x51u, 0x18uLL, (unsigned int)v0, 0LL, 0LL);
    NtClose(Handle);
    v0 = (unsigned int)(v0 + 1);
  }
  CmpUserPresent = 1;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)CmpUserPresenceCallback,
           0LL,
           0LL);
}
