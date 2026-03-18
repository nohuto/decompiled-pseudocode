/*
 * XREFs of PushPost @ 0x140015C84
 * Callers:
 *     Divide @ 0x140015A70 (Divide.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 *     Unload @ 0x140070D20 (Unload.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 */

__int64 __fastcall PushPost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 *v10; // rax

  v8 = 0;
  v10 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x38u);
  if ( v10 )
  {
    v10[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v10;
    *(_DWORD *)v10 = 1414745936;
    v10[3] = a2;
    v10[4] = a3;
    v10[5] = a4;
    v10[6] = a5;
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
