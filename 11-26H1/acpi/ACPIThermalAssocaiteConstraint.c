/*
 * XREFs of ACPIThermalAssocaiteConstraint @ 0x140069DD4
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x140069C2C (ACPIThermalActivateConstraint.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x14002C178 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x14002CFFC (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIThermalReevaluateConstraints @ 0x14004549C (ACPIThermalReevaluateConstraints.c)
 */

void __fastcall ACPIThermalAssocaiteConstraint(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  bool v9; // zf
  char v10; // r9
  char v11; // r9

  v3 = *(_QWORD *)(a1 + 656);
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v5 = (_QWORD *)(a2 + 16);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = *(_QWORD **)(v3 + 24), *v8 != v3 + 16) )
    {
      __fastfail(3u);
    }
    *v5 = v3 + 16;
    v5[1] = v8;
    *v8 = v5;
    *(_QWORD *)(v3 + 24) = v5;
    v9 = *(_BYTE *)(a2 + 52) == 0;
    *(_QWORD *)(a2 + 40) = a1;
    if ( v9 )
    {
      v11 = *(_BYTE *)(a2 + 55);
      if ( v11 )
        AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(a2 + 32), a1, 0, v11);
    }
    else
    {
      v10 = *(_BYTE *)(a2 + 53);
      if ( v10 != 100 )
        AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(a2 + 32), a1, 0, v10);
    }
    ACPIThermalReevaluateConstraints(*(PVOID *)(a1 + 656));
  }
}
