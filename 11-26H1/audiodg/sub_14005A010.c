/*
 * XREFs of sub_14005A010 @ 0x14005A010
 * Callers:
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_14003D900 @ 0x14003D900 (sub_14003D900.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_140059BCC @ 0x140059BCC (sub_140059BCC.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_14006AEEC @ 0x14006AEEC (sub_14006AEEC.c)
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005A010(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}
