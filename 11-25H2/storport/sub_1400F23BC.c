/*
 * XREFs of sub_1400F23BC @ 0x1400F23BC
 * Callers:
 *     sub_1400C70D0 @ 0x1400C70D0 (sub_1400C70D0.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 *     sub_1400F25C0 @ 0x1400F25C0 (sub_1400F25C0.c)
 * Callees:
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 */

__int64 __fastcall sub_1400F23BC(PVOID SystemArgument2, _WORD *a2)
{
  __int64 v3; // rax

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)a2;
  a2[26] = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) = *(_DWORD *)(v3 + 4256) | 1;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~0x40u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x1000u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x2000u;
  *(_WORD *)(*(_QWORD *)a2 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)a2 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = sub_1400E8030;
  *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
  *(_QWORD *)(*(_QWORD *)a2 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a2 + 4248LL) = 0;
  *(_BYTE *)(*(_QWORD *)a2 + 4096LL) = 12;
  return sub_140122670(SystemArgument2);
}
