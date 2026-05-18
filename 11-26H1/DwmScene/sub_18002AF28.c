/*
 * XREFs of sub_18002AF28 @ 0x18002AF28
 * Callers:
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029AC0 @ 0x180029AC0 (sub_180029AC0.c)
 */

_QWORD *__fastcall sub_18002AF28(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_180029AC0((__int64)(a1 + 1), *(_DWORD *)(*a2 + 48LL));
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v4 = a2[1];
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
