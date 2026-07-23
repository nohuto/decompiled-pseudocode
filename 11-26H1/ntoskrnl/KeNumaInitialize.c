/*
 * XREFs of KeNumaInitialize @ 0x140CCEAB4
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 KeNumaInitialize()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(); // [rsp+68h] [rbp-8h]

  LOWORD(v1) = 0;
  result = guard_dispatch_icall_no_overrides(11LL, 64LL);
  if ( (int)result >= 0 )
  {
    KeNumberNodes = 0;
    KiNumaQueryProcessorNode = 0LL;
    KiNumaQueryNodeCapacity = 0LL;
    KiNumaQueryNodeDistance[0] = v1;
    KiNumaQueryProximityNode = 0LL;
    KiNumaQueryProximityId = 0LL;
    result = (__int64)KiQueryProximityNode;
    PnpQueryProximityNode = (__int64)KiQueryProximityNode;
  }
  return result;
}
