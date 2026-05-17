/*
 * XREFs of ValidateOptionalString @ 0x18009F910
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x18009F3E0 (RtlCreateProcessParametersInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOptionalString(__int64 a1)
{
  if ( a1 )
    return ValidateStringParameter(a1);
  else
    return 0LL;
}
