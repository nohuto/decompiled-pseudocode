/*
 * XREFs of GetMonitorRectForDpi @ 0x140091044
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     _GetClientRect @ 0x14004BA3C (_GetClientRect.c)
 *     GetMonitorTransform @ 0x14008FE9C (GetMonitorTransform.c)
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 *     _GetWindowPlacement @ 0x1400904B8 (_GetWindowPlacement.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140159A60 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     xxxSendSizeMessage @ 0x1401A8EA0 (xxxSendSizeMessage.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1401DE6E0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020F2CC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140269844 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  INT v5; // edx
  INT v6; // esi
  INT v7; // ebx
  INT v8; // r14d
  INT v9; // edi
  INT v10; // eax
  INT v11; // ebp
  __m128i v12; // xmm6
  INT v13; // r8d
  INT v14; // ebx
  int v15; // esi
  int v16; // eax
  int v17; // edi
  INT a[2]; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 40);
  v5 = *(unsigned __int16 *)(v3 + 62);
  v6 = *(unsigned __int16 *)(v3 + 60);
  *a1 = *(__m128i *)(v3 + 28);
  if ( a3 )
  {
    v7 = v5;
    v8 = a3;
    *(_QWORD *)a = a1->m128i_i64[0];
    v9 = EngMulDiv(a1->m128i_i64[0], a3, v5);
    v10 = EngMulDiv(a[1], v8, v7);
    v11 = v6;
    v12 = *a1;
    v20 = a1->m128i_i64[0];
    v13 = v6;
    v14 = v10;
    v15 = _mm_cvtsi128_si32(*a1);
    v16 = v9 + EngMulDiv(v15 - a1->m128i_i64[0], v8, v13);
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
    a1->m128i_i32[0] = v16;
    a1->m128i_i32[1] = v14 + EngMulDiv(v17 - HIDWORD(v20), v8, v11);
    a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v15, v8, v11) + a1->m128i_i32[0];
    a1->m128i_i32[3] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v17, v8, v11) + a1->m128i_i32[1];
  }
  return a1;
}
