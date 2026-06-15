/*
 * XREFs of sub_140062380 @ 0x140062380
 * Callers:
 *     sub_140061228 @ 0x140061228 (sub_140061228.c)
 *     sub_140061CB0 @ 0x140061CB0 (sub_140061CB0.c)
 *     sub_140061DAC @ 0x140061DAC (sub_140061DAC.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 */

void __fastcall sub_140062380(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // r14
  unsigned __int128 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = sub_14005C090(a1, *(_QWORD *)(a1 + 8));
  v4 = (_DWORD *)(a1 + 16);
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v5 = v2 * (unsigned __int128)8uLL;
      if ( !is_mul_ok(v2, 8uLL) )
        *(_QWORD *)&v5 = -1LL;
      v6 = (_QWORD *)sub_1400499AC(v5, *((__int64 *)&v5 + 1));
      v7 = v6;
      if ( !v6 )
        sub_14004639C(-2147024882);
      memset(v6, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 24);
            v11 = *(_DWORD *)(v9 + 32) % v2;
            *(_QWORD *)(v9 + 24) = v7[v11];
            v7[(unsigned int)v11] = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      j_j__o_free(*(_QWORD *)a1);
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 16) = v2;
      sub_140007FAC(a1);
    }
    else
    {
      sub_1400080D4((__int64 *)a1, v2, 0);
    }
  }
}
