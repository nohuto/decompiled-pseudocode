/*
 * XREFs of ReadField @ 0x14000CB30
 * Callers:
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     SupportsOnlyRawAccess @ 0x14000CA74 (SupportsOnlyRawAccess.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v8; // ebx
  BOOL v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // r13
  unsigned int v12; // r8d
  __int64 *v13; // rax
  __int64 *v14; // r9
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v21; // r8d
  __int64 *v22; // rax
  unsigned __int64 v23; // rdi
  const void *ObjectTypeName; // rax
  unsigned int v25[4]; // [rsp+40h] [rbp-168h] BYREF
  char pszDest[256]; // [rsp+50h] [rbp-158h] BYREF

  if ( (a3[3] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
      return RawFieldAccess(a1, 0LL, a2, a4);
    LogError(-1072431087);
    AcpiDiagTraceAmlError(a1, -1072431087);
    v23 = (unsigned int)a3[3];
    if ( (_BYTE)KdDebuggerEnabled )
    {
      DbgPrintEx(0x19u, 0, off_14008D788, v23, 0LL, 0LL, 0LL);
      if ( (gDebugger & 0x40000) != 0 )
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 162, (const void *)v23, 0LL, 0LL, 0LL);
        DbgCommandString("ACPI", pszDest);
        return 3222536209LL;
      }
    }
    else
    {
      RtlStringCbPrintfA(
        pszDest,
        0x100uLL,
        "AMLIDBG: !amli err 0x%x %p %p %p %p",
        162,
        (const void *)v23,
        0LL,
        0LL,
        0LL);
      DbgPrintEx(0x19u, 0, "%s\n", pszDest);
    }
    return 3222536209LL;
  }
  v8 = 0;
  v9 = 0;
  v25[0] = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, v25);
    v9 = v25[0] >= 2;
  }
  v10 = 4 * v9 + 4;
  if ( !*(_WORD *)(a4 + 2) )
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= 8 * v10 )
    {
      *(_WORD *)(a4 + 2) = 1;
      v11 = a4 + 16;
      goto LABEL_8;
    }
    *(_WORD *)(a4 + 2) = 3;
    v21 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(a4 + 24) = v21;
    v22 = HeapAlloc((_QWORD *)gpheapGlobal, 1179992648, v21);
    *(_QWORD *)(a4 + 32) = v22;
    if ( !v22 )
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0xA1u, (const void *)*(unsigned int *)(a4 + 24), 0LL, 0LL, 0LL);
      return 3221225626LL;
    }
    memset(v22, 0, *(unsigned int *)(a4 + 24));
    goto LABEL_23;
  }
  if ( *(_WORD *)(a4 + 2) != 1 )
  {
    if ( *(_WORD *)(a4 + 2) == 2 )
    {
      v10 = *(_DWORD *)(a4 + 24) - 1;
      goto LABEL_24;
    }
    if ( *(_WORD *)(a4 + 2) != 3 )
    {
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
      PrintDebugMessage(0xA3u, ObjectTypeName, 0LL, 0LL, 0LL);
      return 3222536201LL;
    }
LABEL_23:
    v10 = *(_DWORD *)(a4 + 24);
LABEL_24:
    v11 = *(_QWORD *)(a4 + 32);
    goto LABEL_8;
  }
  v11 = a4 + 16;
  v10 = 8;
LABEL_8:
  if ( SupportsOnlyRawAccess(a2) )
    return RawFieldAccess(a1, 0LL, a2, a4);
  v12 = 128;
  if ( a3[5] )
    v12 = a3[7] + 128;
  v13 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, v12);
  v14 = v13;
  if ( v13 )
  {
    v13[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v13;
    v13[3] = (__int64)ReadFieldObj;
    *(_DWORD *)v13 = 1330004801;
    v13[4] = a2;
    v13[5] = v11;
    v13[6] = v11 + v10;
    v15 = a3[3] & 0xF;
    if ( v15 && v15 <= 4 )
      v16 = 1 << (v15 - 1);
    else
      v16 = 1;
    *((_DWORD *)v14 + 14) = v16;
    v17 = 8 * v16;
    v18 = 1LL << (8 * (unsigned __int8)v16);
    *((_DWORD *)v14 + 15) = (8 * v16 + a3[1] + a3[2] - 1) / (unsigned int)(8 * v16);
    v19 = 0LL;
    if ( v17 < 0x40 )
      v19 = v18;
    v14[8] = v19 - 1;
    *((_DWORD *)v14 + 18) = v17 - a3[1];
    *((_DWORD *)v14 + 19) = a3[1];
    memmove(v14 + 12, a3, (unsigned int)(a3[7] + 32));
  }
  else
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
