/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x180004150
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

unsigned __int8 *__fastcall RtlpProbeUserBufferSafe(int a1, __int64 a2)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned __int8 *v5; // rdx

  if ( (a2 & 0xF) != 0 )
  {
    v2 = a2;
    v3 = a1;
    v4 = 9;
LABEL_3:
    RtlpLogHeapFailure(v4, v3, v2, 0, 0LL, 0LL);
    return 0LL;
  }
  v5 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v5);
  if ( v5[15] == 5 )
    v5 -= 16 * v5[14];
  if ( (v5[15] & 0x3F) == 0 )
  {
    v2 = (int)v5;
    v3 = a1;
    v4 = 8;
    goto LABEL_3;
  }
  return v5;
}
