/*
 * XREFs of SmHwAcceleratorPartitionCtxCleanup @ 0x14081B7C8
 * Callers:
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14063FBB8 (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14081B110 (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14081B83C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExpReleaseRundownProtection @ 0x140463F50 (ExpReleaseRundownProtection.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
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
