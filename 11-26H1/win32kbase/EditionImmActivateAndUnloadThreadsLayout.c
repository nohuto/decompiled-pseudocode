/*
 * XREFs of EditionImmActivateAndUnloadThreadsLayout @ 0x140248E34
 * Callers:
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1401BEDC8 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5))(__int64, _QWORD, _QWORD, __int64, int)
{
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, __int64, int); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                       + 48)
                                                                           + 5096LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, int))result(a1, a2, 0LL, a4, a5);
  return result;
}
