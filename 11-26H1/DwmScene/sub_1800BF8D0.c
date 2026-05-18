/*
 * XREFs of sub_1800BF8D0 @ 0x1800BF8D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 */

_QWORD *__fastcall sub_1800BF8D0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::D3D11::RenderOutputD3D11Window::`vftable';
  sub_1800BF7A8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
