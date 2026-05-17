/*
 * XREFs of RtlpHpStackDbAllocRoutine @ 0x18014F5F0
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x180115EC4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 */

__int64 __fastcall RtlpHpStackDbAllocRoutine(unsigned __int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataAlloc(a1, a1, 0, &v2);
}
