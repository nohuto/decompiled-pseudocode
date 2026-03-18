/*
 * XREFs of ApiSetEditionGetProcessWindowStationEntryPoint @ 0x140116978
 * Callers:
 *     NtUserGetProcessWindowStation @ 0x140116950 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1401169BC (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionGetProcessWindowStationEntryPoint(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = (__int64 (__fastcall *)(__int64))IsEditionGetProcessWindowStationEntryPointSupported();
  if ( (int)result >= 0 )
  {
    result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 920LL);
    if ( result )
      return (__int64 (__fastcall *)(__int64))result(a1);
  }
  return result;
}
