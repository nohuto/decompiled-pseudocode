/*
 * XREFs of RtlpFreeHeapMetadata @ 0x18007EFA0
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 */

LOGICAL __fastcall RtlpFreeHeapMetadata(_DWORD *a1, void *a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( a1[4] != -571548178 )
    return RtlFreeHeap_0(a1, 0, a2);
  v3 = *(_OWORD *)a1;
  return RtlpHpMetadataFree(a2, &v3);
}
