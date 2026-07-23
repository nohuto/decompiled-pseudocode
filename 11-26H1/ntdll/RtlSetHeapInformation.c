/*
 * XREFs of RtlSetHeapInformation @ 0x180110BC0
 * Callers:
 *     LdrpInitializeTlsHeap @ 0x180073CDC (LdrpInitializeTlsHeap.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpFlushHeap @ 0x1800020DC (RtlpFlushHeap.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800EC350 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180120DE8 (RtlpHpStackTraceConfig.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && HeapInformationLength == 48 )
      {
        result = RtlSetHeapDebuggingInformation(HeapHandle, HeapInformation);
        goto LABEL_54;
      }
      return -1073741823;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
          return 0;
        if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          return -1073741811;
        result = RtlpSetRequestedFrontEndHeap((__int64)HeapHandle);
LABEL_54:
        if ( result >= 0 )
          return 0;
        return result;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
    case 3:
      if ( HeapInformation
        && HeapInformationLength >= 4
        && *(_DWORD *)HeapInformation == 1
        && HeapInformationLength == 8
        && !*((_DWORD *)HeapInformation + 1) )
      {
        if ( HeapHandle )
        {
          RtlEnterCriticalSection(&RtlpProcessHeapsLock);
          if ( !(unsigned int)RtlpIsProtectedHeap((__int64)HeapHandle) )
            RtlpFlushHeap(v9);
          RtlpReleaseHeapListLock(0);
        }
        else
        {
          RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlpFlushHeapsCallback, 0LL, 4);
        }
        return 0;
      }
      return -1073741811;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass != 6 )
      {
        if ( HeapInformationClass == HeapTag )
          return RtlpHpSetHeapTag(HeapHandle, HeapInformation, HeapInformationLength);
        return 0;
      }
      if ( HeapInformationLength >= 0x28 && *(_DWORD *)HeapInformation == 1 )
      {
        v6 = *((_QWORD *)HeapInformation + 1);
        if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) == v6 )
        {
          if ( HeapHandle )
          {
            if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
            {
              v7 = 32LL;
            }
            else
            {
              if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
                return 0;
              v7 = 376LL;
            }
            v8 = (__int64 *)((char *)HeapHandle + v7);
          }
          else
          {
            v8 = &qword_1801C5ED8;
          }
          v8[1] = *((_QWORD *)HeapInformation + 2);
          *v8 = v6;
          return 0;
        }
      }
      return -1073741811;
    }
    if ( HeapInformation
      && HeapInformationLength >= 0x10
      && *(_WORD *)HeapInformation == 1
      && (*((_WORD *)HeapInformation + 1) & 0xFFFE) == 0 )
    {
      result = RtlpHpStackTraceConfig(HeapInformation);
      goto LABEL_54;
    }
    return -1073741811;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return -1073741637;
  result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 4u;
    return 0;
  }
  return result;
}
