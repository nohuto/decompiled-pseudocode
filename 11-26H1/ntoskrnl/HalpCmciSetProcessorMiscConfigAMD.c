/*
 * XREFs of HalpCmciSetProcessorMiscConfigAMD @ 0x140500018
 * Callers:
 *     HalpCmciSetProcessorConfigAMD @ 0x140454888 (HalpCmciSetProcessorConfigAMD.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpCmciSetProcessorMiscConfigAMD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 < 0 && (a3 & 0x2000000000000000LL) == 0 )
    return guard_dispatch_icall_no_overrides(a5, a2);
  return result;
}
