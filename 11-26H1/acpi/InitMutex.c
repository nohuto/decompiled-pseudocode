/*
 * XREFs of InitMutex @ 0x14004D640
 * Callers:
 *     Mutex @ 0x14006F9F0 (Mutex.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall InitMutex(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  unsigned int v8; // edi
  __int64 *v9; // rax
  __int64 *v10; // rbx

  *(_WORD *)(a3 + 66) = 9;
  *(_DWORD *)(a3 + 88) = 192;
  v8 = 0;
  v9 = HeapAlloc(a2, 1414876488, 0xC0u);
  *(_QWORD *)(a3 + 96) = v9;
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, *(unsigned int *)(a3 + 88));
    *(_DWORD *)v10 = a4;
    if ( a5 )
      *((_DWORD *)v10 + 8) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 23);
    v10[3] = (__int64)(v10 + 2);
    v10[2] = (__int64)(v10 + 2);
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    PrintDebugMessage(0x4Cu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v8;
}
