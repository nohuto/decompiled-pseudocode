/*
 * XREFs of xxxSendSizeMessage @ 0x1401A8EA0
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxHandleWindowPosChanged @ 0x1401F8394 (xxxHandleWindowPosChanged.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

unsigned __int64 __fastcall xxxSendSizeMessage(struct tagWND *a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  __m128i v5; // xmm0
  int v6; // r8d
  int v7; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __m128i v12; // [rsp+50h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v4 + 42) & 0x2FFF) == 0x29D )
  {
    v9 = *(_QWORD *)(GetDispInfo(v4) + 104);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext(v10);
    GetMonitorRectForDpi(&v12, v9, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  }
  else
  {
    v5 = *(__m128i *)(v4 + 104);
    v6 = -*(_DWORD *)(v4 + 108);
    v7 = -*(_DWORD *)(v4 + 104);
    v12.m128i_i32[2] = v7 + v5.m128i_i32[2];
    v12.m128i_i32[3] = v6 + v5.m128i_i32[3];
    v12.m128i_i32[1] = v6 + v5.m128i_i32[1];
    v12.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v5);
  }
  return xxxSendTransformableMessageTimeout(
           (struct tagTHREADINFO **)a1,
           5LL,
           v3,
           (struct tagDRAWITEMSTRUCT *)((unsigned __int16)(v12.m128i_i16[4] - v12.m128i_i16[0]) | (unsigned __int64)((v12.m128i_i32[3] << 16) - (v12.m128i_i32[1] << 16))),
           0,
           0,
           0LL,
           1,
           0);
}
