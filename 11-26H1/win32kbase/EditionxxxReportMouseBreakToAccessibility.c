/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x140160C0C
 * Callers:
 *     ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1401983C0 (ApiSetEditionxxxReportMouseBreakToAccessibility.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionxxxReportMouseBreakToAccessibility(
        __int64 a1,
        __int128 *a2,
        unsigned int a3))(_QWORD, __int128 *, _QWORD)
{
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, __int128 *, _QWORD); // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                + 6344LL);
  if ( result )
  {
    v7 = *a2;
    return (__int64 (__fastcall *)(_QWORD, __int128 *, _QWORD))result(v5, &v7, a3);
  }
  return result;
}
