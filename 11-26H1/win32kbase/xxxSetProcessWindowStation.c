/*
 * XREFs of xxxSetProcessWindowStation @ 0x140148140
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(__int64 a1)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(__int64, __int64); // rax

  v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(v2 + 960);
  if ( !v3 )
    return 3221225659LL;
  LOBYTE(v2) = 1;
  return v3(a1, v2);
}
