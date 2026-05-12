/*
 * XREFs of sub_14002A5E0 @ 0x14002A5E0
 * Callers:
 *     sub_140018030 @ 0x140018030 (sub_140018030.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140066A10 @ 0x140066A10 (sub_140066A10.c)
 * Callees:
 *     sub_140027C30 @ 0x140027C30 (sub_140027C30.c)
 *     sub_14006D7C4 @ 0x14006D7C4 (sub_14006D7C4.c)
 */

void __fastcall sub_14002A5E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    v6 = 0;
    if ( sub_140027C30(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3448, v6, 1LL);
      sub_14006D7C4(a1 + 720, a2, a3);
    }
  }
}
