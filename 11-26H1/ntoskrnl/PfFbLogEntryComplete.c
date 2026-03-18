/*
 * XREFs of PfFbLogEntryComplete @ 0x14048B690
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x14048B160 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14048B2E0 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x14048B470 (PfTFiNotifyFileInfoDeleteCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbLogEntryComplete(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  v4 = *(_QWORD *)(a2 + 16);
  if ( a4
    && (++*(_DWORD *)(a2 + 40),
        v5 = *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 24) += a4,
        v5 - *(_QWORD *)(a2 + 24) < *(int *)(v4 + 84)) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 32), (PSLIST_ENTRY)a2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4);
  }
}
