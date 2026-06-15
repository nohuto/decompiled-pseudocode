/*
 * XREFs of sub_14001DCF4 @ 0x14001DCF4
 * Callers:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 * Callees:
 *     sub_14001D0C8 @ 0x14001D0C8 (sub_14001D0C8.c)
 *     sub_14001DD58 @ 0x14001DD58 (sub_14001DD58.c)
 */

__int64 __fastcall sub_14001DCF4(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  LPWSTR CommandLineW; // rax

  v2 = 0;
  if ( byte_1400E8928 )
    return 0xFFFFFFFFLL;
  CommandLineW = GetCommandLineW();
  if ( sub_14001D0C8(a1, CommandLineW) == 1 )
    return (unsigned int)sub_14001DD58(a1, a2);
  return v2;
}
