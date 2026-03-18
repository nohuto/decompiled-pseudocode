/*
 * XREFs of sub_140008040 @ 0x140008040
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006730 @ 0x140006730 (sub_140006730.c)
 *     sub_140009180 @ 0x140009180 (sub_140009180.c)
 */

char __fastcall sub_140008040(__int64 a1)
{
  if ( !(unsigned __int8)sub_140009180(a1, 0xFFFFLL) || (*(_DWORD *)(a1 + 24) & 8) != 0 )
  {
    ++*(_QWORD *)(a1 + 3784);
    return 0;
  }
  else
  {
    sub_140006730(a1, 0xFFFFu, 0);
    return 1;
  }
}
