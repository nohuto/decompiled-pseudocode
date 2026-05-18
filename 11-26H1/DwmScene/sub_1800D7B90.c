/*
 * XREFs of sub_1800D7B90 @ 0x1800D7B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 */

_QWORD *__fastcall sub_1800D7B90(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::GpuQuery::`vftable';
  sub_180027BC8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
