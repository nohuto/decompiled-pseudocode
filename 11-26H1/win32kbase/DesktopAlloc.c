/*
 * XREFs of DesktopAlloc @ 0x14014390C
 * Callers:
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall DesktopAlloc(__int64 a1, unsigned int a2, unsigned int a3))(__int64, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2568LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))result(a1, a2, a3);
  return result;
}
