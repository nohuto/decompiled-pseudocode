/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x18006C604
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x18000C750 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801453D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18006C80C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x18006CE74 (RtlpExtendListLookup.c)
 *     RtlGetSuiteMask @ 0x1800840B0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(PRTL_CRITICAL_SECTION *HeapHandle)
{
  char v2; // r15
  char v3; // r14
  PRTL_CRITICAL_SECTION v5; // rax
  int v6; // edi
  __int64 LowFragHeap; // r14

  v2 = 0;
  v3 = 0;
  if ( ((_DWORD)HeapHandle[14] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v3 = 1;
    if ( *((_BYTE *)HeapHandle + 418) == 2 )
      v5 = HeapHandle[51];
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 208) )
    {
      v6 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 208) = 1;
      v2 = 1;
      v6 = RtlpExtendFrontEndUsageArray(HeapHandle);
      if ( v6 >= 0 )
      {
        RtlpExtendListLookup(HeapHandle);
        HeapHandle[51] = 0LL;
        *((_BYTE *)HeapHandle + 418) = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
        LowFragHeap = RtlpCreateLowFragHeap(HeapHandle);
        RtlEnterCriticalSection(HeapHandle[44]);
        if ( LowFragHeap )
        {
          HeapHandle[51] = (PRTL_CRITICAL_SECTION)LowFragHeap;
          *((_WORD *)HeapHandle + 209) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            HeapHandle[22] = (PRTL_CRITICAL_SECTION)((unsigned __int64)RtlpLargestLfhBlock >> 4);
        }
        else
        {
          v6 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 208);
        v2 = 0;
        v3 = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v3 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  if ( v2 )
    --*((_WORD *)HeapHandle + 208);
  return (unsigned int)v6;
}
