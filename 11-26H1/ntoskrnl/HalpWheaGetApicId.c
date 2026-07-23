/*
 * XREFs of HalpWheaGetApicId @ 0x14044C290
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 *     HalpAddMcaToProcessorSpecificSection @ 0x14044ACCC (HalpAddMcaToProcessorSpecificSection.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaGetApicId(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v3 = 0LL;
  v2 = 0;
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( qword_140FBB5D8 )
    {
      guard_dispatch_icall_no_overrides(a1, &v3);
      return v3;
    }
  }
  else
  {
    guard_dispatch_icall_no_overrides(a1, &v2);
    return v2;
  }
  return result;
}
