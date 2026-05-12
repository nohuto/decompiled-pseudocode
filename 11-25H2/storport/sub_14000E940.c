/*
 * XREFs of sub_14000E940 @ 0x14000E940
 * Callers:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 * Callees:
 *     sub_14000EB00 @ 0x14000EB00 (sub_14000EB00.c)
 *     sub_14000EB30 @ 0x14000EB30 (sub_14000EB30.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 */

__int64 __fastcall sub_14000E940(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // cl
  __int64 v7; // rax

  if ( (unsigned int)sub_14000EB00(a1) )
    return 1LL;
  if ( *(_BYTE *)(v4 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v4 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v4 + 24) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v4 + 38) )
    return 5LL;
  if ( *(_DWORD *)(v4 + 16) || (unsigned int)(*(_QWORD *)(v4 + 88) / 0x100000000LL) )
  {
    v7 = sub_14000EB30(a1);
    if ( a2 != v7 && (*(_BYTE *)(v7 + 22) & 1) != 0 && (*(_BYTE *)(a2 + 22) & 6) == 0 )
      return 6LL;
  }
  v5 = *(_BYTE *)(a2 + 22);
  if ( (v5 & 1) != 0 && (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
    return 7LL;
  if ( *(_BYTE *)(a1 + 39) && (v5 & 8) == 0 )
    return 8LL;
  if ( (v5 & 0x10) != 0 )
    return 9LL;
  if ( (v5 & 0x40) != 0 )
    return 10LL;
  if ( (v5 & 1) == 0 || !*(_QWORD *)(a1 - 688) )
    return 0LL;
  sub_140021810(a1 - 720, 0LL);
  *(_BYTE *)(a2 + 20) |= 4u;
  return (unsigned __int8)sub_14009210C(a1 - 720) != 0 ? 7 : 0;
}
