/*
 * XREFs of sub_1400C6FB0 @ 0x1400C6FB0
 * Callers:
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_1400C6FB0(_DWORD *SystemArgument2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ebx

  v2 = sub_1401225EC(SystemArgument2);
  v3 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v2 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)v2 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)v2 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v2 + 4192LL) = sub_1400C70D0;
  *(_QWORD *)(*(_QWORD *)v2 + 4200LL) = v2;
  *(_QWORD *)(*(_QWORD *)v2 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)v2 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)v2 + 4248LL) = 0;
  v5 = v2;
  v6 = *(_QWORD *)v2;
  *(_DWORD *)(v6 + 4140) = SystemArgument2[302];
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = 11;
  v7 = sub_1400BD378(SystemArgument2, v5);
  sub_140122C20(SystemArgument2, v3);
  return v7;
}
