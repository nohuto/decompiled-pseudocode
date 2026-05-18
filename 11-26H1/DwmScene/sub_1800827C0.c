/*
 * XREFs of sub_1800827C0 @ 0x1800827C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180081D50 @ 0x180081D50 (sub_180081D50.c)
 */

_QWORD *__fastcall sub_1800827C0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::VertexBuffer::`vftable';
  sub_180081D50((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
