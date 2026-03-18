/*
 * XREFs of _GetTextMetricsW @ 0x1400C00C4
 * Callers:
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1400C0230 (GreGetTextMetricsW.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GetTextMetricsW(HDC a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  int v6; // ecx
  __int128 v7; // xmm0
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]

  memset_0(v8, 0, 0x44uLL);
  result = GreGetTextMetricsW(a1);
  v5 = v8[1];
  v6 = v10;
  *(_OWORD *)a2 = v8[0];
  v7 = v8[2];
  *(_OWORD *)(a2 + 16) = v5;
  *(_QWORD *)&v5 = v9;
  *(_OWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 56) = v6;
  return result;
}
