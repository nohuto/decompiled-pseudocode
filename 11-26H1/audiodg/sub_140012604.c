/*
 * XREFs of sub_140012604 @ 0x140012604
 * Callers:
 *     sub_1400124DC @ 0x1400124DC (sub_1400124DC.c)
 * Callees:
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_140011E48 @ 0x140011E48 (sub_140011E48.c)
 *     sub_140036F58 @ 0x140036F58 (sub_140036F58.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 */

__int64 __fastcall sub_140012604(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v6 )
      {
        v7 = v6;
        v6 = *(_QWORD *)(v6 + 32);
        sub_140036F58(a1, v7);
      }
    }
  }
  j_j__o_free(*(_QWORD *)a1, a2);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v3 = sub_14005C090(a1, 0LL);
    sub_140011E48(a1, v3, 0);
  }
  result = sub_14000C390(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
