/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qi @ 0x140095638
 * Callers:
 *     rimQueueCompleteFrame @ 0x140095460 (rimQueueCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qi(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(
             a4,
             4LL,
             1LL,
             &WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             va1,
             8LL,
             0LL);
  }
  return result;
}
