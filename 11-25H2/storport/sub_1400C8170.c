/*
 * XREFs of sub_1400C8170 @ 0x1400C8170
 * Callers:
 *     sub_14012B4E0 @ 0x14012B4E0 (sub_14012B4E0.c)
 *     sub_14012B5F8 @ 0x14012B5F8 (sub_14012B5F8.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_14012B2E0 @ 0x14012B2E0 (sub_14012B2E0.c)
 */

__int64 __fastcall sub_1400C8170(_QWORD *SystemArgument2, unsigned __int8 a2)
{
  __int64 v4; // rax
  _WORD *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx

  v4 = sub_1401225EC(SystemArgument2);
  v5 = (_WORD *)v4;
  if ( !v4 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x40u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x800u;
  *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400E90F0;
  *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
  *(_QWORD *)(*(_QWORD *)v4 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 0;
  v7 = *(_QWORD *)(SystemArgument2[16] + 160LL);
  LOBYTE(v7) = *(_BYTE *)(v7 + 180);
  sub_14012B2E0(SystemArgument2, v7);
  LOBYTE(v8) = a2;
  v10 = sub_14012B2E0(v9, v8);
  if ( v10
    && v11
    && (v12 = *(unsigned int *)(v10 + 4), v13 = *(unsigned int *)(v11 + 8), (unsigned __int64)(v12 + v13) <= 0xF4240)
    && (unsigned int)(v13 + v12) >= 0x1E8480 )
  {
    v14 = ((int)v13 + (int)v12) / 0xF4240u;
  }
  else
  {
    LOWORD(v14) = 1;
  }
  v5[26] = v14;
  v15 = *(_QWORD *)v5;
  v16 = *(_DWORD *)(*(_QWORD *)v5 + 4140LL);
  *(_BYTE *)(v15 + 4096) = 9;
  *(_BYTE *)(v15 + 4136) = 2;
  *(_DWORD *)(v15 + 4140) = v16 ^ ((unsigned __int8)v16 ^ a2) & 0x1F;
  v17 = sub_1400BD378(SystemArgument2, (__int64)v5);
  sub_140122C20(SystemArgument2, v5);
  return v17;
}
