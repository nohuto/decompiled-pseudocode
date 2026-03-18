/*
 * XREFs of ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x14020C0A8
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14014BC3C (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AD9C0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401ADABC (-InverseTransformRect@@YA-AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

char __fastcall CTouchProcessor::TransformPointerCoordinates(
        const struct tagINPUT_TRANSFORM *a1,
        struct tagRIMPOINTERINFONODE *a2)
{
  __m128i v3; // xmm1
  __m128 v5; // xmm0
  float *v6; // rax
  float *v7; // rax
  __int64 v8; // rdx
  bool v9; // zf
  char v10; // bp
  char v11; // r14
  __int64 UserSessionState; // rax
  int v14; // [rsp+20h] [rbp-68h]
  int v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]
  struct tagRECT v18; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 13));
  v5 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12));
  v20 = *((_QWORD *)a2 + 6);
  v19 = _mm_unpacklo_ps(v5, _mm_cvtepi32_ps(v3)).m128_u64[0];
  v6 = (float *)InverseTransformPoint((__int64)&v18, (float *)&v19, (float *)a1);
  v19 = __PAIR64__((int)v6[1], (int)*v6);
  *((_QWORD *)a2 + 6) = v19;
  v19 = _mm_unpacklo_ps(
          (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
          (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
  v7 = (float *)InverseTransformPoint((__int64)&v18, (float *)&v19, (float *)a1);
  v9 = *((_DWORD *)a2 + 4) == 2;
  v19 = __PAIR64__((int)v7[1], (int)*v7);
  *((_QWORD *)a2 + 8) = v19;
  if ( v9 )
  {
    *(struct tagRECT *)((char *)a2 + 120) = *InverseTransformRect(&v18, (const struct tagRECT *)((char *)a2 + 120), a1);
    *(struct tagRECT *)((char *)a2 + 136) = *InverseTransformRect(&v18, (const struct tagRECT *)((char *)a2 + 136), a1);
  }
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *(_QWORD *)(UserSessionState + 69144),
      v14,
      v15,
      v16,
      v17);
  }
  return 1;
}
