/*
 * XREFs of EditionDoHotKeys @ 0x1401151C8
 * Callers:
 *     ApiSetEditionDoHotKeys @ 0x140194F74 (ApiSetEditionDoHotKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionDoHotKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, _QWORD, _QWORD, __int64, __int64)
{
  char v8; // si
  char v9; // bp
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, _QWORD, __int64, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v8 = a2;
  v9 = a1;
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                                        + 5744LL);
  if ( result )
  {
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v9;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))result(v12, v11, a3, a4, a5, a6);
  }
  return result;
}
