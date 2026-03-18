/*
 * XREFs of BuildHwndList @ 0x1400FE068
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400FDD7C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall BuildHwndList(__int64 a1))(__int64, __int64, _QWORD, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                       + 3552LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))result(a1, 1LL, 0LL, 1LL);
  return result;
}
