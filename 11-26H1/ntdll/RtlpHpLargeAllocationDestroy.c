/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x18008ED18
 * Callers:
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHeapLogRangeRelease @ 0x18008A90C (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = ((v5 >> 12) + ((v5 >> 1) & 1)) << 12;
  v11 = (v3 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v10 = v6
      + (1LL << ((unsigned __int8)v5 >> 2))
      - (((1LL << ((unsigned __int8)v5 >> 2)) - 1) & (v6 + (1LL << ((unsigned __int8)v5 >> 2)) - 1))
      - v11
      + v3
      - 1;
  if ( v10 )
  {
    RtlpHpVaMgrCtxFree((__int64)&unk_1801C7908, &v11, &v10);
    if ( (RtlpHpHeapFeatures & 0x10) != 0 )
      RtlpHpTlLogVAChange(0x8000, v10, v11, 0LL);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v7 = 2147353480LL;
  if ( *(_BYTE *)v7 )
    RtlpHeapLogRangeRelease((__int64)a2, v11, v10);
  v9 = *a2;
  return RtlpHpMetadataFree(a1, &v9);
}
