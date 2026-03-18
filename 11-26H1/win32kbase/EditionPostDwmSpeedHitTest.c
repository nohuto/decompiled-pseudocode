/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x140106BD8
 * Callers:
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x140106B50 (ApiSetEditionPostDwmSpeedHitTest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostDwmSpeedHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, __int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                                          + 5592LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))result(a1, a2, a3, a4, a5, a6);
  return result;
}
