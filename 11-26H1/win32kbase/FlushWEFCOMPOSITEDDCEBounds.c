/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x14015C7BC
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2288LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
