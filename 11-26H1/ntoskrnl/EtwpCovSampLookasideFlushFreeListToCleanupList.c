/*
 * XREFs of EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406C8AA0
 * Callers:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404FE700 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B5CF58 (EtwpCovSampCaptureFreeLookasides.c)
 * Callees:
 *     EtwpCovSampPushListSList @ 0x140492DC4 (EtwpCovSampPushListSList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall EtwpCovSampLookasideFlushFreeListToCleanupList(union _SLIST_HEADER *a1)
{
  unsigned __int64 Alignment; // rdi
  ULONG v2; // ebx
  struct _SLIST_ENTRY *v3; // rax
  ULONG v5; // [rsp+30h] [rbp+8h] BYREF

  Alignment = a1[2].Alignment;
  v2 = 0;
  v5 = 0;
  v3 = RtlpInterlockedFlushSList(a1);
  if ( v3 )
  {
    EtwpCovSampPushListSList((union _SLIST_HEADER *)Alignment, v3, &v5);
    v2 = v5;
    _InterlockedAdd((volatile signed __int32 *)(Alignment + 76), v5);
  }
  return v2;
}
