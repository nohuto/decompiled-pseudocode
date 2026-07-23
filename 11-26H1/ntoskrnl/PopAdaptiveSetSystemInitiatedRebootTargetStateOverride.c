/*
 * XREFs of PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407E22B8
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveSetSystemInitiatedRebootTargetStateOverride(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // ebx

  v1 = *(_DWORD *)(a1 + 12);
  v2 = a1;
  if ( v1 > 6 )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( !v1 && *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a1) = 1;
    PopAcquireAdaptiveLock(a1);
    ExpPlatformBinaryLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((unsigned __int64)ExpPlatformBinaryLock.WaitBlock[0].WaitListEntry.Flink & 0xFFFFFFFFFFFFFFF8uLL | *(_DWORD *)(v2 + 12) & 7);
    ExpPlatformBinaryLock.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((unsigned __int64)ExpPlatformBinaryLock.WaitBlock[0].WaitListEntry.Flink & 0xFFFFFFFFFFFFFFF7uLL | (*(_BYTE *)(v2 + 8) != 0 ? 8 : 0));
    PopReleaseAdaptiveLock();
  }
  return v3;
}
