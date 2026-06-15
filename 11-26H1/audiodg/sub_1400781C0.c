/*
 * XREFs of sub_1400781C0 @ 0x1400781C0
 * Callers:
 *     sub_140078090 @ 0x140078090 (sub_140078090.c)
 *     sub_14007BEA4 @ 0x14007BEA4 (sub_14007BEA4.c)
 *     sub_14007CBB4 @ 0x14007CBB4 (sub_14007CBB4.c)
 *     sub_1400B35D6 @ 0x1400B35D6 (sub_1400B35D6.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

BOOL __fastcall sub_1400781C0(_QWORD *a1)
{
  void *v2; // rcx
  BOOL result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[22];
  a1[22] = 0LL;
  if ( v2 )
    result = sub_14004DB08(v2);
  v4 = (void *)a1[14];
  a1[14] = 0LL;
  if ( v4 )
    result = sub_14004DB08(v4);
  v5 = (void *)a1[6];
  a1[6] = 0LL;
  if ( v5 )
    return sub_14004DB08(v5);
  return result;
}
