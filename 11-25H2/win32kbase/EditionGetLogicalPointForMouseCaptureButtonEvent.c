/*
 * XREFs of EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140124114
 * Callers:
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140195480 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, __int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                 a1,
                                                                                                 a2)
                                                                                             + 48)
                                                                                 + 6984LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))result(a1, a2, a3, a4, a5);
  return result;
}
