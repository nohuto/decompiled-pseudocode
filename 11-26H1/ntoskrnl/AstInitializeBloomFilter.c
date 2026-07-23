/*
 * XREFs of AstInitializeBloomFilter @ 0x14079DF8C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __fastcall AstInitializeBloomFilter(__int64 a1, __int64 a2, __int64 a3)
{
  dword_140F85110 = -849937013;
  AstIoctlBloomFilter = 0x8000;
  qword_140F85108 = a3;
}
