/*
 * XREFs of sub_140031B18 @ 0x140031B18
 * Callers:
 *     sub_140056120 @ 0x140056120 (sub_140056120.c)
 * Callees:
 *     sub_140002FF8 @ 0x140002FF8 (sub_140002FF8.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140031C68 @ 0x140031C68 (sub_140031C68.c)
 *     sub_140031D4C @ 0x140031D4C (sub_140031D4C.c)
 *     sub_140053318 @ 0x140053318 (sub_140053318.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_140031B18(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  char v6; // al
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // eax
  __int64 v10; // r9
  const wchar_t *v11; // r8

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 104) = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 96) = 1;
  *(_DWORD *)(v2 + 100) = 4;
  *(_WORD *)(v2 + 98) = *(_WORD *)(v5 + 56);
  sub_140031C68(v2, a2 + 32);
  v6 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v6 | 4;
  *(_BYTE *)(v2 + 757) = 1;
  v7 = *(_QWORD *)(v2 + 808);
  do
  {
    if ( (v7 & 3) != 0 )
      break;
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 808), v7 | 2, v7);
  }
  while ( v8 != v7 );
  sub_140021810(v2, 1);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4880LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4872LL), *(unsigned __int8 *)(a2 + 4)) )
  {
    *(_DWORD *)(v2 + 1952) |= 1u;
  }
  sub_140031D4C(*(_QWORD *)(v2 + 24), v2);
  sub_140053318(v2);
  *(_DWORD *)(v2 + 3432) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4276LL);
  LOBYTE(v9) = sub_1400215B0(v2, 12);
  if ( (_BYTE)v9 )
  {
    v9 = sub_140021760(*(_QWORD *)(v2 + 24) + 376LL);
    if ( v9 >= 0 )
      LOBYTE(v9) = -1;
  }
  if ( (byte_1401694F6 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v2 + 24);
    v11 = (const wchar_t *)&unk_140149394;
    if ( *(_QWORD *)(v10 + 5080) )
      v11 = *(const wchar_t **)(v10 + 5080);
    LOBYTE(v9) = sub_140002FF8(
                   v2 + 177,
                   v2 + 168,
                   (__int64)v11,
                   *(const wchar_t **)(v10 + 4720),
                   *(_DWORD *)(v10 + 56),
                   v10 + 5064,
                   *(_BYTE *)(v2 + 104),
                   *(_BYTE *)(v2 + 105),
                   *(_BYTE *)(v2 + 106),
                   (const char *)(v2 + 168),
                   (const char *)(v2 + 177),
                   (const char *)(v2 + 242),
                   v11);
  }
  return v9;
}
