/*
 * XREFs of EditionParseDesktop @ 0x1401119D0
 * Callers:
 *     ApiSetEditionParseDesktop @ 0x140107BE0 (ApiSetEditionParseDesktop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionParseDesktop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // r9
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, int, __int64, __int64, __int64, __int64, __int64); // r11

  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2128LL);
  if ( !v15 )
    return 3221225659LL;
  LOBYTE(v14) = a4;
  return v15(a1, a2, a3, v14, a5, a6, a7, a8, a9, a10);
}
