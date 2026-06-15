/*
 * XREFs of sub_140012538 @ 0x140012538
 * Callers:
 *     sub_1400124DC @ 0x1400124DC (sub_1400124DC.c)
 * Callees:
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_14001191C @ 0x14001191C (sub_14001191C.c)
 *     sub_140012AD4 @ 0x140012AD4 (sub_140012AD4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 */

__int64 __fastcall sub_140012538(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v4 )
      {
        v7 = v4;
        v4 = *(_QWORD *)(v4 + 32);
        sub_140012AD4(a1, v7);
      }
    }
  }
  j_j__o_free(*(_QWORD *)a1, a2);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_14005C090(a1, 0LL);
    sub_14001191C(a1, v5, 0);
  }
  result = sub_14000C390(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
