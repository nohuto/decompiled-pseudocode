/*
 * XREFs of IopLiveDumpTraceEventGeneric @ 0x1405DA220
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpBufferDumpData @ 0x1405D0720 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetCapturePages @ 0x1405D20F0 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405D21E0 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405D2CE8 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpTraceChunkCRCMismatchWrite @ 0x1405DA0F0 (IopLiveDumpTraceChunkCRCMismatchWrite.c)
 *     IopLiveDumpTraceEstimatedPageCountNotAvailable @ 0x1405DA1A8 (IopLiveDumpTraceEstimatedPageCountNotAvailable.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405DA340 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceRunPageCountLoop @ 0x1405DA404 (IopLiveDumpTraceRunPageCountLoop.c)
 *     IopLiveDumpTraceWriteBuffer @ 0x1405DA4AC (IopLiveDumpTraceWriteBuffer.c)
 * Callees:
 *     EventDataDescCreateString @ 0x1404DF7A0 (EventDataDescCreateString.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall IopLiveDumpTraceEventGeneric(const wchar_t *a1, unsigned int a2, const wchar_t **a3, __int64 *a4)
{
  char result; // al
  unsigned int v9; // ebx
  unsigned int v10; // r11d
  unsigned int v11; // edi
  _QWORD *v12; // rcx
  int v13; // r11d
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v17[34]; // [rsp+30h] [rbp-138h] BYREF

  v16 = 0LL;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    memset_0(v17, 0, sizeof(v17));
    EventDataDescCreateString((__int64)v17, a1, 0x40u);
    v9 = 0;
    v10 = 1;
    do
    {
      v11 = v10 + 1;
      v12 = &v17[2 * v10];
      if ( v9 >= a2 )
      {
        EventDataDescCreateString((__int64)v12, L"N/A", 0x20u);
        v14 = &v16;
        v10 = v11 + 1;
      }
      else
      {
        EventDataDescCreateString((__int64)v12, *a3, 0x20u);
        v10 = v13 + 2;
        v14 = a4;
      }
      v15 = 2LL * v11;
      ++v9;
      ++a4;
      ++a3;
      v17[v15] = v14;
      v17[v15 + 1] = 8LL;
    }
    while ( v9 < 8 );
    return IopLiveDumpTrace();
  }
  return result;
}
