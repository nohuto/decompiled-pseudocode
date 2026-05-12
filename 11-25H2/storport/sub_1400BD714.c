/*
 * XREFs of sub_1400BD714 @ 0x1400BD714
 * Callers:
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 * Callees:
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400BD714(_QWORD *SystemArgument2, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v3 = SystemArgument2[131];
  if ( v3 && (*(_DWORD *)(v3 + 24) & 0x40000) != 0 )
    return 3221225473LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v8 = sub_1401225EC(SystemArgument2);
  v9 = v8;
  if ( !v8 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 2u;
  *(_DWORD *)(*(_QWORD *)v8 + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)v8 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v8 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v8 + 4160LL) = a2;
  *(_QWORD *)(*(_QWORD *)v8 + 4168LL) = a3;
  *(_DWORD *)(*(_QWORD *)v8 + 4248LL) = 4096;
  *(_QWORD *)(*(_QWORD *)v8 + 4192LL) = sub_1400E90F0;
  *(_QWORD *)(*(_QWORD *)v8 + 4200LL) = v8;
  sub_1400BC9C0((__int64)SystemArgument2, *(_QWORD *)v8 + 4096LL, 2, 4096LL, v11, 0, a3, 0, 0);
  v10 = sub_1400BD378(SystemArgument2, v9);
  sub_140122C20(SystemArgument2, v9);
  return v10;
}
