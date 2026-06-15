/*
 * XREFs of sub_14000DE78 @ 0x14000DE78
 * Callers:
 *     sub_14000DE10 @ 0x14000DE10 (sub_14000DE10.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000EA08 @ 0x14000EA08 (sub_14000EA08.c)
 *     sub_14001003C @ 0x14001003C (sub_14001003C.c)
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_14002DCA4 @ 0x14002DCA4 (sub_14002DCA4.c)
 *     sub_14003F010 @ 0x14003F010 (sub_14003F010.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_1400B4840 @ 0x1400B4840 (sub_1400B4840.c)
 * Callees:
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000DE78(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 result; // rax

  while ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      sub_14004639C(2147500037LL, a2);
    *(_QWORD *)a1 = *v3;
    result = *(_QWORD *)(a1 + 32);
    *v3 = result;
    *(_QWORD *)(a1 + 32) = v3;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      result = sub_14000DE78(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    result = sub_14000DEF8();
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
