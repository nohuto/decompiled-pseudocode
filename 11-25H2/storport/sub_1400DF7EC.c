/*
 * XREFs of sub_1400DF7EC @ 0x1400DF7EC
 * Callers:
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 * Callees:
 *     sub_1400DB614 @ 0x1400DB614 (sub_1400DB614.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     sub_1400E0A18 @ 0x1400E0A18 (sub_1400E0A18.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 */

NTSTATUS __fastcall sub_1400DF7EC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // r8

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v5 = *(_QWORD *)(v3 + 128);
    if ( *(_WORD *)(a1 + 136) && *(_DWORD *)(a1 + 120) == 5 && (*(_DWORD *)(v3 + 136) & 0x4000LL) != 0 )
      sub_1400E3180();
    sub_1400E69E8(a1, a2, a3);
    sub_1400E0A18(a1);
    result = sub_1400DEB08(a1);
    if ( (byte_1401694FA & 2) != 0 )
      return sub_1400DB614(
               v5 + 1032,
               v7,
               v8,
               *(_DWORD *)(v5 + 56),
               v5 + 1032,
               *(const wchar_t **)(v5 + 1016),
               *(const char **)(v3 + 792),
               *(_WORD *)(v3 + 4),
               *(_WORD *)(a1 + 136));
  }
  return result;
}
