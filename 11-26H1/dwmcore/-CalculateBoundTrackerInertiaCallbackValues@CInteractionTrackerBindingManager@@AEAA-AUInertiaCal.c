/*
 * XREFs of ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x18019E8AC
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x18019E628 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5)
{
  __m128 *v8; // rax
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  __m128 v11; // xmm9
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rax
  float v14; // xmm12_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm13_4
  float v18; // xmm11_4
  float v19; // xmm14_4
  int v20; // xmm6_4
  int v21; // xmm6_4
  double v22; // xmm0_8
  __int64 result; // rax
  float v24; // xmm12_4
  float v25; // xmm13_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  _OWORD v30[3]; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-108h]
  char v32[56]; // [rsp+58h] [rbp-100h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a3 + 272))(a3)
    || (*(unsigned __int8 (__fastcall **)(__int64 *))(*a3 + 488))(a3) )
  {
    v8 = (__m128 *)(*(__int64 (__fastcall **)(__int64 *, char *))(*a3 + 480))(a3, v32);
  }
  else
  {
    v8 = (__m128 *)v30;
    v28 = *((_OWORD *)a3 + 9);
    v30[0] = *((_OWORD *)a3 + 8);
    v29 = *((_OWORD *)a3 + 10);
    v30[1] = v28;
    *(_QWORD *)&v28 = a3[22];
    v30[2] = v29;
    v31 = v28;
  }
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3].m128_u64[0];
  v13 = *a3;
  v31 = v12;
  v14 = v10.m128_f32[0] - (*(float (__fastcall **)(__int64 *, _QWORD))(v13 + 232))(a3, 0LL);
  v15 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] - (*(float (__fastcall **)(__int64 *, __int64))(*a3 + 232))(a3, 1LL);
  v16 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0] / (*(float (__fastcall **)(__int64 *, __int64))(*a3 + 232))(a3, 2LL);
  v17 = v11.m128_f32[0] - (*(float (__fastcall **)(__int64 *, _QWORD))(*a3 + 232))(a3, 0LL);
  v18 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] - (*(float (__fastcall **)(__int64 *, __int64))(*a3 + 232))(a3, 1LL);
  *(float *)&v12 = (*(float (__fastcall **)(__int64 *, __int64))(*a3 + 232))(a3, 2LL);
  v19 = *(float *)&v31 / *(float *)&v12;
  v20 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 600LL))(a4);
  LODWORD(v12) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 600LL))(a4) + 4);
  *(_DWORD *)(a2 + 16) = v20;
  *(_DWORD *)(a2 + 20) = v12;
  *(_DWORD *)(a2 + 24) = 0;
  *(float *)(a2 + 28) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a4 + 608LL))(a4);
  v21 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 600LL))(a4);
  LODWORD(v12) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 600LL))(a4) + 4);
  *(_DWORD *)(a2 + 32) = v21;
  *(_DWORD *)(a2 + 36) = v12;
  *(_DWORD *)(a2 + 40) = 0;
  v22 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a4 + 608LL))(a4);
  *(_DWORD *)(a2 + 48) = LODWORD(v22);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (a5 & 1) != 0 )
  {
    v24 = v14 + *(float *)(a2 + 16);
    v25 = v17 + *(float *)(a2 + 32);
    *(_DWORD *)a2 = v9.m128_i32[0];
    *(float *)(a2 + 16) = v24;
    *(float *)(a2 + 32) = v25;
  }
  if ( (a5 & 2) != 0 )
  {
    v26 = v15 + *(float *)(a2 + 20);
    v27 = v18 + *(float *)(a2 + 36);
    *(_DWORD *)(a2 + 4) = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
    *(float *)(a2 + 20) = v26;
    *(float *)(a2 + 36) = v27;
  }
  if ( (a5 & 4) != 0 )
  {
    *(float *)(a2 + 28) = v16 * *(float *)(a2 + 28);
    *(float *)(a2 + 48) = *(float *)&v22 * v19;
    *(_DWORD *)(a2 + 12) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  }
  result = a2;
  *(_BYTE *)(a2 + 54) = 1;
  *(_BYTE *)(a2 + 44) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 12));
  *(_WORD *)(a2 + 52) = WORD2(v31);
  return result;
}
