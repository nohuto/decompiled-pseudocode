/*
 * XREFs of RtlpIsProtectedHeap @ 0x18009178C
 * Callers:
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180091E5C (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlSetHeapInformation @ 0x180111030 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114E70 (RtlSetHeapDebuggingInformation.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014FBD0 (RtlpHpStackTraceHeapDisable.c)
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
