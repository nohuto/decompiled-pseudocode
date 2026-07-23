/*
 * XREFs of IopLiveDumpTraceBufferAllocation @ 0x1405D4180
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char IopLiveDumpTraceBufferAllocation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // [rsp+20h] [rbp-49h] BYREF
  __int64 v3; // [rsp+28h] [rbp-41h] BYREF
  __int64 v4; // [rsp+30h] [rbp-39h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-29h] BYREF

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = *(_QWORD *)(v1 + 688) << 12;
    v3 = *(_QWORD *)(v1 + 696) << 12;
    v5 = *(_QWORD *)(v1 + 704) << 12;
    v4 = *(unsigned int *)(v1 + 152);
    v6[0] = &v2;
    v6[2] = &v3;
    v6[4] = &v4;
    v6[6] = &v5;
    v6[8] = v1 + 768;
    v6[10] = v1 + 776;
    v6[12] = v1 + 296;
    v6[1] = 8LL;
    v6[3] = 8LL;
    v6[5] = 8LL;
    v6[7] = 8LL;
    v6[9] = 8LL;
    v6[11] = 8LL;
    v6[13] = 8LL;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION, 7LL, v6);
  }
  return result;
}
