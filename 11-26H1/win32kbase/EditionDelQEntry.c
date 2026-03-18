/*
 * XREFs of EditionDelQEntry @ 0x1401658A0
 * Callers:
 *     ApiSetEditionDelQEntry @ 0x1400E43DC (ApiSetEditionDelQEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionDelQEntry(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                               + 6184LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, a2, 1LL);
  return result;
}
