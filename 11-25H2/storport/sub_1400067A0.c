/*
 * XREFs of sub_1400067A0 @ 0x1400067A0
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 *     sub_1400A24F0 @ 0x1400A24F0 (sub_1400A24F0.c)
 * Callees:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 */

__int64 __fastcall sub_1400067A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v12; // rdx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v7 = *(unsigned int *)(v6 + 20);
    v8 = *(_DWORD *)(v6 + 24);
  }
  else
  {
    v8 = *(_DWORD *)(v6 + 12);
    v7 = *(unsigned __int8 *)(v6 + 2);
  }
  if ( (qword_140168458 & 0x20) != 0 )
    sub_14000FB90(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
      0LL,
      0LL,
      0LL);
  v9 = (v8 >> 17) & 4 | 2;
  if ( (v8 & 0x10) == 0 )
    v9 = (v8 >> 17) & 4;
  if ( (v8 & 0x102) != 0x102 && (v8 & 0x80010) == 0 )
  {
    if ( (unsigned int)v7 > 0x20 || (v12 = 0x1000D0000LL, !_bittest64(&v12, v7)) )
      v3 = 1;
  }
  v10 = v9 | 1;
  if ( !v3 )
    v10 = v9;
  sub_1400068E0(a1, a2, v10);
  return 259LL;
}
