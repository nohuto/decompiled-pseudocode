/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1800E0740
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006DD44 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 */

NTSTATUS __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+48h] [rbp+10h] BYREF

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
    RtlpHpVaMgrCtxFree((__int64)&unk_1801C6958, (PVOID *)&v11, (ULONG_PTR *)&v10);
    if ( (RtlpHpHeapFeatures & 0x10) != 0 )
      RtlpHpTlLogVAChange(0x8000, v10, v11, 0);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v7 = 2147353480LL;
  if ( *(_BYTE *)v7 )
    RtlpHeapLogRangeRelease((__int64)a2, v11, v10);
  v9 = *a2;
  return RtlpHpMetadataFree(a1, &v9);
}
