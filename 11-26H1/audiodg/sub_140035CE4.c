/*
 * XREFs of sub_140035CE4 @ 0x140035CE4
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140035CE4(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // ax

  if ( a1 )
  {
    if ( *(_WORD *)a1 == 1 )
    {
      *(_WORD *)a1 = 3;
      goto LABEL_11;
    }
    if ( *(_WORD *)a1 == 0xFFFE )
    {
      v1 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 24) == 0x10000000000001LL )
        v1 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
      if ( !v1 && (*(_BYTE *)(a1 + 18) & 7) == 0 )
      {
        *(_WORD *)(a1 + 18) = 32;
        *(_OWORD *)(a1 + 24) = xmmword_1400C57D0;
LABEL_11:
        v2 = *(_WORD *)(a1 + 2);
        *(_WORD *)(a1 + 14) = 32;
        v2 *= 4;
        *(_WORD *)(a1 + 12) = v2;
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4) * v2;
      }
    }
  }
}
