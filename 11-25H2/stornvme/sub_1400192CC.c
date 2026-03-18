/*
 * XREFs of sub_1400192CC @ 0x1400192CC
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400192CC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 v7; // r10

  sub_140032C80(a2, 0LL, 88LL);
  *(_DWORD *)a2 = 88;
  v4 = 0LL;
  *(_DWORD *)(a2 + 4) = 88;
  *(_BYTE *)(a2 + 8) = (*(_BYTE *)(a1 + 21) & 0x20) != 0;
  *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 22);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 3784);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 3792);
  *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 320);
  *(_WORD *)(a2 + 38) = *(_WORD *)(a1 + 322);
  *(_WORD *)(a2 + 40) = *(_WORD *)(a1 + 324);
  *(_WORD *)(a2 + 42) = *(_WORD *)(a1 + 326);
  *(_WORD *)(a2 + 44) = *(_WORD *)(a1 + 328);
  *(_WORD *)(a2 + 46) = *(_WORD *)(a1 + 330);
  *(_WORD *)(a2 + 48) = *(_WORD *)(a1 + 332);
  *(_WORD *)(a2 + 50) = *(_WORD *)(a1 + 334);
  *(_WORD *)(a2 + 52) = *(_WORD *)(a1 + 952);
  *(_WORD *)(a2 + 54) = *(_WORD *)(a1 + 954);
  *(_WORD *)(a2 + 56) = *(_WORD *)(a1 + 976);
  *(_WORD *)(a2 + 58) = *(_WORD *)(a1 + 978);
  *(_WORD *)(a2 + 60) = *(_WORD *)(a1 + 980);
  result = *(unsigned __int16 *)(a1 + 982);
  for ( *(_WORD *)(a2 + 62) = result; (unsigned int)v4 < *(_DWORD *)(a1 + 224); v4 = (unsigned int)(v4 + 1) )
  {
    result = *(_QWORD *)(a1 + 8 * v4 + 1672);
    if ( result )
    {
      v6 = (_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 64) += *(_QWORD *)(result + 24);
      v7 = 4LL;
      do
      {
        result = *(unsigned int *)((char *)v6 + -40 - a2 + *(_QWORD *)(a1 + 8 * v4 + 1672));
        *v6++ += result;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
