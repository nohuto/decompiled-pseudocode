/*
 * XREFs of RtlProtectHeap @ 0x18007F470
 * Callers:
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     RtlpRemoveVectoredHandler @ 0x18007E530 (RtlpRemoveVectoredHandler.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlGrowFunctionTable @ 0x1800ED2C0 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpProtectHeap @ 0x18007F550 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x18008B8C0 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapProtect @ 0x1801580D0 (RtlpHpHeapProtect.c)
 */

struct _PEB *__fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  struct _PEB *result; // rax
  unsigned int HeapProtection; // eax
  int v6; // ecx
  __int64 v7; // rdx

  result = NtCurrentPeb();
  if ( a1 != result->ProcessHeap && (a1[4] == -571548178 || (a1[29] & 0x1000000) == 0) )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( a1[4] == -571548178 )
    {
      v7 = 64LL;
      if ( (a1[5] & 0x40000000) == 0 )
        v7 = 4LL;
      HeapProtection = RtlpHpHeapValidateProtection(a1, v7, (unsigned __int8)BYTE1(*(_QWORD *)a1), *((_QWORD *)a1 + 1));
    }
    else
    {
      HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    }
    if ( a2 )
    {
      v6 = 2;
      if ( HeapProtection == 64 )
        v6 = 32;
      HeapProtection = v6;
    }
    if ( a1[4] == -571548178 )
      RtlpHpHeapProtect(a1, HeapProtection);
    else
      RtlpProtectHeap(a1, HeapProtection);
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  return result;
}
