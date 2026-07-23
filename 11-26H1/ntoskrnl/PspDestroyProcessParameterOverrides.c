/*
 * XREFs of PspDestroyProcessParameterOverrides @ 0x140ABE194
 * Callers:
 *     PspDeleteCreateProcessContext @ 0x140A79FBC (PspDeleteCreateProcessContext.c)
 *     PspGetProcessParameterOverrides @ 0x140AE5F9C (PspGetProcessParameterOverrides.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDestroyProcessParameterOverrides(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PsDestroyProcessParameterOverrides();
  return result;
}
