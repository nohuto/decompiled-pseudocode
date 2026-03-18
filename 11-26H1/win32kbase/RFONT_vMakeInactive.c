/*
 * XREFs of RFONT_vMakeInactive @ 0x140034770
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x14003453C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall RFONT_vMakeInactive(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1976LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
