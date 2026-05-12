/*
 * XREFs of sub_1400C6B94 @ 0x1400C6B94
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C6B94(_QWORD *SystemArgument2, char a2)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax

  v4 = -1073741808;
  v5 = 0LL;
  if ( (*(_BYTE *)(SystemArgument2[74] + 525LL) & 1) == 0 )
    return 3221225659LL;
  if ( !sub_1400BDD84((__int64)SystemArgument2, 1u, 0) || (*(_BYTE *)(v8 + 520) & 0x10) == 0 )
    goto LABEL_8;
  v9 = sub_1401225EC(v7);
  v5 = v9;
  if ( !v9 )
  {
    v4 = -1073741670;
LABEL_8:
    SystemArgument2[137] &= ~4uLL;
    goto LABEL_9;
  }
  *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v9 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v9 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v9 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  v10 = v9;
  *(_WORD *)(*(_QWORD *)v9 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v9 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v9 + 4192LL) = sub_1400C8AF0;
  *(_QWORD *)(*(_QWORD *)v9 + 4200LL) = v9;
  *(_QWORD *)(*(_QWORD *)v9 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v9 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v9 + 4248LL) = 0;
  v11 = *(_QWORD *)v9;
  *(_BYTE *)(v11 + 4136) = 6;
  v12 = *(_DWORD *)(v11 + 4136) & 0xFFFFFBFF;
  *(_BYTE *)(v11 + 4096) = 10;
  *(_DWORD *)(v11 + 4136) = v12 | 0x300;
  v4 = sub_1400BD378(SystemArgument2, v10);
  if ( v4 < 0 )
    goto LABEL_8;
LABEL_9:
  sub_140122C20(SystemArgument2, v5);
  return (unsigned int)v4;
}
