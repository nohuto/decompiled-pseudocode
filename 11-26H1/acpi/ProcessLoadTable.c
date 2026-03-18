/*
 * XREFs of ProcessLoadTable @ 0x1400711D0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  void *v3; // r14
  const char *v4; // r12
  __int64 v5; // r13
  int v6; // ebx
  ULONG_PTR v9; // rdi
  int v10; // eax
  const char *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r14
  char *Pool2; // rax
  char *v17; // rbp
  unsigned int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r11
  char *v21; // rax
  int NameSpaceObject; // eax
  _QWORD *v23; // rcx
  __int64 v25; // rbx
  int v26; // eax
  void *v27; // [rsp+38h] [rbp-40h]
  const char *pszSrc; // [rsp+88h] [rbp+10h]
  unsigned int v29; // [rsp+90h] [rbp+18h]
  __int64 v30; // [rsp+98h] [rbp+20h] BYREF

  v3 = (void *)a2[4];
  v4 = 0LL;
  v5 = a2[5];
  v6 = a3;
  v30 = 0LL;
  v27 = v3;
  if ( a3 )
  {
    v9 = 1LL;
    goto LABEL_44;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(0x10u, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  if ( *(_DWORD *)(v5 + 76) < 4u )
  {
    v11 = "\\";
  }
  else
  {
    v10 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v5 + 80) + 120LL, 0, "Z");
    v6 = v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(BugCheckParameter2, v6);
      PrintDebugMessage(0x94u, 0LL, 0LL, 0LL, 0LL);
      v9 = 5LL;
      goto LABEL_44;
    }
    v11 = *(const char **)(*(_QWORD *)(v5 + 80) + 152LL);
  }
  pszSrc = v11;
  if ( *(_DWORD *)(v5 + 76) >= 5u )
  {
    v12 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v5 + 80) + 160LL, 0, "Z");
    v6 = v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(BugCheckParameter2, v6);
      PrintDebugMessage(0x94u, 0LL, 0LL, 0LL, 0LL);
      v9 = 6LL;
      goto LABEL_44;
    }
    v4 = *(const char **)(*(_QWORD *)(v5 + 80) + 192LL);
  }
  v13 = *(_DWORD *)(v5 + 76);
  if ( v13 >= 5 && v4 && *v4 )
  {
    if ( v13 < 6 )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
      PrintDebugMessage(0x96u, 0LL, 0LL, 0LL, 0LL);
      v9 = 7LL;
      goto LABEL_44;
    }
    v14 = -1LL;
    if ( ((*v4 - 92) & 0xFD) != 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v11[v15] );
      do
        ++v14;
      while ( v4[v14] );
      v29 = v15 + v14 + 2;
      Pool2 = (char *)ExAllocatePool2(64LL, v29, 1231842625LL);
      v17 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 86;
LABEL_25:
        PrintDebugMessage(v18, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 4LL;
        *(_QWORD *)(a2[6] + 16LL) = 0LL;
        goto LABEL_44;
      }
      RtlStringCchCopyNA(Pool2, (unsigned int)(v15 + v14 + 2), pszSrc, (unsigned int)v15);
      if ( *(_BYTE *)(v19 + v20 - 1) != 92 )
      {
        v17[v19] = 46;
        LODWORD(v15) = v15 + 1;
      }
      RtlStringCchCopyNA(&v17[(unsigned int)v15], v29 - (unsigned int)v15, v4, (unsigned int)v14);
      v17[(unsigned int)(v15 + v14)] = 0;
    }
    else
    {
      do
        ++v14;
      while ( v4[v14] );
      v21 = (char *)ExAllocatePool2(64LL, (unsigned int)(v14 + 1), 1231842625LL);
      v17 = v21;
      if ( !v21 )
      {
        v6 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 92;
        goto LABEL_25;
      }
      RtlStringCchCopyNA(v21, (unsigned int)(v14 + 1), v4, (unsigned int)v14);
    }
    NameSpaceObject = GetNameSpaceObject(v17, *(_QWORD *)(BugCheckParameter2 + 80), &v30, 0x80000000);
    v6 = NameSpaceObject;
    if ( NameSpaceObject )
    {
      LogError(NameSpaceObject);
      AcpiDiagTraceAmlError(BugCheckParameter2, v6);
      PrintDebugMessage(0x5Cu, v17, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      v9 = 2LL;
LABEL_43:
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_44:
      KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v9, v6);
    }
    if ( v30 == gpnsNameSpaceRoot )
    {
      LogError(0);
      AcpiDiagTraceAmlError(BugCheckParameter2, 0);
      PrintDebugMessage(0x61u, 0LL, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
    }
    else
    {
      v25 = v30 + 64;
      FreeObjData(v30 + 64);
      v26 = DupObjData((_QWORD *)gpheapGlobal, v25, *(_QWORD *)(v5 + 80) + 200LL);
      v6 = v26;
      if ( v26 )
      {
        LogError(v26);
        AcpiDiagTraceAmlError(BugCheckParameter2, v6);
        PrintDebugMessage(0x58u, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 3LL;
        goto LABEL_43;
      }
    }
    ExFreePoolWithTag(v17, 0);
    v3 = v27;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v23 = *(_QWORD **)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = v23[1];
  HeapFree(v23);
  return (unsigned int)v6;
}
