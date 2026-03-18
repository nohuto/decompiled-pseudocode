/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400309A0
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1402728F8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x14003121C (ExpandedMonitorSpace.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(struct tagWND *a1, const struct tagPOINT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // bx
  __int64 *DispInfo; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i v13; // xmm6
  __m128i *ScreenRectForDpi; // rax
  __m128i v15; // xmm7
  INT v16; // ebx
  INT v17; // edi
  __int64 v19; // rsi
  __m128i v20; // xmm2
  int v21; // r15d
  int v22; // ebp
  int v23; // edi
  int v24; // r14d
  int v25; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  unsigned __int64 v29; // xmm0_8
  __int64 v30; // rax
  __m128i v31; // [rsp+20h] [rbp-78h] BYREF
  INT a[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+10h]

  if ( *((_QWORD *)PtiCurrent() + 61)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL) + 64LL) & 1) != 0 )
  {
    v6 = (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  }
  else
  {
    v6 = 0;
  }
  DispInfo = (__int64 *)GetDispInfo(v5, v4);
  v9 = *DispInfo;
  if ( !v6 )
  {
    v10 = *(__m128i *)(v9 + 24);
LABEL_6:
    v31 = v10;
    goto LABEL_7;
  }
  if ( *(_DWORD *)v9 == 1 )
  {
    v30 = GetDispInfo(v9, v8);
    v10 = *GetMonitorRectForDpi((__m128i *)a, *(_QWORD *)(v30 + 96), v6);
    goto LABEL_6;
  }
  v19 = DispInfo[13];
  v20 = 0LL;
  v31 = 0LL;
  if ( v19 )
  {
    v21 = _mm_cvtsi128_si32((__m128i)0LL);
    v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    do
    {
      v25 = v23;
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi((__m128i *)a, v19, v6);
        v27 = *MonitorRectForDpi;
        v28 = MonitorRectForDpi->m128i_i64[0];
        v29 = _mm_srli_si128(v27, 8).m128i_u64[0];
        if ( v21 >= (int)v28 )
          v21 = v28;
        v31.m128i_i32[0] = v21;
        v23 = HIDWORD(v28);
        if ( v25 < SHIDWORD(v28) )
          v23 = v25;
        v31.m128i_i32[1] = v23;
        if ( v24 <= (int)v29 )
          v24 = v29;
        v31.m128i_i32[2] = v24;
        if ( v22 <= SHIDWORD(v29) )
        {
          v22 = HIDWORD(v29);
          v31.m128i_i32[3] = HIDWORD(v29);
          v31.m128i_i32[1] = v23;
        }
        v20 = _mm_load_si128(&v31);
      }
      v19 = *(_QWORD *)(v19 + 56);
    }
    while ( v19 );
  }
  v31 = v20;
LABEL_7:
  *(_OWORD *)a = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(a);
  if ( ***(_DWORD ***)(W32GetUserSessionState(v12, v11) + 56968) > 1u && v6 )
  {
    v13 = *(__m128i *)ExpandedMonitorSpace(v33, v6);
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v33, v6);
    v15 = *ScreenRectForDpi;
    v16 = EngMulDiv(
            a[2],
            _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRectForDpi, 8)) - _mm_cvtsi128_si32(*ScreenRectForDpi),
            _mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) - _mm_cvtsi128_si32(v13));
    v17 = EngMulDiv(
            a[3],
            _mm_cvtsi128_si32(_mm_srli_si128(v15, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v15, 4)),
            _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)));
  }
  else
  {
    v17 = a[3];
    v16 = a[2];
  }
  LODWORD(v34) = EngMulDiv(a2->x - v31.m128i_i32[0], v16, v31.m128i_i32[2] - v31.m128i_i32[0]);
  HIDWORD(v34) = EngMulDiv(a2->y - v31.m128i_i32[1], v17, v31.m128i_i32[3] - v31.m128i_i32[1]);
  return (struct tagPOINT)v34;
}
