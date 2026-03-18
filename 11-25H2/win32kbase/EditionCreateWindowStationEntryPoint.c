/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x14015A824
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x14014DBE0 (ApiSetEditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionCreateWindowStationEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8))(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int)
{
  unsigned int v10; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int); // rax

  v10 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                                                  + 864LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64, int))result(
                                                                                                   a1,
                                                                                                   v10,
                                                                                                   a3,
                                                                                                   a4,
                                                                                                   a5,
                                                                                                   a6,
                                                                                                   a7,
                                                                                                   a8);
  return result;
}
