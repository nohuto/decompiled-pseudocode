/*
 * XREFs of EditionKeepMachineUp @ 0x1400E4E50
 * Callers:
 *     ApiSetEditionKeepMachineUp @ 0x140195D10 (ApiSetEditionKeepMachineUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionKeepMachineUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  v6 = a2;
  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                + 48)
                                                                    + 4392LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))result(v7, v6, a3, a4);
  return result;
}
