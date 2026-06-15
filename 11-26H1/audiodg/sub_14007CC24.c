/*
 * XREFs of sub_14007CC24 @ 0x14007CC24
 * Callers:
 *     sub_1400783F0 @ 0x1400783F0 (sub_1400783F0.c)
 *     sub_14007CB44 @ 0x14007CB44 (sub_14007CB44.c)
 *     sub_14007CB7C @ 0x14007CB7C (sub_14007CB7C.c)
 * Callees:
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 *     sub_140058AF0 @ 0x140058AF0 (sub_140058AF0.c)
 *     sub_1400782A0 @ 0x1400782A0 (sub_1400782A0.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 *     sub_14007E5B4 @ 0x14007E5B4 (sub_14007E5B4.c)
 */

char __fastcall sub_14007CC24(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_14007CD34(a1, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 58) )
      sub_140058AF0((_QWORD *)(a1 + 24), v11);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( sub_140058AF0(&v12, v11 + 10) )
    {
      sub_14007E5B4(a1, v12, 0LL, v13 - v12);
      sub_1400782A0((void **)(a1 + 48), (void **)&v13 + 1);
      *(_BYTE *)(a1 + 58) = 1;
    }
    if ( *((_QWORD *)&v13 + 1) )
      sub_14004DB08(*((void **)&v13 + 1));
  }
  return sub_14007CD34(a1, a2, a3, a4, a5, a6);
}
