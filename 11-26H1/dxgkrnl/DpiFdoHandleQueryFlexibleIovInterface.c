/*
 * XREFs of DpiFdoHandleQueryFlexibleIovInterface @ 0x14024F0C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     DpiDoInterfaceReferenceGpuP @ 0x14024F080 (DpiDoInterfaceReferenceGpuP.c)
 *     DpiGetPartitionedInterfaceContextPointer @ 0x14024FC0C (DpiGetPartitionedInterfaceContextPointer.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiFdoHandleQueryFlexibleIovInterface(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  _DWORD *PartitionedInterfaceContextPointer; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiFdoHandleQueryFlexibleIovInterface", 0LL);
  if ( a5 )
  {
    if ( a3 == 1 )
    {
      if ( a2 >= 0x78u )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v5 + 484) )
          DpiCheckForOutstandingD3Requests(v5);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
        if ( *(_BYTE *)(v5 + 5336) )
        {
          qword_1401662A8 = 0LL;
          qword_1401662B0 = 0LL;
          qword_1401662B8 = 0LL;
          if ( *(_QWORD *)(v5 + 5376) )
          {
            qword_1401662A8 = (__int64)&DpiIovGetBackingResource;
            qword_1401662B0 = (__int64)DpiIovGetMmioRangeCount;
            qword_1401662B8 = (__int64)DpiIovGetMmioRanges;
          }
          else if ( *(_BYTE *)(v5 + 2716) )
          {
            qword_1401662A8 = (__int64)&DpiIovGetBackingResource;
          }
          memmove(a4, &unk_140166270, 0x78uLL);
          PartitionedInterfaceContextPointer = (_DWORD *)DpiGetPartitionedInterfaceContextPointer(v5, a5);
          a4[1] = PartitionedInterfaceContextPointer;
          DpiDoInterfaceReferenceGpuP(PartitionedInterfaceContextPointer);
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1720;
          if ( *(_BYTE *)(v5 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
          v6 = -1073741637;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
        KeLeaveCriticalRegion();
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1701;
      }
      return v6;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      result = 3221225659LL;
      WdLogGlobalForLineNumber = 1692;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1679;
  }
  return result;
}
