/*
 * XREFs of EditionPromotePointer @ 0x140178334
 * Callers:
 *     ApiSetEditionPromotePointer @ 0x1401BCA2C (ApiSetEditionPromotePointer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPromotePointer(
        __int64 a1,
        unsigned int a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned __int16 v5; // si
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5864LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v5, a2, a3);
  return result;
}
