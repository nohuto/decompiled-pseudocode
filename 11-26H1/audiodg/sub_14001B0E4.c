/*
 * XREFs of sub_14001B0E4 @ 0x14001B0E4
 * Callers:
 *     sub_14001B01C @ 0x14001B01C (sub_14001B01C.c)
 * Callees:
 *     sub_14001B328 @ 0x14001B328 (sub_14001B328.c)
 */

__int64 __fastcall sub_14001B0E4(__int64 a1)
{
  sub_14001B328();
  *(_QWORD *)a1 = off_1400B8A28;
  *(_QWORD *)(a1 + 8) = off_1400B8A80;
  *(_QWORD *)(a1 + 16) = off_1400B8AA0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 88));
  InitializeSRWLock((PSRWLOCK)(a1 + 96));
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = 0;
  return a1;
}
