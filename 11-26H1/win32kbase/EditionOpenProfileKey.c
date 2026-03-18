/*
 * XREFs of EditionOpenProfileKey @ 0x140248F8C
 * Callers:
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionOpenProfileKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(_QWORD, _QWORD, __int64)
{
  unsigned int v5; // esi
  __int64 (__fastcall *result)(_QWORD, _QWORD, __int64); // rax

  v5 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2792LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result(v5, a2, a3);
  return result;
}
