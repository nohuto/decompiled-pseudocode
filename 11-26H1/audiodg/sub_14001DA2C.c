/*
 * XREFs of sub_14001DA2C @ 0x14001DA2C
 * Callers:
 *     sub_14001D990 @ 0x14001D990 (sub_14001D990.c)
 * Callees:
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 *     sub_14001DAA0 @ 0x14001DAA0 (sub_14001DAA0.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_14001DA2C(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(__int64 **)a1;
    if ( !*(_QWORD *)a1 )
      sub_14004639C(2147500037LL, 0LL);
    v3 = *v2;
    v4 = v2[2];
    *(_QWORD *)a1 = *v2;
    if ( v3 )
      *(_QWORD *)(v3 + 8) = 0LL;
    else
      *(_QWORD *)(a1 + 8) = 0LL;
    sub_14001DAA0(a1);
    if ( v4 )
      sub_140010010(v4);
  }
}
