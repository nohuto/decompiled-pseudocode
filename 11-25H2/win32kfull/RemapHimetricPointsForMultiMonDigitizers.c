/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x140269844
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x140247670 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140090E74 (GetCurrentThreadCompositedDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x140090EE0 (VirtualizeMultiMonDigitizerSize.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __m128i v5; // xmm7
  __int64 UserSessionState; // rax
  INT v7; // r14d
  __int64 v8; // r10
  __m128i v9; // xmm6
  int v10; // r15d
  INT v11; // r12d
  INT v12; // eax
  INT v13; // ebx
  int v14; // edi
  INT v15; // esi
  INT v16; // eax
  __int64 v17; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v19; // rcx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int32 v23; // ebx
  INT v24; // edi
  unsigned __int64 v25; // rsi
  INT v26; // r14d
  INT v27; // r15d
  INT v28; // r12d
  INT v29; // edi
  INT v30; // ebx
  INT v31; // eax
  INT v32; // ecx
  INT v33; // eax
  INT v34; // ecx
  __int64 result; // rax
  INT v36; // [rsp+28h] [rbp-49h]
  INT v37; // [rsp+2Ch] [rbp-45h]
  INT v38; // [rsp+30h] [rbp-41h]
  INT b[4]; // [rsp+38h] [rbp-39h] BYREF
  __m128i v40; // [rsp+48h] [rbp-29h] BYREF
  __m128i v41; // [rsp+58h] [rbp-19h] BYREF
  INT c; // [rsp+D8h] [rbp+67h]
  INT ca; // [rsp+D8h] [rbp+67h]

  v5 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_QWORD *)(UserSessionState + 56968);
  v9 = *(__m128i *)(*(_QWORD *)v8 + 24LL);
  v10 = _mm_cvtsi128_si32(v9);
  v11 = *(_DWORD *)(*(_QWORD *)v8 + 32LL) - v10;
  v12 = EngMulDiv(_mm_cvtsi128_si32(v5) - v10, v7, v11);
  v13 = *(_DWORD *)(a1 + 12);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v36 = v12;
  v37 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 4)) - v14, v13, v15);
  v38 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) - v10, v7, v11);
  v16 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 12)) - v14, v13, v15);
  *(_OWORD *)b = *(_OWORD *)a1;
  c = v16;
  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v17);
  VirtualizeMultiMonDigitizerSize((__int64)b, CurrentThreadCompositedDpi);
  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext(v19);
  GetMonitorRectForDpi(&v40, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v22 = GetCurrentThreadCompositedDpi(v21);
  GetScreenRectForDpi(&v41, v22);
  v23 = v41.m128i_i32[0];
  v24 = v41.m128i_i32[2] - v41.m128i_i32[0];
  v25 = HIDWORD(v41.m128i_i64[0]);
  v26 = v41.m128i_i32[3] - v41.m128i_i32[1];
  v27 = EngMulDiv(v40.m128i_i32[0] - v41.m128i_i32[0], b[2], v41.m128i_i32[2] - v41.m128i_i32[0]);
  v28 = EngMulDiv(v40.m128i_i32[1] - v25, b[3], v26);
  v29 = EngMulDiv(v40.m128i_i32[2] - v23, b[2], v24) - v27;
  ca = c - v37;
  v30 = EngMulDiv(v40.m128i_i32[3] - v25, b[3], v26) - v28;
  v31 = EngMulDiv(*a3 - v36, v29, v38 - v36);
  v32 = a3[1] - v37;
  *a3 = v27 + v31;
  a3[1] = v28 + EngMulDiv(v32, v30, ca);
  v33 = EngMulDiv(*a4 - v36, v29, v38 - v36);
  v34 = a4[1] - v37;
  *a4 = v27 + v33;
  result = (unsigned int)(v28 + EngMulDiv(v34, v30, ca));
  a4[1] = result;
  return result;
}
