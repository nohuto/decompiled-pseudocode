/*
 * XREFs of MiInvokePatchCallback @ 0x140876FD4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiInvokePatchCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v6; // ecx
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v7[1] = *(_DWORD *)(a2 + 8);
  v7[2] = 0;
  v7[0] = 1;
  result = guard_dispatch_icall_no_overrides((__int64)v7, 12LL);
  if ( (int)result >= 0 )
    return 0LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 )
  {
    LOBYTE(v2) = v6 != 1;
    KeBugCheckEx(0x1Au, v2 + 333251, *(_QWORD *)(a1 + 48), *(_QWORD *)a2, (int)result);
  }
  return result;
}
