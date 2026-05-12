/*
 * XREFs of sub_1400C831C @ 0x1400C831C
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C831C(_QWORD *SystemArgument2, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // eax

  v2 = 0;
  v5 = 0LL;
  if ( (*(_BYTE *)(SystemArgument2[74] + 525LL) & 1) != 0 )
  {
    v6 = SystemArgument2[137];
    if ( (v6 & 2) != 0
      && (v6 & 4) == 0
      && (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned __int64)*((unsigned int *)SystemArgument2 + 34) >> 19)) & 1) != 0 )
    {
      v7 = sub_1401225EC(SystemArgument2);
      v5 = v7;
      if ( v7 )
      {
        *(_DWORD *)(*(_QWORD *)v7 + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)v7 + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)v7 + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)v7 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*(_QWORD *)v7 + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)v7 + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)v7 + 4192LL) = sub_1400C84B0;
        *(_QWORD *)(*(_QWORD *)v7 + 4200LL) = v7;
        *(_QWORD *)(*(_QWORD *)v7 + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)v7 + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)v7 + 4248LL) = 0;
        v8 = *(_QWORD *)v7;
        v9 = SystemArgument2[137] & 1;
        v10 = *(_DWORD *)(*(_QWORD *)v7 + 4140LL) & 0xFFFFFFFE;
        *(_BYTE *)(v8 + 4096) = 9;
        *(_BYTE *)(v8 + 4136) = 6;
        *(_DWORD *)(v8 + 4140) = v9 | v10;
        v2 = sub_1400BD378(SystemArgument2, v5);
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v2 = -1073741637;
  }
  sub_140122C20(SystemArgument2, v5);
  return v2;
}
