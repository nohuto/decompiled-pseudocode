/*
 * XREFs of MidString @ 0x140015EA0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 */

__int64 __fastcall MidString(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebx
  __int16 v7; // dx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned int v11; // ebp
  __int64 *v12; // rax
  unsigned int v14; // ecx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v17 = 0LL;
  v6 = ValidateArgTypes(a1, v3, 0, "TII");
  if ( v6 )
    return v6;
  v6 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135, (__int64)&v17);
  if ( v6 )
    return v6;
  v7 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
  if ( v7 != 2 && v7 != 3 )
  {
    v6 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v14 = 107;
    goto LABEL_20;
  }
  *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v7;
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(unsigned int *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 56);
  if ( v10 >= v9 )
  {
    if ( *(_WORD *)(v8 + 2) != 2 )
      return v6;
    v15 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, 1u);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v15;
    if ( v15 )
    {
      **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
      return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
    }
    v6 = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v14 = 105;
LABEL_20:
    PrintDebugMessage(v14, 0LL, 0LL, 0LL, 0LL);
    return v6;
  }
  if ( *(_QWORD *)(v8 + 96) + v10 < v9 )
    v11 = *(_QWORD *)(v8 + 96);
  else
    v11 = v9 - v10;
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
  {
    v12 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, v11 + 1);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
    if ( !v12 )
    {
      v6 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x6Au, 0LL, 0LL, 0LL, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11 + 1;
  }
  else
  {
    v16 = HeapAlloc((_QWORD *)gpheapGlobal, 1179992648, v11);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v16;
    if ( !v16 )
    {
      v6 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x69u, 0LL, 0LL, 0LL, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11;
  }
  if ( !v6 )
  {
    if ( v11 )
    {
      do
      {
        *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                             + *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL)
                                                                             + v10);
        ++v4;
      }
      while ( v4 < v11 );
    }
    return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
  }
  return v6;
}
