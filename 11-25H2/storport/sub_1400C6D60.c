/*
 * XREFs of sub_1400C6D60 @ 0x1400C6D60
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400C6238 @ 0x1400C6238 (sub_1400C6238.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C6D60(_WORD *SystemArgument2, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v7; // ebx

  SystemArgument2[28] = -1;
  v4 = sub_1401225EC(SystemArgument2);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v4 + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  *(_WORD *)(*(_QWORD *)v4 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v4 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4192LL) = sub_1400C6E90;
  *(_QWORD *)(*(_QWORD *)v4 + 4200LL) = v4;
  *(_QWORD *)(*(_QWORD *)v4 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v4 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v4 + 4248LL) = 0;
  sub_1400C6238(*(_QWORD *)v4 + 4096LL, 0, 0);
  v7 = sub_1400BD378(SystemArgument2, v5);
  sub_140122C20(SystemArgument2, v5);
  return v7;
}
