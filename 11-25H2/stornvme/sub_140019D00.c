/*
 * XREFs of sub_140019D00 @ 0x140019D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 */

char __fastcall sub_140019D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    if ( !(unsigned int)sub_1400073E0(a1, a2, a3, a4) )
      return sub_14000FB60(a1, 1u);
  }
  else
  {
    StorPortNotification(4096LL, a1, sub_140019D70);
    return 0;
  }
  return v4;
}
