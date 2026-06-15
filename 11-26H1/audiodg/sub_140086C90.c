/*
 * XREFs of sub_140086C90 @ 0x140086C90
 * Callers:
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140087294 @ 0x140087294 (sub_140087294.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140086C90(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v5 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    v3 = sub_140087294(v2);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v3;
    v5 = 0LL;
  }
  sub_1400454AC(&v5);
  return a1;
}
