/*
 * XREFs of IopLiveDumpGetCapturePages @ 0x1405CF8E0
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1405CDF10 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x140344034 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405CF9D0 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405D7A30 (IopLiveDumpTraceEventGeneric.c)
 */

void __fastcall IopLiveDumpGetCapturePages(int a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v7; // edi
  bool v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  const wchar_t *v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v7 = BufferChunkSizeInPages;
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 32));
  IopLiveDumpGetCapturePagesNoLock(a1, a2, a3, v7, a5, a6, a7);
  v11 = IopLiveDumpShouldCheckChunkCRC(a2);
  v13 = 0LL;
  if ( v11 )
  {
    while ( v13 < (unsigned __int64)BufferChunkSizeInBytes >> 3 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v12) + 8 * v13) != v12 )
      {
        v15 = v12;
        v14 = L"ChunkIndex";
        IopLiveDumpTraceEventGeneric(L"IopLiveDumpGetCapturePagesMismatch", 1LL, &v14, &v15);
        break;
      }
      ++v13;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 32));
}
