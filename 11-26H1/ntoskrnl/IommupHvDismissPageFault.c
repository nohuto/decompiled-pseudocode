/*
 * XREFs of IommupHvDismissPageFault @ 0x1405A0A08
 * Callers:
 *     IommuProcessPageRequestQueue @ 0x14059EE90 (IommuProcessPageRequestQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvDismissPageFault(unsigned int a1, __int64 a2, __int16 a3, int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-30h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  v8 = a2;
  BugCheckParameter4 = 0LL;
  v6 = a3 & 0x1FF;
  v11 = 0LL;
  if ( a1 != -1 )
    v6 = ((unsigned __int64)a1 << 11) ^ (((unsigned __int64)a1 << 11) ^ v6) & 0xFFFFFFFF800007FFuLL | 0x400;
  BugCheckParameter3 = v6 | 0x8000000000000000uLL;
  if ( a4 >= 0 )
  {
    if ( a6 && !BYTE1(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    {
      BugCheckParameter3 = v6 | 0xC000000000000000uLL;
      BugCheckParameter4 = a6 & 0xF | a5 & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  else
  {
    BugCheckParameter3 = v6 | 0xA000000000000000uLL;
  }
  result = guard_dispatch_icall_no_overrides(1LL, &v8);
  if ( (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3102uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
