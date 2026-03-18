/*
 * XREFs of EditionPostInertiaMessage @ 0x1401836B8
 * Callers:
 *     ApiSetEditionPostInertiaMessage @ 0x1401BB814 (ApiSetEditionPostInertiaMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostInertiaMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                            + 48)
                                                                                + 6024LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(a1, a2, a3, a4, a5);
  return result;
}
