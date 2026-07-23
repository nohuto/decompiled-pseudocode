/*
 * XREFs of ArbFindSuitableRange @ 0x14078B240
 * Callers:
 *     IopMemFindSuitableRange @ 0x1407A94A0 (IopMemFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ArbShareDriverExclusive @ 0x14078C39C (ArbShareDriverExclusive.c)
 *     RtlFindRange @ 0x140AAEE80 (RtlFindRange.c)
 */

char __fastcall ArbFindSuitableRange(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v4; // r10
  __int64 v7; // r9
  int v8; // ecx
  unsigned int v9; // ecx
  char v10; // r8
  int v11; // edx
  int v12; // ecx
  char v13; // si

  v2 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 > v2 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v4;
    return 1;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL);
  if ( !v8 || v8 == 2 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v9 = *(unsigned __int16 *)(a2 + 64);
  v10 = *(_BYTE *)(a2 + 67);
  v11 = *(_DWORD *)(v7 + 36);
  v12 = (v9 >> 2) & 2;
  v13 = v12 | 1;
  if ( (v11 & 1) == 0 )
    v13 = v12;
  if ( (v11 & 8) != 0 )
  {
    v10 |= 0x40u;
    *(_BYTE *)(a2 + 67) = v10;
  }
  if ( (int)RtlFindRange(a1[6], v4, v2, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24), v13, v10, a1[41], a1[42], a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return guard_dispatch_icall_no_overrides((__int64)a1, a2);
}
