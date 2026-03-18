/*
 * XREFs of EditionPostMouseMoveToQ @ 0x14012D38C
 * Callers:
 *     ApiSetEditionPostMouseMoveToQ @ 0x14012D2E8 (ApiSetEditionPostMouseMoveToQ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostMouseMoveToQ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7))(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                                                  + 4424LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64))result(
                                                                                                   a1,
                                                                                                   a2,
                                                                                                   a3,
                                                                                                   a4,
                                                                                                   a5,
                                                                                                   a6,
                                                                                                   a7);
  return result;
}
