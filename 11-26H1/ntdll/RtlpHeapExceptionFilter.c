/*
 * XREFs of RtlpHeapExceptionFilter @ 0x180100D78
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180014CCC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlpValidateLFHBlock @ 0x180018130 (RtlpValidateLFHBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugWalkHeap @ 0x180074344 (RtlDebugWalkHeap.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     RtlCompactHeap @ 0x180104800 (RtlCompactHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108B90 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 *     RtlpHpHeapHandleError @ 0x18011FB20 (RtlpHpHeapHandleError.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146F08 (RtlDebugZeroHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_1801C6240 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801C6240 + 1) = v2[1];
  *((_OWORD *)&unk_1801C6240 + 2) = v2[2];
  *((_OWORD *)&unk_1801C6240 + 3) = v2[3];
  *((_OWORD *)&unk_1801C6240 + 4) = v2[4];
  *((_OWORD *)&unk_1801C6240 + 5) = v2[5];
  *((_OWORD *)&unk_1801C6240 + 6) = v2[6];
  *((_OWORD *)&unk_1801C6240 + 7) = v2[7];
  *((_OWORD *)&unk_1801C6240 + 8) = v2[8];
  *((_QWORD *)&unk_1801C6240 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801C62E0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
