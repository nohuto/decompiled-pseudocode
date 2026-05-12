/*
 * XREFs of sub_14003E6C0 @ 0x14003E6C0
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     sub_140045120 @ 0x140045120 (sub_140045120.c)
 * Callees:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 */

BOOLEAN __fastcall sub_14003E6C0(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // bl

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)sub_14000D2F0(a1, 0, 0) )
    sub_14000C6B0(a1, 0);
  return v3;
}
