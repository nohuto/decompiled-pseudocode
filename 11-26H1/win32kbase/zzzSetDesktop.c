/*
 * XREFs of zzzSetDesktop @ 0x140145414
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall zzzSetDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 984LL);
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return 3221225659LL;
}
