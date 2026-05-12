/*
 * XREFs of sub_1400C8D5C @ 0x1400C8D5C
 * Callers:
 *     sub_1400EF95C @ 0x1400EF95C (sub_1400EF95C.c)
 *     sub_14012B700 @ 0x14012B700 (sub_14012B700.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C8D5C(_QWORD *SystemArgument2, unsigned __int8 a2)
{
  _DWORD *v5; // roff
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx

  if ( (SystemArgument2[121] & 8) != 0 )
    return 3221225486LL;
  if ( (SystemArgument2[121] & 4) != 0 )
  {
    v5 = (_DWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 176LL);
    *v5 |= 0x20000u;
    *(_DWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL)
                                                                                + 176LL) ^ (a2 << 18)) & 0x40000;
    return 0LL;
  }
  else
  {
    v6 = sub_1401225EC(SystemArgument2);
    v7 = v6;
    if ( v6 )
    {
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)v6 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_1400E90F0;
      *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
      *(_QWORD *)(*(_QWORD *)v6 + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v6 + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v6 + 4248LL) = 0;
      v8 = *(_QWORD *)v6;
      v9 = *(_DWORD *)(*(_QWORD *)v6 + 4140LL);
      *(_BYTE *)(v8 + 4096) = 9;
      *(_BYTE *)(v8 + 4136) = 17;
      *(_DWORD *)(v8 + 4140) = v9 ^ ((unsigned __int8)v9 ^ a2) & 1;
      v10 = sub_1400BD378(SystemArgument2, v7);
      sub_140122C20(SystemArgument2, v7);
      return v10;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
