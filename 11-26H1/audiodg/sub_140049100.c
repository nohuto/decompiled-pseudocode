/*
 * XREFs of sub_140049100 @ 0x140049100
 * Callers:
 *     <none>
 * Callees:
 *     sub_140049EA8 @ 0x140049EA8 (sub_140049EA8.c)
 *     sub_14004A15C @ 0x14004A15C (sub_14004A15C.c)
 */

__int64 sub_140049100()
{
  unsigned int v0; // eax

  sub_14004A15C();
  v0 = sub_140049EA8();
  return o__set_new_mode(v0);
}
