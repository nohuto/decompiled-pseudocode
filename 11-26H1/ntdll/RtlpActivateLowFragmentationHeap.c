/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x18007DF18
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180021680 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180145520 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlpExtendListLookup @ 0x18007DDA4 (RtlpExtendListLookup.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18007E120 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  char v2; // r15
  char v3; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi
  __int64 LowFragHeap; // r14

  v2 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v3 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v5 = *(_QWORD *)(a1 + 408);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v7 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v7 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v2 = 1;
      v6 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v6) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v7 = RtlpExtendFrontEndUsageArray(a1, v6);
      if ( v7 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 408) = LowFragHeap;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v7 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v2 = 0;
        v3 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v3 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v2 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v7;
}
