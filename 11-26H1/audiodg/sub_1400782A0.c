/*
 * XREFs of sub_1400782A0 @ 0x1400782A0
 * Callers:
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 *     sub_14007EA94 @ 0x14007EA94 (sub_14007EA94.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

void **__fastcall sub_1400782A0(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_14004DB08(v4);
  return a1;
}
