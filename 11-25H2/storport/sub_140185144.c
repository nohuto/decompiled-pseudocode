/*
 * XREFs of sub_140185144 @ 0x140185144
 * Callers:
 *     sub_1400BED78 @ 0x1400BED78 (sub_1400BED78.c)
 * Callees:
 *     sub_140002FF8 @ 0x140002FF8 (sub_140002FF8.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140031D4C @ 0x140031D4C (sub_140031D4C.c)
 *     sub_1400386AC @ 0x1400386AC (sub_1400386AC.c)
 *     sub_140040914 @ 0x140040914 (sub_140040914.c)
 *     sub_140053318 @ 0x140053318 (sub_140053318.c)
 *     sub_140185240 @ 0x140185240 (sub_140185240.c)
 */

__int64 __fastcall sub_140185144(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  __int64 result; // rax
  const wchar_t *v8; // r10

  v2 = *(_QWORD *)(a2 + 8);
  sub_1400386AC(v2, *(_DWORD *)(a2 + 4));
  sub_140185240(v4, v3 + 32);
  v5 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v5 | 4;
  sub_140040914(v2 + 720);
  sub_140021810(v2, 1);
  sub_140031D4C(*(_QWORD *)(v2 + 24), (_QWORD *)v2);
  sub_140053318(v2);
  v6 = *(_QWORD *)(v2 + 24);
  result = *(unsigned int *)(v6 + 4276);
  *(_DWORD *)(v2 + 3432) = result;
  if ( (byte_1401694F6 & 1) != 0 )
  {
    v8 = (const wchar_t *)&unk_140149394;
    if ( *(_QWORD *)(v6 + 5080) )
      v8 = *(const wchar_t **)(v6 + 5080);
    return sub_140002FF8(
             v2 + 177,
             v2 + 168,
             v6 + 5064,
             *(const wchar_t **)(v6 + 4720),
             *(_DWORD *)(v6 + 56),
             v6 + 5064,
             0,
             0,
             *(_BYTE *)(v2 + 104),
             (const char *)(v2 + 168),
             (const char *)(v2 + 177),
             (const char *)(v2 + 242),
             v8);
  }
  return result;
}
