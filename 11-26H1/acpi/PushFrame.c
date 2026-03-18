/*
 * XREFs of PushFrame @ 0x14004944C
 * Callers:
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 **a5)
{
  unsigned int v8; // ebx
  __int64 *v9; // rax

  v8 = 0;
  v9 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, a3);
  if ( v9 )
  {
    v9[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)v9 = a2;
    v9[3] = a4;
    if ( a5 )
      *a5 = v9;
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
