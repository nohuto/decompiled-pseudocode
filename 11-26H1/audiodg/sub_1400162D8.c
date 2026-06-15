/*
 * XREFs of sub_1400162D8 @ 0x1400162D8
 * Callers:
 *     sub_140015E30 @ 0x140015E30 (sub_140015E30.c)
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 * Callees:
 *     sub_14004F788 @ 0x14004F788 (sub_14004F788.c)
 */

BOOL __fastcall sub_1400162D8(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ResetEvent(a1);
  if ( !result )
    sub_14004F788(retaddr, 2525LL);
  return result;
}
