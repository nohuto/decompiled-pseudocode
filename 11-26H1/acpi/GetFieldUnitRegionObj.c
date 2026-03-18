/*
 * XREFs of GetFieldUnitRegionObj @ 0x140004D70
 * Callers:
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     AMLIGetFieldUnitRegionObj @ 0x14001D2F0 (AMLIGetFieldUnitRegionObj.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  unsigned int FieldUnitRegionObj; // edi
  int v5; // ecx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 ObjectPath; // rax
  const char *v9; // rdx
  void *v10; // rsi
  int v11; // ecx

  v3 = *a1;
  FieldUnitRegionObj = 0;
  v5 = *(unsigned __int16 *)(*a1 + 66);
  if ( v5 == 130 || (v11 = v5 - 131) == 0 )
  {
    *a2 = **(_QWORD **)(v3 + 96);
  }
  else if ( v11 == 1 )
  {
    FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 96) + 8LL) + 96LL), a2);
  }
  else
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66LL), 0, 0, 0LL);
    FieldUnitRegionObj = -1072431101;
  }
  v6 = *a2;
  if ( *a2 && *(_WORD *)(v6 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v9 = byte_140075A82;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v9, *(unsigned __int16 *)(*a2 + 66LL), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *a2 = 0LL;
      return FieldUnitRegionObj;
    }
LABEL_5:
    *a2 = 0LL;
    return FieldUnitRegionObj;
  }
  if ( (FieldUnitRegionObj & 0x80000000) != 0 || !v6 )
    goto LABEL_5;
  result = FieldUnitRegionObj;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
  return result;
}
