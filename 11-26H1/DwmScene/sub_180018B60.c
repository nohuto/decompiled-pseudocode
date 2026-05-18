/*
 * XREFs of sub_180018B60 @ 0x180018B60
 * Callers:
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     sub_18001BBE0 @ 0x18001BBE0 (sub_18001BBE0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 */

_QWORD *__fastcall sub_180018B60(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  sub_180025C5C();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
