/*
 * XREFs of ProcessIncDec @ 0x14000DFF0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned __int16 *v10; // rbx
  const void *ObjectTypeName; // rax
  const void *v12; // rbp
  char pszDest[256]; // [rsp+40h] [rbp-128h] BYREF

  v3 = a3;
  if ( a3 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a2 + 48);
  v7 = 1LL;
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v6 + 2) != 1 )
  {
    FreeDataBuffs(v6, 1u);
    v3 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    v10 = *(unsigned __int16 **)(a2 + 48);
    ObjectTypeName = (const void *)GetObjectTypeName(v10[1]);
    v12 = ObjectTypeName;
    if ( (_BYTE)KdDebuggerEnabled )
    {
      DbgPrintEx(0x19u, 0, off_14008D698, v10, ObjectTypeName, 0LL, 0LL);
      if ( (gDebugger & 0x40000) != 0 )
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 147, v10, v12, 0LL, 0LL);
        DbgCommandString("ACPI", pszDest);
      }
    }
    else
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 147, v10, ObjectTypeName, 0LL, 0LL);
      DbgPrintEx(0x19u, 0, "%s\n", pszDest);
    }
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a2 + 32) != 117LL )
    v7 = -1LL;
  *(_QWORD *)(v6 + 16) += v7;
  v3 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_8:
    v8 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v8[1];
    HeapFree(v8);
  }
  return v3;
}
