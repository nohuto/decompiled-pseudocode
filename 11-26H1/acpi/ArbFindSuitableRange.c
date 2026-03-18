/*
 * XREFs of ArbFindSuitableRange @ 0x1400D0CA0
 * Callers:
 *     AcpiMemarbFindSuitableRange @ 0x1400B1DC0 (AcpiMemarbFindSuitableRange.c)
 *     IrqArbFindSuitableRange @ 0x1400D0C00 (IrqArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1400D15F0 (IrqArbpFindSuitableRangeMsi.c)
 * Callees:
 *     RtlFindRange_0 @ 0x140055DAF (RtlFindRange_0.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ArbShareDriverExclusive @ 0x1400BFCCC (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r11
  ULONGLONG v4; // r10
  __int64 v7; // r9
  int v8; // ecx
  unsigned int v9; // ecx
  UCHAR AttributeAvailableMask; // r8
  int v11; // edx
  int v12; // ecx
  ULONG Flags; // esi

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
  AttributeAvailableMask = *(_BYTE *)(a2 + 67);
  v11 = *(_DWORD *)(v7 + 36);
  v12 = (v9 >> 2) & 2;
  Flags = v12 | 1;
  if ( (v11 & 1) == 0 )
    Flags = v12;
  if ( (v11 & 8) != 0 )
  {
    AttributeAvailableMask |= 0x40u;
    *(_BYTE *)(a2 + 67) = AttributeAvailableMask;
  }
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v4,
         v2,
         *(_QWORD *)(v7 + 16),
         *(_QWORD *)(v7 + 24),
         Flags,
         AttributeAvailableMask,
         *(PVOID *)(a1 + 328),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
