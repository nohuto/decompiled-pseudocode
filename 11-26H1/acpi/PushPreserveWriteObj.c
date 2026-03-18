/*
 * XREFs of PushPreserveWriteObj @ 0x14003F97C
 * Callers:
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 */

__int64 __fastcall PushPreserveWriteObj(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 *v9; // rax

  v7 = 0;
  v9 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x40u);
  if ( v9 )
  {
    v9[1] = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    v9[3] = (__int64)PreserveWriteObj;
    *(_DWORD *)v9 = 1330796368;
    v9[4] = a2;
    v9[5] = a3;
    v9[6] = a4;
  }
  else
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  return v7;
}
