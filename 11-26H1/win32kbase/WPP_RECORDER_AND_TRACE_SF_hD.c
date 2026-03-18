/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400E869C
 * Callers:
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIGH@Z @ 0x1400E6EB4 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIGH@Z.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_hD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
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
               &WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids,
               a7,
               (__int64 *)va,
               2LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(
             a4,
             4LL,
             7LL,
             &WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids,
             v11,
             (__int64 *)va,
             2LL,
             va1,
             4LL,
             0LL);
  }
  return result;
}
