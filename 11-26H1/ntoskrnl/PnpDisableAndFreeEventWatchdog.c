/*
 * XREFs of PnpDisableAndFreeEventWatchdog @ 0x140A1B08C
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpDisableWatchdog @ 0x140A1B0D4 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableAndFreeEventWatchdog(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 24);
    PnpDisableWatchdog(v2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExFreePoolWithTag(v3, 0);
  }
}
