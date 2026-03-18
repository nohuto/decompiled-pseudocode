/*
 * XREFs of GetScreenRectForDpi @ 0x140090A20
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x14004B09C (GetMaxTrackSizeForWindow.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x1400908E8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x140090EE0 (VirtualizeMultiMonDigitizerSize.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     GetScreenRectForWindow @ 0x1401DC898 (GetScreenRectForWindow.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1401DE6E0 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     _GetMouseMovePointsEx @ 0x1401E3F10 (_GetMouseMovePointsEx.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140269844 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, unsigned __int16 a2)
{
  __int64 *DispInfo; // rax
  __int64 v5; // rcx
  __m128i v6; // xmm0
  __int64 v8; // rdi
  __m128i v9; // xmm2
  int v10; // r12d
  int v11; // ebp
  int v12; // r15d
  int v13; // r14d
  __m128i *MonitorRectForDpi; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // [rsp+20h] [rbp-48h] BYREF
  char v21[16]; // [rsp+30h] [rbp-38h] BYREF

  DispInfo = (__int64 *)GetDispInfo();
  v5 = *DispInfo;
  if ( !a2 )
  {
    v6 = *(__m128i *)(v5 + 24);
LABEL_3:
    *a1 = v6;
    return a1;
  }
  if ( *(_DWORD *)v5 == 1 )
  {
    v19 = GetDispInfo();
    v6 = *(__m128i *)GetMonitorRectForDpi(&v20, *(_QWORD *)(v19 + 104), a2);
    goto LABEL_3;
  }
  v8 = DispInfo[14];
  v9 = 0LL;
  v20 = 0LL;
  if ( v8 )
  {
    v10 = _mm_cvtsi128_si32((__m128i)0LL);
    v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v13 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v21, v8, a2);
        v15 = *MonitorRectForDpi;
        v16 = MonitorRectForDpi->m128i_i64[0];
        v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
        if ( v10 >= (int)v16 )
          v10 = v16;
        v18 = HIDWORD(v16);
        v20.m128i_i32[0] = v10;
        if ( v12 >= (int)v18 )
          v12 = v18;
        v20.m128i_i32[1] = v12;
        if ( v13 <= (int)v17 )
          v13 = v17;
        v20.m128i_i32[2] = v13;
        if ( v11 <= SHIDWORD(v17) )
          v11 = HIDWORD(v17);
        v20.m128i_i32[3] = v11;
        v9 = _mm_loadu_si128(&v20);
      }
      v8 = *(_QWORD *)(v8 + 56);
    }
    while ( v8 );
  }
  *a1 = v9;
  return a1;
}
