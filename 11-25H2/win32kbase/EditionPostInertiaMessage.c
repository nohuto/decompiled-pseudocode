/*
 * XREFs of EditionPostInertiaMessage @ 0x14014D8EC
 * Callers:
 *     ApiSetEditionPostInertiaMessage @ 0x140196584 (ApiSetEditionPostInertiaMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostInertiaMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(__int64, _QWORD, __int64, __int64, __int64)
{
  unsigned int v7; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, __int64, __int64); // rax

  v7 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                                a1,
                                                                                                a2)
                                                                                            + 48)
                                                                                + 6464LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))result(a1, v7, a3, a4, a5);
  return result;
}
