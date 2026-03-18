/*
 * XREFs of GetScreenRectForDpi @ 0x140083BF4
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, int a2, int a3)
{
  unsigned __int16 v3; // bp
  int v5; // edx
  int v6; // ecx
  __int64 *v7; // rdi
  int v8; // r8d
  __int64 v9; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm2
  int v13; // r12d
  int v14; // r14d
  int v15; // esi
  int v16; // r15d
  int v17; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v19; // xmm1
  __int64 v20; // rax
  unsigned __int64 v21; // xmm1_8
  __int64 UserSessionState; // rax
  __m128i v23; // [rsp+20h] [rbp-48h] BYREF
  char v24[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2;
  v7 = *(__int64 **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 56968);
  v9 = *v7;
  if ( v3 )
  {
    if ( *(_DWORD *)v9 == 1 )
    {
      UserSessionState = W32GetUserSessionState(v6, v5, v8);
      *a1 = *(__m128i *)GetMonitorRectForDpi(&v23, *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL), v3);
    }
    else
    {
      v11 = v7[13];
      v12 = 0LL;
      v23 = 0LL;
      if ( v11 )
      {
        v13 = _mm_cvtsi128_si32((__m128i)0LL);
        v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v15 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v16 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        do
        {
          v17 = v15;
          if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v24, v11, v3);
            v19 = *MonitorRectForDpi;
            v20 = MonitorRectForDpi->m128i_i64[0];
            v21 = _mm_srli_si128(v19, 8).m128i_u64[0];
            if ( v13 >= (int)v20 )
              v13 = v20;
            v23.m128i_i32[0] = v13;
            v15 = HIDWORD(v20);
            if ( v17 < SHIDWORD(v20) )
              v15 = v17;
            v23.m128i_i32[1] = v15;
            if ( v16 <= (int)v21 )
              v16 = v21;
            v23.m128i_i32[2] = v16;
            if ( v14 <= SHIDWORD(v21) )
            {
              v14 = HIDWORD(v21);
              v23.m128i_i32[3] = HIDWORD(v21);
              v23.m128i_i32[1] = v15;
            }
            v12 = _mm_loadu_si128(&v23);
          }
          v11 = *(_QWORD *)(v11 + 56);
        }
        while ( v11 );
      }
      *a1 = v12;
    }
  }
  else
  {
    *a1 = *(__m128i *)(v9 + 24);
  }
  return a1;
}
