/*
 * XREFs of InitEvent @ 0x14006F924
 * Callers:
 *     Event @ 0x14006F8C0 (Event.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall InitEvent(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 *v7; // rbx

  *(_WORD *)(a3 + 66) = 7;
  v5 = 0;
  *(_DWORD *)(a3 + 88) = 32;
  v6 = HeapAlloc(a2, 1314276680, 0x20u);
  *(_QWORD *)(a3 + 96) = v6;
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, *(unsigned int *)(a3 + 88));
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 3);
    v7[2] = (__int64)(v7 + 1);
    v7[1] = (__int64)(v7 + 1);
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    PrintDebugMessage(0x41u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v5;
}
