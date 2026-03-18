/*
 * XREFs of Release @ 0x140014E60
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ReleaseASLMutex @ 0x14000DF90 (ReleaseASLMutex.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 */

__int64 __fastcall Release(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r14
  __int16 v9; // bp
  __int64 *v10; // rax
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v14; // r10

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    v7 = a2[8];
    v8 = *(_QWORD *)(v7 + 96);
    v9 = *(_WORD *)(v7 + 64) & 2;
    if ( *(_WORD *)(v7 + 66) == 9 )
    {
      v10 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x38u);
      if ( v10 )
      {
        v4 = 0;
        v10[1] = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v10;
        *(_DWORD *)v10 = 1179403602;
        v10[3] = (__int64)ParseRelease;
        v10[4] = v8;
        v10[5] = a2[11];
        v10[6] = *(_QWORD *)(a2[8] + 16LL);
        if ( v9 )
          *((_DWORD *)v10 + 4) = 0x10000;
      }
      else
      {
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)ReleaseASLMutex(a1, v8, v9 != 0);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(0xADu, v14, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
