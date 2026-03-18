/*
 * XREFs of EditionDoHotKeys @ 0x140154428
 * Callers:
 *     ApiSetEditionDoHotKeys @ 0x14019B8C0 (ApiSetEditionDoHotKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionDoHotKeys(
        __int64 a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, _QWORD, _QWORD, __int64, __int64)
{
  char v9; // bp
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, _QWORD, __int64, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v9 = a1;
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                                        + 5304LL);
  if ( result )
  {
    LOBYTE(v11) = a2;
    LOBYTE(v12) = v9;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))result(v12, v11, a3, a4, a5, a6);
  }
  return result;
}
