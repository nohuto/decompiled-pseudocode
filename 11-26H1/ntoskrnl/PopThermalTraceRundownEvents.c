/*
 * XREFs of PopThermalTraceRundownEvents @ 0x14043572C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopDiagTraceThermalZoneRundown @ 0x140434FBC (PopDiagTraceThermalZoneRundown.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 PopThermalTraceRundownEvents()
{
  void **i; // rbx
  char v1; // r8

  PopAcquireRwLockShared(&unk_140F10E30);
  for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
  {
    v1 = *((_BYTE *)i + 65);
    if ( (v1 & 2) != 0 )
      PopDiagTraceThermalZoneRundown(
        (__int64)i[6],
        (unsigned __int16 *)i + 520,
        (v1 & 4) != 0,
        *((unsigned __int8 *)i + 69),
        v1 & 1,
        *((_DWORD *)i + 20),
        *((_BYTE *)i + 72),
        *((_BYTE *)i + 73));
  }
  return PopReleaseRwLock(&unk_140F10E30);
}
