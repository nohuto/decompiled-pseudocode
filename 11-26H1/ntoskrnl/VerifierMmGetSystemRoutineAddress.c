/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140C45730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViThunkHookExportAddress @ 0x140C3BAE0 (ViThunkHookExportAddress.c)
 */

unsigned __int8 *__fastcall VerifierMmGetSystemRoutineAddress(const UNICODE_STRING *a1, __int64 a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v4; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned __int8 *)guard_dispatch_icall_no_overrides((__int64)a1, a2);
  if ( result )
  {
    v4 = result;
    if ( !(unsigned int)ViThunkHookExportAddress(&v4, a1, (unsigned __int8 **)&VfRegularThunks)
      && !(unsigned int)ViThunkHookExportAddress(&v4, a1, (unsigned __int8 **)&VfPoolThunks) )
    {
      ViThunkHookExportAddress(&v4, a1, (unsigned __int8 **)&VfDifThunks);
    }
    return v4;
  }
  return result;
}
