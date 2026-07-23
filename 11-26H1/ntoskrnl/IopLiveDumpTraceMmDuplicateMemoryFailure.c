/*
 * XREFs of IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x1405D4FDC
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceMmDuplicateMemoryFailure(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // rcx
  bool v4; // zf
  __int64 *v5; // rcx
  BOOL v6; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+28h] [rbp-30h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  v6 = a2 == 258;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v7[1] = 4LL;
    v7[0] = &v8;
    v7[3] = 4LL;
    v7[2] = &v6;
    v4 = (*(_DWORD *)(v3 + 80) & 1) == 0;
    v5 = LIVEDUMP_EVENT_SIZING_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    if ( v4 )
      v5 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MM_DUPLICATE_MEMORY_FAILURE;
    return IopLiveDumpTrace(v5, 2LL, v7);
  }
  return result;
}
