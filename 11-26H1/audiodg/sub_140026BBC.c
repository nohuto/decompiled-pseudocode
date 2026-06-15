/*
 * XREFs of sub_140026BBC @ 0x140026BBC
 * Callers:
 *     sub_1400468D0 @ 0x1400468D0 (sub_1400468D0.c)
 *     sub_140052F18 @ 0x140052F18 (sub_140052F18.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 *     sub_1400546DC @ 0x1400546DC (sub_1400546DC.c)
 *     sub_140054730 @ 0x140054730 (sub_140054730.c)
 *     sub_140054794 @ 0x140054794 (sub_140054794.c)
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14005EE7C @ 0x14005EE7C (sub_14005EE7C.c)
 *     sub_14005F080 @ 0x14005F080 (sub_14005F080.c)
 *     sub_14005F24C @ 0x14005F24C (sub_14005F24C.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 *     sub_140093194 @ 0x140093194 (sub_140093194.c)
 *     sub_140093ADC @ 0x140093ADC (sub_140093ADC.c)
 *     sub_140093C78 @ 0x140093C78 (sub_140093C78.c)
 *     sub_140093ED0 @ 0x140093ED0 (sub_140093ED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140026BBC(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
    v5 = *(unsigned __int8 *)(a2 + v3++);
  return i;
}
