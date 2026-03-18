/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140B90930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViThunkHookExportAddress @ 0x140B87918 (ViThunkHookExportAddress.c)
 */

unsigned __int8 *__fastcall VerifierMmGetSystemRoutineAddress(const UNICODE_STRING *a1)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v3; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned __int8 *)guard_dispatch_icall_no_overrides(a1);
  if ( result )
  {
    v3 = result;
    if ( !(unsigned int)ViThunkHookExportAddress(&v3, a1, (unsigned __int8 **)&VfRegularThunks)
      && !(unsigned int)ViThunkHookExportAddress(&v3, a1, (unsigned __int8 **)&VfPoolThunks) )
    {
      ViThunkHookExportAddress(&v3, a1, (unsigned __int8 **)&VfDifThunks);
    }
    return v3;
  }
  return result;
}
