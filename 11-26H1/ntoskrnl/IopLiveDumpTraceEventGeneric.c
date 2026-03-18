/*
 * XREFs of IopLiveDumpTraceEventGeneric @ 0x1405D7A30
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404E439C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CD3AC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpBufferDumpData @ 0x1405CDF10 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x1405CF8E0 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405CF9D0 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D04D8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x1405D7900 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405D79B8 (IopLiveDumpTraceEstimatedPageCountNotAvailable.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405D7B48 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceRunPageCountLoop @ 0x1405D7C0C (IopLiveDumpTraceRunPageCountLoop.c)
 *     IopLiveDumpTraceWriteBuffer @ 0x1405D7CB4 (IopLiveDumpTraceWriteBuffer.c)
 * Callees:
 *     EventDataDescCreateString @ 0x1404E6200 (EventDataDescCreateString.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall IopLiveDumpTraceEventGeneric(const wchar_t *a1, unsigned int a2, const wchar_t **a3, __int64 *a4)
{
  char result; // al
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  _QWORD *v12; // rcx
  __int64 v13; // r11
  __int64 *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v16[34]; // [rsp+30h] [rbp-138h] BYREF

  v15 = 0LL;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    memset_0(v16, 0, sizeof(v16));
    EventDataDescCreateString((__int64)v16, a1, 0x40u);
    v9 = 1;
    v10 = 0;
    do
    {
      v11 = v9 + 1;
      v12 = &v16[2 * v9];
      if ( v10 >= a2 )
      {
        EventDataDescCreateString((__int64)v12, L"N/A", 0x20u);
        v14 = &v15;
      }
      else
      {
        EventDataDescCreateString((__int64)v12, *a3, 0x20u);
        v14 = a4;
      }
      ++v10;
      v16[v13] = v14;
      ++a4;
      v16[v13 + 1] = 8LL;
      ++a3;
      v9 = v11 + 1;
    }
    while ( v10 < 8 );
    return IopLiveDumpTrace();
  }
  return result;
}
