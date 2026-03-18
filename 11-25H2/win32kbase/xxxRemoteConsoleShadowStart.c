/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x14023F4A4
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                           + 528LL);
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return 3221225659LL;
}
