/*
 * XREFs of IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x1405D2308
 * Callers:
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CD084 (IopLiveDumpAllocateExtraBuffers.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x14052F2C8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405D78B4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure(int a1)
{
  char result; // al
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2[1] = 4LL;
    v2[0] = &v3;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_HVL_PREPARE_LIVEDUMP_DESCRIPTOR_FAILURE, 1LL, v2);
  }
  return result;
}
