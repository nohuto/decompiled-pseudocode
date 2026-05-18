/*
 * XREFs of sub_1800377D8 @ 0x1800377D8
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     sub_180020264 @ 0x180020264 (sub_180020264.c)
 *     sub_18002A198 @ 0x18002A198 (sub_18002A198.c)
 *     sub_18003E2DC @ 0x18003E2DC (sub_18003E2DC.c)
 */

char *__fastcall sub_1800377D8(__int64 a1)
{
  _QWORD *v2; // rcx
  char *v3; // r8
  char *v4; // r9
  __int64 v5; // rax
  char *v6; // r8
  char *v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // rcx
  char *result; // rax
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_180020264(
    *(_QWORD **)(a1 + 464),
    0,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v11 = *(_QWORD *)(a1 + 944);
  v2 = *(_QWORD **)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v11 + 1;
  sub_18002A198(
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v11);
  v3 = (char *)&unk_1801C8650;
  do
  {
    v4 = v3 - 144;
    do
    {
      v5 = sub_18003E2DC(v4 - 16);
      *v8 += v5;
      *(v8 - 1) = v5;
      v9 = v8[1];
      v4 = (char *)(v8 + 4);
      if ( v9 < v5 )
        v9 = v5;
      *((_QWORD *)v4 - 3) = v9;
      _InterlockedExchange64((volatile __int64 *)v4 - 6, 0LL);
    }
    while ( v4 - 16 != v6 );
    v3 = v6 + 160;
    result = &byte_1801C8F10;
  }
  while ( v7 != &byte_1801C8F10 );
  return result;
}
