/*
 * XREFs of sub_1400C7BB0 @ 0x1400C7BB0
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C7BB0(_QWORD *SystemArgument2, char a2)
{
  __int64 v2; // rax
  char v5; // bl
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _BYTE *v11; // rax

  v2 = SystemArgument2[131];
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v5 = *(_BYTE *)(v2 + 12);
    if ( !v5 )
      v5 = 0;
    if ( *(_BYTE *)(v2 + 13) )
      v6 = *(_BYTE *)(v2 + 13);
  }
  v7 = sub_1401225EC(SystemArgument2);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)(*(_QWORD *)v7 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v7 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v7 + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)v7 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    v10 = v7;
    *(_WORD *)(*(_QWORD *)v7 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v7 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v7 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v7 + 4200LL) = v7;
    *(_QWORD *)(*(_QWORD *)v7 + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v7 + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v7 + 4248LL) = 0;
    v11 = *(_BYTE **)v7;
    v11[4096] = 9;
    v11[4136] = 8;
    v11[4140] = v6;
    v11[4141] = v5;
    v9 = sub_1400BD378(SystemArgument2, v10);
  }
  else
  {
    v9 = -1073741670;
  }
  sub_140122C20(SystemArgument2, v8);
  return v9;
}
