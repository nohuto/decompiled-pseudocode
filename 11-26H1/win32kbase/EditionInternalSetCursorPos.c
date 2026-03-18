/*
 * XREFs of EditionInternalSetCursorPos @ 0x14015E0E0
 * Callers:
 *     ApiSetEditionInternalSetCursorPos @ 0x1401B7950 (ApiSetEditionInternalSetCursorPos.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionInternalSetCursorPos(
        __int64 a1,
        unsigned int a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6624LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v5, a2, a3);
  return result;
}
