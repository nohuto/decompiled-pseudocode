/*
 * XREFs of IncDec @ 0x140011A50
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 *v7; // rax
  unsigned int v8; // ebx

  v3 = a2[11];
  v5 = a2[10];
  v6 = *(unsigned int *)(a2[7] + 8LL);
  v7 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x38u);
  if ( v7 )
  {
    v7[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v7;
    v7[3] = (__int64)ProcessIncDec;
    *(_DWORD *)v7 = 1414745936;
    v7[4] = v6;
    v7[5] = v5;
    v7[6] = v3;
    return (unsigned int)ReadObject(a1, a2[10], a2[11]);
  }
  else
  {
    v8 = -1072431102;
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
  }
  return v8;
}
