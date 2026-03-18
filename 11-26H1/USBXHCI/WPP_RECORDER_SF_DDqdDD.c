/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x14004D688
 * Callers:
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x140029F00 (Isoch_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_DDqDDD(
        __int64 a1,
        _DWORD a2,
        _DWORD a3,
        _DWORD a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        ...)
{
  int v12; // [rsp+28h] [rbp-51h]
  va_list va; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va, a10);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      46LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      4LL,
      va,
      4LL,
      0LL);
  LOWORD(v12) = 46;
  return WppAutoLogTrace(a1, 5LL, 14LL, &WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids, v12, &a6, 4LL, &a7, 4LL, &a8);
}
