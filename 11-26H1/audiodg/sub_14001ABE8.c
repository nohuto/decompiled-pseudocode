/*
 * XREFs of sub_14001ABE8 @ 0x14001ABE8
 * Callers:
 *     sub_14001AAD4 @ 0x14001AAD4 (sub_14001AAD4.c)
 * Callees:
 *     sub_14001AC60 @ 0x14001AC60 (sub_14001AC60.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 *__fastcall sub_14001ABE8(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  *a1 = 0LL;
  v2 = sub_140049338(56LL, &unk_1400C75FC);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    v3 = sub_14001AC60(v2);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v3;
  }
  return a1;
}
