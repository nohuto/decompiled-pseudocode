/*
 * XREFs of sub_1400DADB0 @ 0x1400DADB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140037140 @ 0x140037140 (sub_140037140.c)
 */

char __fastcall sub_1400DADB0(__int64 a1, _DWORD *a2)
{
  if ( a2 && *a2 == 1314275652 && (a2[36] & 0x80) != 0 )
    return sub_140037140((__int64)(a2 + 42));
  else
    return 0;
}
