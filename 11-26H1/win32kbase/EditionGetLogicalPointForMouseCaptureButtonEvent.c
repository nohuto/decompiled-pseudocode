/*
 * XREFs of EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x14015F668
 * Callers:
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1401A4FDC (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, __int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                             + 48)
                                                                                 + 6544LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))result(a1, a2, a3, a4, a5);
  return result;
}
