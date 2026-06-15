/*
 * XREFs of sub_140060664 @ 0x140060664
 * Callers:
 *     sub_14006B0D0 @ 0x14006B0D0 (sub_14006B0D0.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004FC58 @ 0x14004FC58 (sub_14004FC58.c)
 *     sub_14006083C @ 0x14006083C (sub_14006083C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140060664(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi
  _QWORD *v14; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (_QWORD *)sub_140049338(88LL, (__int64)&unk_1400C75FC);
  v11 = v10;
  v14 = v10;
  if ( v10 )
  {
    sub_14004FC58(v10);
    *v11 = off_1400BC490;
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[8] = 0LL;
    v11[9] = 0LL;
    *((_WORD *)v11 + 40) = 0;
    *((_DWORD *)v11 + 21) = 0;
    v14 = 0LL;
    v12 = sub_14006083C((_DWORD)v11, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
      v12 = sub_1400B6010(v11);
    sub_1400B6010(v11);
  }
  else
  {
    v12 = -2147024882;
  }
  sub_1400454AC((__int64 *)&v14);
  return (unsigned int)v12;
}
