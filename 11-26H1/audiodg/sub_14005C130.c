/*
 * XREFs of sub_14005C130 @ 0x14005C130
 * Callers:
 *     sub_14005BF10 @ 0x14005BF10 (sub_14005BF10.c)
 *     sub_14005BF90 @ 0x14005BF90 (sub_14005BF90.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 */

void __fastcall sub_14005C130(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  _DWORD *v4; // r14
  __int64 v5; // r15
  unsigned __int128 v6; // rax
  void *v7; // rsi
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+68h] [rbp+10h]
  void *v15; // [rsp+70h] [rbp+18h]
  _DWORD *v16; // [rsp+78h] [rbp+20h]

  v14 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = sub_14005C090(a1, *(_QWORD *)(a1 + 8));
    v14 = v2;
  }
  v4 = (_DWORD *)(v3 + 16);
  v16 = (_DWORD *)(v3 + 16);
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      v5 = v2;
      v12 = v2;
      v6 = v2 * (unsigned __int128)8uLL;
      if ( !is_mul_ok(v2, 8uLL) )
        *(_QWORD *)&v6 = -1LL;
      try
      {
        v7 = (void *)sub_1400499AC(v6, *((__int64 *)&v6 + 1));
        v15 = v7;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v14;
        v7 = v15;
        v4 = v16;
        v5 = v12;
      }
      if ( !v7 )
        sub_14004639C(-2147024882);
      memset(v7, 0, 8 * v5);
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 16);
            v11 = *(_DWORD *)(v9 + 24) % v2;
            *(_QWORD *)(v9 + 16) = *((_QWORD *)v7 + v11);
            *((_QWORD *)v7 + (unsigned int)v11) = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      j_j__o_free(*(_QWORD *)v3);
      *(_QWORD *)v3 = v7;
      *(_DWORD *)(v3 + 16) = v2;
      sub_140007FAC(v3);
    }
    else
    {
      sub_1400080D4((__int64 *)v3, v2, 0);
    }
  }
}
