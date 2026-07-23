/*
 * XREFs of IommupHvValidatePageRequestGpa @ 0x1405A1214
 * Callers:
 *     IommuProcessPageRequestQueue @ 0x14059EE90 (IommuProcessPageRequestQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvValidatePageRequestGpa(int a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( BYTE1(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    return 0LL;
  v5[3] = 0LL;
  v5[0] = a2;
  v5[2] = a4 & 0xF | a3 & 0xFFFFFFFFFFFFF000uLL;
  v5[1] = ((unsigned __int64)(a1 & 0xFFFFF) << 11) | 0x4000000000000400LL;
  return guard_dispatch_icall_no_overrides(1LL, v5);
}
