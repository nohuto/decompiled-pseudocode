/*
 * XREFs of sub_14006922C @ 0x14006922C
 * Callers:
 *     sub_14003C2CC @ 0x14003C2CC (sub_14003C2CC.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     StorPortGetBusData @ 0x140073D90 (StorPortGetBusData.c)
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14006922C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 64))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           0LL,
           a5);
}
