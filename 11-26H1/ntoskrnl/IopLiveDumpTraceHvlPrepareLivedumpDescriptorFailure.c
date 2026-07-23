/*
 * XREFs of IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x1405D4AF8
 * Callers:
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CF894 (IopLiveDumpAllocateExtraBuffers.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405DA0A4 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
