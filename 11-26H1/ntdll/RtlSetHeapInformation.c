/*
 * XREFs of RtlSetHeapInformation @ 0x180111030
 * Callers:
 *     LdrpInitializeTlsHeap @ 0x180092B70 (LdrpInitializeTlsHeap.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpFlushHeap @ 0x180016FFC (RtlpFlushHeap.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180091E5C (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114E70 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180121038 (RtlpHpStackTraceConfig.c)
 */

__int64 __fastcall RtlSetHeapInformation(_DWORD *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = RtlSetHeapDebuggingInformation(a1, a3);
        goto LABEL_54;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[4] == -571548178 )
          return 0LL;
        if ( (a1[28] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          return 3221225485LL;
        result = RtlpSetRequestedFrontEndHeap((__int64)a1);
LABEL_54:
        if ( (int)result >= 0 )
          return 0LL;
        return result;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
    case 3:
      if ( a3 && a4 >= 4 && *(_DWORD *)a3 == 1 && a4 == 8 && !*(_DWORD *)(a3 + 4) )
      {
        if ( a1 )
        {
          RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
          if ( !(unsigned int)RtlpIsProtectedHeap((__int64)a1) )
            RtlpFlushHeap(v9);
          RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
        }
        else
        {
          RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpFlushHeapsCallback, 0LL, 4);
        }
        return 0LL;
      }
      return 3221225485LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
      {
        if ( a2 == 7 )
          return RtlpHpSetHeapTag(a1, a3, a4);
        return 0LL;
      }
      if ( a4 >= 0x28 && *(_DWORD *)a3 == 1 )
      {
        v6 = *(_QWORD *)(a3 + 8);
        if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) == v6 )
        {
          if ( a1 )
          {
            if ( a1[4] == -571548178 )
            {
              v7 = 8LL;
            }
            else
            {
              if ( (a1[29] & 0x1000000) != 0 )
                return 0LL;
              v7 = 94LL;
            }
            v8 = (__int64 *)&a1[v7];
          }
          else
          {
            v8 = &qword_1801C6ED8;
          }
          v8[1] = *(_QWORD *)(a3 + 16);
          *v8 = v6;
          return 0LL;
        }
      }
      return 3221225485LL;
    }
    if ( a3 && a4 >= 0x10 && *(_WORD *)a3 == 1 && (*(_WORD *)(a3 + 2) & 0xFFFE) == 0 )
    {
      result = RtlpHpStackTraceConfig(a3);
      goto LABEL_54;
    }
    return 3221225485LL;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return 3221225485LL;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return 3221225659LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpTagInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 4u;
    return 0LL;
  }
  return result;
}
