/*
 * XREFs of ExpRevokeBootLoaderPagePrivileges @ 0x140CB0540
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 */

_UNKNOWN **__fastcall ExpRevokeBootLoaderPagePrivileges(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 32);
  v6[1] = 0LL;
  v3 = *(__int64 **)(a1 + 32);
  v6[0] = 0LL;
  while ( v3 != v2 )
  {
    if ( *((_DWORD *)v3 + 6) == 4 )
    {
      v4 = v3[4];
      v5 = v3[5] + v4 - 1;
      while ( v4 <= v5 )
        result = (_UNKNOWN **)KeSetPagePrivilege(v4++, 0LL, (__int64)v6, 0x10u);
    }
    v3 = (__int64 *)*v3;
  }
  return result;
}
