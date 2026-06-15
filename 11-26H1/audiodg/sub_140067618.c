/*
 * XREFs of sub_140067618 @ 0x140067618
 * Callers:
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 *     sub_140068AA8 @ 0x140068AA8 (sub_140068AA8.c)
 * Callees:
 *     sub_140017560 @ 0x140017560 (sub_140017560.c)
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140080048 @ 0x140080048 (sub_140080048.c)
 *     sub_14008041C @ 0x14008041C (sub_14008041C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140067618(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = sub_140049338(48LL, (__int64)&unk_1400C75FC);
  v9 = v4;
  if ( v4 )
  {
    v6 = sub_140080048(v4);
    v9 = 0LL;
    v5 = sub_14008041C(v6, *a2);
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( sub_14001FC10(&stru_1400C6FD8, &stru_1400C6598) )
      {
        *a1 = v6;
        sub_1400B6010(v6);
        v5 = 0;
      }
      else if ( sub_14001FC10(v7, v7) )
      {
        *a1 = v6;
        v5 = 0;
        sub_1400B6010(v6);
      }
      else
      {
        v5 = -2147467262;
      }
    }
    if ( v6 )
      sub_140017560(v6);
  }
  else
  {
    v5 = -2147024882;
  }
  sub_1400454AC(&v9);
  return (unsigned int)v5;
}
