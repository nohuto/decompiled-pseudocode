/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qD @ 0x140179FF8
 * Callers:
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x140179E6C (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401CBEA0 (-DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z.c)
 *     ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401CC240 (-DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     rimObsUpdateInputObserverRegistration @ 0x14021076C (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
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
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, 4LL, a6, a8, v11, (__int64 *)va, 8LL, va1, 4LL, 0LL);
  }
  return result;
}
