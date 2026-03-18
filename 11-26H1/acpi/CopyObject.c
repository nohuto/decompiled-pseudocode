/*
 * XREFs of CopyObject @ 0x1400166E0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     MoveObjData @ 0x140016830 (MoveObjData.c)
 */

__int64 __fastcall CopyObject(__int64 a1, __int64 a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  v4 = 0;
  v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0, (__int64)&v18);
  v6 = v5;
  if ( v5 )
  {
    LogError(v5);
    AcpiDiagTraceAmlError(a1, v6);
    v17 = 33;
LABEL_14:
    PrintDebugMessage(v17, 0LL, 0LL, 0LL, 0LL);
    return v6;
  }
  v7 = *(unsigned __int16 *)(v18 + 2);
  if ( v7 == 134
    || (v8 = v7 - 1) != 0
    && (v9 = v8 - 1) != 0
    && (v10 = v9 - 1) != 0
    && (v11 = v10 - 1) != 0
    && ((v12 = v11 - 1) == 0 || v12 == 9) )
  {
    v4 = 1;
    if ( ((*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 1) & 0xFFFD) != 0 )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v17 = 32;
      goto LABEL_14;
    }
  }
  MoveObjData(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  v14 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v15 = WriteObject(a1, v13, v14);
  else
    v15 = DupObjData((_QWORD *)gpheapGlobal, v13, v14);
  v6 = v15;
  if ( v15 )
  {
    LogError(v15);
    AcpiDiagTraceAmlError(a1, v6);
    v17 = 31;
    goto LABEL_14;
  }
  return v6;
}
