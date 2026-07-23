/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x180070DFC
 * Callers:
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18006FA70 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpQueryVA @ 0x180070D98 (RtlpHpQueryVA.c)
 *     RtlpHpSegSegmentInitialize @ 0x1800E2038 (RtlpHpSegSegmentInitialize.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x1800706A0 (RtlSparseArrayElementAllocated.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a2;
  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v7 = *(_QWORD *)(v6 + 24);
    else
      v7 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v7 << 20;
    v8 = *(unsigned __int8 *)(v6 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v8 + 46) >> 1) & 7;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v8 + 45);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    return 0LL;
  }
  else
  {
    RtlpLogHeapFailure(22, v3, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
}
