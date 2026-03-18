/*
 * XREFs of sub_14000C040 @ 0x14000C040
 * Callers:
 *     sub_14001A5C4 @ 0x14001A5C4 (sub_14001A5C4.c)
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 *     sub_140020624 @ 0x140020624 (sub_140020624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000C040(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1560);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
