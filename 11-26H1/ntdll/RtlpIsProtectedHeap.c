/*
 * XREFs of RtlpIsProtectedHeap @ 0x18007653C
 * Callers:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800EC350 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapInformation @ 0x180110BC0 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014FA80 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIsProtectedHeap(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v1 = *(unsigned __int16 *)(a1 + 30) >> 1;
  else
    LOBYTE(v1) = *(_BYTE *)(a1 + 563);
  return v1 & 1;
}
