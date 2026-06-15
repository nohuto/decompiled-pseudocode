/*
 * XREFs of sub_140007F0C @ 0x140007F0C
 * Callers:
 *     sub_140007C8C @ 0x140007C8C (sub_140007C8C.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 * Callees:
 *     sub_14000809C @ 0x14000809C (sub_14000809C.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_14006ED00 @ 0x14006ED00 (sub_14006ED00.c)
 */

__int64 __fastcall sub_140007F0C(__int64 a1, __int64 a2)
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
        v6 = *(_QWORD *)(v6 + 56);
        sub_14006ED00(a1, v7);
      }
    }
  }
  j_j__o_free(*(_QWORD *)a1, a2);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v3 = sub_14005C090(a1, 0LL);
    sub_1400080D4(a1, v3, 0LL);
  }
  result = sub_14000809C(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
