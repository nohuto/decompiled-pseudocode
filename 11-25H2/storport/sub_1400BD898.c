/*
 * XREFs of sub_1400BD898 @ 0x1400BD898
 * Callers:
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400BD898(PVOID SystemArgument2, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( !a5 || !a2 || !a3 )
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
  v11 = *(_QWORD *)v8 + 4096LL;
  *(_BYTE *)v11 = 6;
  *(_DWORD *)(v11 + 4) = a5;
  *(_QWORD *)(v11 + 24) = a3;
  *(_BYTE *)(v11 + 40) = 0;
  v12 = sub_1400BD378(SystemArgument2, v9);
  sub_140122C20(SystemArgument2, v9);
  return v12;
}
