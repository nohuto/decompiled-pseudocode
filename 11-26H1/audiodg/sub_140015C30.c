/*
 * XREFs of sub_140015C30 @ 0x140015C30
 * Callers:
 *     sub_140015930 @ 0x140015930 (sub_140015930.c)
 *     sub_140015E30 @ 0x140015E30 (sub_140015E30.c)
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140015C30(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 4680) )
  {
    if ( sub_140014350 == *(__int64 (__fastcall **)(__int64))(a1 + 216) )
      return 1;
  }
  return result;
}
