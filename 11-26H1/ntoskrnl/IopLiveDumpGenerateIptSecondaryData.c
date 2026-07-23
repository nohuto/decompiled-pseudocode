/*
 * XREFs of IopLiveDumpGenerateIptSecondaryData @ 0x1405D1F08
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405D43FC (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 IopLiveDumpGenerateIptSecondaryData()
{
  __int64 v0; // rdi
  __int64 MillisecondCounter; // rsi
  void **v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // eax
  void *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax

  v0 = IopLiveDumpContext;
  MillisecondCounter = 0LL;
  if ( (*(_DWORD *)(IopLiveDumpContext + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v2 = (void **)(v0 + 1048);
  v3 = *(_QWORD *)(v0 + 1048);
  if ( v3 )
  {
    *(_QWORD *)(v0 + 1080) = v3;
    *(_DWORD *)(v0 + 1088) = 0;
    guard_dispatch_icall_no_overrides(2LL, 0LL);
    v4 = *(_DWORD *)(v0 + 1088);
    if ( v4 && *(_DWORD *)(v0 + 1056) >= v4 )
    {
      v5 = *(void **)(v0 + 1080);
      if ( *v2 != v5 )
      {
        memmove(*v2, v5, v4);
        *(_QWORD *)(v0 + 1080) = *v2;
        v4 = *(_DWORD *)(v0 + 1088);
      }
      if ( v4 && *(_QWORD *)(v0 + 1000) )
        guard_dispatch_icall_no_overrides(7LL, 0LL);
    }
    else
    {
      *(_QWORD *)(v0 + 1080) = 0LL;
      *(_DWORD *)(v0 + 1088) = 0;
    }
  }
  result = *(unsigned int *)(v0 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    v7 = IopLiveDumpGetMillisecondCounter(0);
    return IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(v0, v7 - MillisecondCounter);
  }
  return result;
}
