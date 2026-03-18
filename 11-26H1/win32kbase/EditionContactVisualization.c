/*
 * XREFs of EditionContactVisualization @ 0x140160B70
 * Callers:
 *     ApiSetEditionContactVisualization @ 0x140065F78 (ApiSetEditionContactVisualization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionContactVisualization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5))(_QWORD, __int64, __int64, _QWORD, int)
{
  unsigned int v7; // esi
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, _QWORD, int); // rax

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                       + 48)
                                                                           + 6104LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, int))result(v7, a2, 480LL, a4, a5);
  return result;
}
