/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1401E9A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserSetProcessWindowStation(__int64 a1)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 776LL);
  if ( v2 )
    LODWORD(result) = v2(a1);
  else
    LODWORD(result) = -1073741637;
  return (int)result;
}
