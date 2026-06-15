/*
 * XREFs of sub_140078108 @ 0x140078108
 * Callers:
 *     sub_1400B35E8 @ 0x1400B35E8 (sub_1400B35E8.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

int __fastcall sub_140078108(__int64 a1)
{
  void *v1; // rax

  v1 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v1 )
    LODWORD(v1) = sub_14004DB08(v1);
  return (int)v1;
}
