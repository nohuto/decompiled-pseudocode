/*
 * XREFs of SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x140643798 (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x140821320 (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x140821A4C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall SmHwAcceleratorPartitionCtxCleanup(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  ULONG v3; // edx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  v3 = 0;
  while ( v2 )
  {
    v2 = v2->Next;
    ++v3;
  }
  ExpReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48), v3);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 48));
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    AccelStopSharingAddressSpaceWithResource(v6, v4, v5);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 32) + 68LL));
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 32) + 32LL));
}
