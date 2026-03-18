/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x14012231C
 * Callers:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2648LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
