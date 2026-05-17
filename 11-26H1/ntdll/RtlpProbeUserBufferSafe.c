/*
 * XREFs of RtlpProbeUserBufferSafe @ 0x180019070
 * Callers:
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x1800185E0 (RtlpFreeNTHeapInternal.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
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
