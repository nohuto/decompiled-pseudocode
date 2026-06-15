/*
 * XREFs of sub_14007FF28 @ 0x14007FF28
 * Callers:
 *     sub_1400801B0 @ 0x1400801B0 (sub_1400801B0.c)
 * Callees:
 *     sub_140016A40 @ 0x140016A40 (sub_140016A40.c)
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005BA10 @ 0x14005BA10 (sub_14005BA10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007FF28(__int64 *a1, void **a2, int *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  _DWORD *v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = sub_140049338(48LL, (__int64)&unk_1400C75FC);
  v8 = v7;
  v12 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = off_1400BE460;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 44) = 1;
    *(_QWORD *)v7 = off_1400BE4A0;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *(_QWORD *)v8 = off_1400BE4E8;
    v12 = 0LL;
    v9 = *a3;
    sub_140016A40((void **)(v8 + 16), a2);
    *(_DWORD *)(v8 + 32) = v9;
    *a1 = 0LL;
    if ( sub_14001FC10(dword_1400C7098, &stru_1400C6598) || sub_14001FC10(v10, v10) )
    {
      *a1 = v8;
      sub_1400B6010(v8);
    }
    else
    {
      v6 = -2147467262;
    }
    sub_14005BA10(v8);
  }
  else
  {
    v6 = -2147024882;
  }
  sub_1400454AC(&v12);
  return v6;
}
