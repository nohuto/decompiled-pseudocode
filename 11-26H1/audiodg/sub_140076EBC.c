/*
 * XREFs of sub_140076EBC @ 0x140076EBC
 * Callers:
 *     sub_140076414 @ 0x140076414 (sub_140076414.c)
 * Callees:
 *     sub_14001BE38 @ 0x14001BE38 (sub_14001BE38.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140076EBC(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)v2 = &off_1400B8DE0;
    sub_14001BE38((_QWORD *)(v2 + 8));
    *(_DWORD *)(v3 + 44) = 1;
    *(_QWORD *)v3 = off_1400BD9E0;
    *(_QWORD *)(v3 + 8) = off_1400BD998;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *(_QWORD *)v3 = off_1400BDA08;
    *(_QWORD *)(v3 + 8) = off_1400BD998;
    *(_QWORD *)(v3 + 48) = 0LL;
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v3;
    v5 = 0LL;
  }
  sub_1400454AC(&v5);
  return a1;
}
