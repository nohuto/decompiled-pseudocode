/*
 * XREFs of sub_1400C8C34 @ 0x1400C8C34
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C8C34(PVOID SystemArgument2, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx

  v4 = sub_1401225EC(SystemArgument2);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400E90F0;
  *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
  *(_QWORD *)(*(_QWORD *)v4 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 0;
  v7 = *(_QWORD *)v4;
  v8 = *(_DWORD *)(*(_QWORD *)v4 + 4140LL);
  *(_BYTE *)(v7 + 4096) = 9;
  *(_BYTE *)(v7 + 4136) = 12;
  *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ a2) & 1;
  v9 = sub_1400BD378(SystemArgument2, v5);
  sub_140122C20(SystemArgument2, v5);
  return v9;
}
