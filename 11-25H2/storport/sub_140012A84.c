/*
 * XREFs of sub_140012A84 @ 0x140012A84
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_14005440C @ 0x14005440C (sub_14005440C.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140012A84(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 8LL))(*(_QWORD *)(a1 + 240) + 16LL) == 0
       ? 0xC0000001
       : 0;
}
