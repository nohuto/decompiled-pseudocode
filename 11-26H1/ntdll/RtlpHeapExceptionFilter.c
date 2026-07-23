/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1801004C8
 * Callers:
 *     RtlpValidateLFHBlock @ 0x180003210 (RtlpValidateLFHBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDebugWalkHeap @ 0x180094934 (RtlDebugWalkHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180108530 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 *     RtlpHpHeapHandleError @ 0x18011F8D0 (RtlpHpHeapHandleError.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140318 (RtlpHeapFatalExceptionFilter.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
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
  unk_1801C5240 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801C5240 + 1) = v2[1];
  *((_OWORD *)&unk_1801C5240 + 2) = v2[2];
  *((_OWORD *)&unk_1801C5240 + 3) = v2[3];
  *((_OWORD *)&unk_1801C5240 + 4) = v2[4];
  *((_OWORD *)&unk_1801C5240 + 5) = v2[5];
  *((_OWORD *)&unk_1801C5240 + 6) = v2[6];
  *((_OWORD *)&unk_1801C5240 + 7) = v2[7];
  *((_OWORD *)&unk_1801C5240 + 8) = v2[8];
  *((_QWORD *)&unk_1801C5240 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801C52E0;
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
