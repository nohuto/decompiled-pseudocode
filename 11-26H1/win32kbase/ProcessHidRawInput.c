/*
 * XREFs of ProcessHidRawInput @ 0x140079B78
 * Callers:
 *     rimDoApiSetHidRawInputWorkItem @ 0x140079AE4 (rimDoApiSetHidRawInputWorkItem.c)
 *     ApiSetProcessHidRawInput @ 0x1400A1C74 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ProcessHidRawInput(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                              + 4104LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  return result;
}
