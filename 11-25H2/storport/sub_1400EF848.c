/*
 * XREFs of sub_1400EF848 @ 0x1400EF848
 * Callers:
 *     sub_1400EE8C0 @ 0x1400EE8C0 (sub_1400EE8C0.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400EF848(PVOID SystemArgument2, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx

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
  *(_BYTE *)(v7 + 4096) = 0;
  *(_WORD *)(v7 + 4136) = a2;
  v8 = sub_1400BD378(SystemArgument2, v5);
  sub_140122C20(SystemArgument2, v5);
  return v8;
}
