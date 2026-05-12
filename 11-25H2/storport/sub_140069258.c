/*
 * XREFs of sub_140069258 @ 0x140069258
 * Callers:
 *     StorPortSetBusDataByOffset @ 0x140074D60 (StorPortSetBusDataByOffset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140069258(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 56))(*(_QWORD *)(a1 + 16));
}
