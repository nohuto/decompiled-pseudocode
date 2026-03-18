/*
 * XREFs of xxxResolveDesktop @ 0x1401069AC
 * Callers:
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxResolveDesktop(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64, _QWORD, __int64); // rax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                            a1,
                                                                                            a2)
                                                                                        + 48)
                                                                            + 1160LL);
  if ( v8 )
    return v8(-1LL, a2, a3, a4, a5);
  else
    return 3221225659LL;
}
