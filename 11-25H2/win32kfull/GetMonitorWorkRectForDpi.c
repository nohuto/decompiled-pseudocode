/*
 * XREFs of GetMonitorWorkRectForDpi @ 0x1400911FC
 * Callers:
 *     InternalGetRealClientRect @ 0x1400431B4 (InternalGetRealClientRect.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     _GetWindowPlacement @ 0x1400904B8 (_GetWindowPlacement.c)
 *     GetMonitorWorkRect @ 0x140090FBC (GetMonitorWorkRect.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x14014AAD8 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     IsSmallerThanScreen @ 0x1401A8004 (IsSmallerThanScreen.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401EE244 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x140200ED0 (xxxDesktopPaintCallback.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1402098C0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall GetMonitorWorkRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __m128i *result; // rax
  __int64 v6; // rax
  INT v7; // r15d
  __m128i v8; // xmm6
  INT v9; // ebx
  INT v10; // eax
  INT v11; // r8d
  INT v12; // ebx
  INT v13; // edi
  INT v14; // eax
  __m128i v15; // xmm6
  INT v16; // ebp
  INT v17; // r14d
  int v18; // esi
  __int32 v19; // eax
  int v20; // edi
  int v21; // ecx
  __int32 a; // [rsp+20h] [rbp-48h]

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 44LL);
  if ( !a3 )
    return a1;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = a3;
  v8 = *(__m128i *)(v6 + 28);
  v9 = *(unsigned __int16 *)(v6 + 62);
  a = v8.m128i_i32[0];
  v10 = EngMulDiv(v8.m128i_i32[0], a3, v9);
  v11 = v9;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v13 = v10;
  v14 = EngMulDiv(v12, v7, v11);
  v15 = *a1;
  v16 = v14;
  v17 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 60LL);
  v18 = _mm_cvtsi128_si32(*a1);
  v19 = v13 + EngMulDiv(v18 - a, v7, v17);
  v20 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
  a1->m128i_i32[0] = v19;
  a1->m128i_i32[1] = v16 + EngMulDiv(v20 - v12, v7, v17);
  a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v15, 8)) - v18, v7, v17) + a1->m128i_i32[0];
  v21 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v15, 12)) - v20, v7, v17) + a1->m128i_i32[1];
  result = a1;
  a1->m128i_i32[3] = v21;
  return result;
}
