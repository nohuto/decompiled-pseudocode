/*
 * XREFs of EtwpInitializeLastBranchTracing @ 0x1408363C4
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 EtwpInitializeLastBranchTracing()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  if ( ((unsigned __int8)&stru_140E285C0.IoSelfBoostsEntry & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)&stru_140E285C0.PriorityFloorCounts[8] = 0LL;
  *(_OWORD *)&stru_140E285C0.IoSelfBoostsEntry.Next = 0LL;
  result = guard_dispatch_icall_no_overrides((__int64)&v1, (__int64)&v2);
  if ( (_BYTE)result )
  {
    EtwpLastBranchStackSize = v1;
    result = v2;
    EtwpLastBranchSupportedOptions = v2;
  }
  return result;
}
