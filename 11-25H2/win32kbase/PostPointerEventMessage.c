/*
 * XREFs of PostPointerEventMessage @ 0x14023F1C4
 * Callers:
 *     ApiSetPostPointerEventMessage @ 0x140197520 (ApiSetPostPointerEventMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PostPointerEventMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, __int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                        a1,
                                                                                        a2)
                                                                                    + 48)
                                                                        + 4632LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))result(a1, 568LL, a3, 1LL);
  return result;
}
