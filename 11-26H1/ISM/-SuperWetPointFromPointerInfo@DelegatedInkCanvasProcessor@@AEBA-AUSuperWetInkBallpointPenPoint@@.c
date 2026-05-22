/*
 * XREFs of ?SuperWetPointFromPointerInfo@DelegatedInkCanvasProcessor@@AEBA?AUSuperWetInkBallpointPenPoint@@AEBUtagPOINTER_INFO@@@Z @ 0x1800AB078
 * Callers:
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AAF30 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DelegatedInkCanvasProcessor::SuperWetPointFromPointerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_DWORD *)(a2 + 52) = 0;
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 32));
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 36));
  *(_DWORD *)a2 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 4);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 80);
  *(_DWORD *)(a2 + 40) = *(unsigned __int8 *)(a1 + 16);
  result = a2;
  *(_DWORD *)(a2 + 20) = 1090519040;
  *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v3).m128_u32[0];
  *(_DWORD *)(a2 + 16) = _mm_cvtepi32_ps(v4).m128_u32[0];
  return result;
}
