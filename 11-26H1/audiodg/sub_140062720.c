/*
 * XREFs of sub_140062720 @ 0x140062720
 * Callers:
 *     sub_140060E54 @ 0x140060E54 (sub_140060E54.c)
 * Callees:
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_140061228 @ 0x140061228 (sub_140061228.c)
 */

__int64 __fastcall sub_140062720(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v3 )
      {
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 24);
        sub_140061228(a1, v4);
      }
    }
  }
  j_j__o_free(*(_QWORD *)a1);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_14005C090(a1, 0LL);
    sub_1400080D4((__int64 *)a1, v5, 0);
  }
  result = sub_14000C390(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
