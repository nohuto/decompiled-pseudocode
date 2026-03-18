/*
 * XREFs of EditionInternalSetCursorPos @ 0x14011FC54
 * Callers:
 *     ApiSetEditionInternalSetCursorPos @ 0x140195AE0 (ApiSetEditionInternalSetCursorPos.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionInternalSetCursorPos(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                            + 7064LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result(v5, v4, a3);
  return result;
}
