/*
 * XREFs of sub_1400DAFAC @ 0x1400DAFAC
 * Callers:
 *     sub_1401899F8 @ 0x1401899F8 (sub_1401899F8.c)
 *     sub_14018B8C8 @ 0x14018B8C8 (sub_14018B8C8.c)
 *     sub_14018DB90 @ 0x14018DB90 (sub_14018DB90.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

void *__fastcall sub_1400DAFAC(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rdx
  __int64 v4; // r8
  _OWORD *v5; // rax
  __int128 v6; // xmm1

  *(_DWORD *)a2 = 34603009;
  if ( *(_BYTE *)(a1 + 12) )
    *(_DWORD *)(a2 + 4) |= 1u;
  v3 = (_OWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 4);
  v4 = 2LL;
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 8);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + 10);
  v5 = (_OWORD *)(a2 + 16);
  do
  {
    *v5 = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    v5[3] = v3[3];
    v5[4] = v3[4];
    v5[5] = v3[5];
    v5[6] = v3[6];
    v5 += 8;
    v6 = v3[7];
    v3 += 8;
    *(v5 - 1) = v6;
    --v4;
  }
  while ( v4 );
  return memmove((void *)(a2 + 272), (const void *)(a1 + 276), *(unsigned __int16 *)(a1 + 10));
}
