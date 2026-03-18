/*
 * XREFs of MagContextThreadCallout @ 0x140249398
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall MagContextThreadCallout(__int64 a1, __int64 a2))(__int64, __int64, _QWORD, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                       + 1288LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))result(a1, a2, 0LL, 1LL);
  return result;
}
