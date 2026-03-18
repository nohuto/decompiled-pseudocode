/*
 * XREFs of EditionUpdateSASModifiers @ 0x14015648C
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionUpdateSASModifiers(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4))(_QWORD, __int64, _QWORD, _QWORD)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v9; // rdx

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                     + 5448LL);
  if ( result )
  {
    LOBYTE(v9) = a2;
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(v7, v9, a3, a4);
  }
  return result;
}
