/*
 * XREFs of Load @ 0x140070B90
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006D0F8 (LoadMemDDB.c)
 */

__int64 __fastcall Load(_QWORD *Entry, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  unsigned int NameSpaceObject; // eax
  __int64 v7; // rdi
  __int16 v8; // ax
  __int64 v9; // rdx
  unsigned int MemDDB; // eax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = *(_QWORD *)(a2 + 80);
  v13 = 0LL;
  v5 = ValidateArgTypes((__int64)Entry, v3, 0, "Z");
  if ( v5 )
    return v5;
  v5 = ValidateTarget((__int64)Entry, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v12);
  if ( v5 )
    return v5;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL), Entry[10], &v13, 0x80000000);
  v7 = v13;
  v5 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(-1073741772);
    AcpiDiagTraceAmlError((__int64)Entry, -1073741772);
    PrintDebugMessage(0x4Eu, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( !NameSpaceObject )
  {
    v8 = *(_WORD *)(v13 + 66);
    if ( v8 == 10 )
    {
      v9 = *(_QWORD *)(v13 + 96);
      if ( !*(_BYTE *)(v9 + 12) )
      {
        MemDDB = LoadMemDDB((__int64)Entry, *(const char **)v9, v12);
LABEL_11:
        v5 = MemDDB;
        goto LABEL_13;
      }
    }
    else if ( v8 == 5 )
    {
      MemDDB = LoadFieldUnitDDB((__int64)Entry, v13 + 64, v12);
      goto LABEL_11;
    }
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431095);
    PrintDebugMessage(0x4Fu, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
LABEL_13:
    if ( (gdwfAMLIInit & 2) != 0 )
    {
      PrintDebugMessage(0x10u, 0LL, 0LL, 0LL, 0LL);
      AMLIDebugger();
    }
  }
LABEL_15:
  if ( v7 )
    DereferenceObjectEx(v7);
  return v5;
}
