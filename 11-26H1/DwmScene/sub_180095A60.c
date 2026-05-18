/*
 * XREFs of sub_180095A60 @ 0x180095A60
 * Callers:
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180095BDC @ 0x180095BDC (sub_180095BDC.c)
 */

__int64 __fastcall sub_180095A60(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // ebx
  int v7; // eax

  *(_QWORD *)a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000D81C(a1 + 8, 256LL, 6LL, sub_180056A30);
  sub_18000D81C(a1 + 1544, 256LL, 6LL, sub_180056A30);
  sub_18000D81C(a1 + 3080, 256LL, 6LL, sub_180056A30);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    v7 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v7, i) )
      sub_180095BDC(a1 + ((unsigned __int64)i << 8) + 3080, a3 + 192);
  }
  return a1;
}
