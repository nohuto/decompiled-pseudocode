/*
 * XREFs of sub_140092C78 @ 0x140092C78
 * Callers:
 *     sub_140092F04 @ 0x140092F04 (sub_140092F04.c)
 * Callees:
 *     sub_140017560 @ 0x140017560 (sub_140017560.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_140092E6C @ 0x140092E6C (sub_140092E6C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140092C78(_QWORD *a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = sub_140049338(32LL, (__int64)&unk_1400C75FC);
  v7 = (_QWORD *)v6;
  v11 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = off_1400BF2D8;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v7 = off_1400BF2A8;
    v7[2] = 0LL;
    v7[3] = 0LL;
    v11 = 0LL;
    v8 = sub_140092E6C(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      *a1 = 0LL;
      if ( sub_140088ED0(dword_1400CC440, &stru_1400C6598) )
      {
        *a1 = v7;
        sub_1400B6010(v7);
        v8 = 0;
      }
      else if ( sub_140088ED0(v9, v9) )
      {
        *a1 = v7;
        v8 = 0;
        sub_1400B6010(v7);
      }
      else
      {
        v8 = -2147467262;
      }
    }
    sub_140017560((__int64)v7);
  }
  else
  {
    v8 = -2147024882;
  }
  sub_1400454AC(&v11);
  return (unsigned int)v8;
}
