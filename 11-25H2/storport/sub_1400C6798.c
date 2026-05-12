/*
 * XREFs of sub_1400C6798 @ 0x1400C6798
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C6798(_QWORD *SystemArgument2)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // ebp

  v1 = SystemArgument2[74];
  v3 = sub_1401225EC(SystemArgument2);
  v4 = (__int64 *)v3;
  if ( !v3 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = sub_1400E90F0;
  *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
  *(_QWORD *)(*(_QWORD *)v3 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v3 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v3 + 4248LL) = 0;
  v6 = SystemArgument2[131];
  v7 = *(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F;
  if ( v6 )
    v7 &= *(_DWORD *)(v6 + 28);
  v8 = *v4;
  *(_BYTE *)(v8 + 4096) = 9;
  *(_BYTE *)(v8 + 4136) = 11;
  *(_DWORD *)(v8 + 4140) = v7;
  v9 = sub_1400BD378(SystemArgument2, (__int64)v4);
  if ( v9 >= 0 )
    *((_DWORD *)SystemArgument2 + 302) = v7;
  sub_140122C20(SystemArgument2, v4);
  return (unsigned int)v9;
}
