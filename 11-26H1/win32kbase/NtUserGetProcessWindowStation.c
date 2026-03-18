/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1401E4CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserGetProcessWindowStation(__int64 a1)
{
  void (__fastcall *v1)(__int64 *); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 784LL);
  if ( v1 )
    v1(&v3);
  return v3;
}
