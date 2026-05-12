/*
 * XREFs of sub_1400DF70C @ 0x1400DF70C
 * Callers:
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 */

__int64 __fastcall sub_1400DF70C(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(a1 + 568) == 2 )
  {
    v4 = sub_1400E5218(a1, 0, 11, a4, 0);
    if ( v4 < 0 )
      sub_1400A870C(
        a1,
        1,
        2,
        (__int64)L"Disabling Async Event failed",
        (void *)&dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
  }
  return (unsigned int)v4;
}
