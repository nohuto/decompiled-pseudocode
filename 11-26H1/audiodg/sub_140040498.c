/*
 * XREFs of sub_140040498 @ 0x140040498
 * Callers:
 *     sub_14004392C @ 0x14004392C (sub_14004392C.c)
 * Callees:
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004FC58 @ 0x14004FC58 (sub_14004FC58.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140040498(_QWORD *a1, __int64 a2, _DWORD **a3, __int64 *a4, __int64 *a5, int *a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  *a1 = 0LL;
  v8 = sub_140049338(48LL, &unk_1400C75FC);
  v9 = v8;
  if ( !v8 )
    return 2147942414LL;
  sub_14004FC58(v8);
  *(_QWORD *)v9 = off_1400BB740;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_DWORD *)(v9 + 40) = 0;
  *(_DWORD *)(v9 + 44) = 1094930515;
  v13 = 0LL;
  v12 = sub_140028E18(v9, v11, *a3, *a4, *a5, *a6);
  if ( v12 >= 0 )
    v12 = sub_1400B6010(v9);
  sub_1400B6010(v9);
  sub_1400454AC(&v13);
  return (unsigned int)v12;
}
