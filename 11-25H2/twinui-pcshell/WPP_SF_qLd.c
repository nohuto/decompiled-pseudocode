/*
 * XREFs of WPP_SF_qLd @ 0x1802EF7A8
 * Callers:
 *     ?SetFallbackForeground@CFallbackWindow@@UEAAJW4FALLBACK_FOREGROUND_USAGE@@@Z @ 0x1802EF6E0 (-SetFallbackForeground@CFallbackWindow@@UEAAJW4FALLBACK_FOREGROUND_USAGE@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qLd(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_9d0474fd76d032ad07699e813e1628e2_Traceguids,
           0xAu,
           va,
           8LL,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
