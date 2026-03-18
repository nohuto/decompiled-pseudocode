/*
 * XREFs of wcschr @ 0x1401C73A4
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14002AD24 (GetMonitorCapabilityFromInf.c)
 *     ParseModeCap @ 0x14002B480 (ParseModeCap.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ParseWindowStation @ 0x1401435D0 (ParseWindowStation.c)
 *     InitCreateUserSubsystem @ 0x1402F3C80 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  int v2; // r10d
  wchar_t *v4; // r9
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  wchar_t *v10; // rdx

  v2 = Ch;
  v4 = 0LL;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(Ch), 0), 0);
  while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    if ( !*Str )
      return 0LL;
    v8 = 2LL;
LABEL_8:
    Str = (const wchar_t *)((char *)Str + v8);
  }
  v6 = _mm_loadu_si128((const __m128i *)Str);
  v7 = _mm_movemask_epi8((__m128i)_mm_or_ps((__m128)_mm_cmpeq_epi16((__m128i)0LL, v6), (__m128)_mm_cmpeq_epi16(v6, v5)));
  if ( !v7 )
  {
    v8 = 16LL;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v9, v7);
  v10 = (wchar_t *)((char *)Str + v9);
  if ( *v10 == v2 )
    return v10;
  return v4;
}
