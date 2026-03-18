/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x140830184
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 EtwpInitializeLastBranchTracing()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  if ( ((unsigned __int8)&stru_140E28440.ThreadListEntry.Blink & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140E28440.MutantListHead.Blink = 0LL;
  *(_OWORD *)&stru_140E28440.ThreadListEntry.Blink = 0LL;
  result = guard_dispatch_icall_no_overrides((__int64)&v1, (__int64)&v2);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v1;
    result = v2;
    EtwpLastBranchSupportedOptions = v2;
  }
  return result;
}
