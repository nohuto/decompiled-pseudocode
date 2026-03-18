/*
 * XREFs of ObjTypeSizeOf @ 0x140002F10
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x140002FE0 (GetBaseData.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int ObjectTypeName; // eax

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  v6 = *(unsigned __int16 *)(BaseData + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) != 142 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
      return v3;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
        PrintDebugMessage(176, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431096;
      }
      v6 = **(unsigned int **)(BaseData + 32);
    }
    else
    {
      v6 = *(unsigned int *)(BaseData + 24);
    }
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v6;
  return v3;
}
