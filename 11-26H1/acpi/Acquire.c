/*
 * XREFs of Acquire @ 0x140014CB0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 */

__int64 __fastcall Acquire(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  char v6; // al
  __int64 *v7; // rax
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v11; // r10

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    if ( *(_WORD *)(a2[8] + 66LL) == 9 )
    {
      v7 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x40u);
      if ( v7 )
      {
        v4 = 0;
        v7[1] = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v7;
        *(_DWORD *)v7 = 1179730753;
        v7[3] = (__int64)ParseAcquire;
        v7[4] = *(_QWORD *)(a2[8] + 96LL);
        *((_DWORD *)v7 + 4) = (*(_WORD *)(a2[8] + 64LL) & 2 | 8) << 15;
        *((_WORD *)v7 + 20) = *(_WORD *)(a2[10] + 56LL);
        v7[6] = a2[11];
        v7[7] = *(_QWORD *)(a2[8] + 16LL);
      }
      else
      {
        v4 = -1072431102;
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(3u, v11, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
