/*
 * XREFs of EditionxxxSystemParametersInfoWorker @ 0x14012DAF8
 * Callers:
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x14012DA74 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionxxxSystemParametersInfoWorker(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4))(_QWORD, _QWORD, __int64, _QWORD)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64, _QWORD); // rax

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                     + 2760LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))result(v7, a2, a3, a4);
  return result;
}
