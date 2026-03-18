/*
 * XREFs of PsPicoSystemCallDispatch @ 0x140B4380C
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x140616170 (PsPicoAltSystemCallDispatch.c)
 *     PsSyscallProviderDispatch @ 0x140B43670 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  guard_dispatch_icall_no_overrides((__int64)&v4, a2);
  return *(_QWORD *)(a1 + 48);
}
