/*
 * XREFs of sub_1800956F0 @ 0x1800956F0
 * Callers:
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180095868 @ 0x180095868 (sub_180095868.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800956F0(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000D81C(a1 + 8, 192LL, 6LL, sub_1800569F0);
  sub_18000D81C(a1 + 1160, 192LL, 6LL, sub_1800569F0);
  sub_18000D81C(a1 + 2312, 192LL, 6LL, sub_1800569F0);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0LL;
  do
  {
    v7 = *(_DWORD *)(a1 + 3464);
    if ( _bittest(&v7, v6) )
      sub_180095868(a1 + 192 * v6 + 2312, a3);
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 6 );
  return a1;
}
