/*
 * XREFs of ValidateStringParameter @ 0x18009EAF4
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x18009E510 (RtlCreateProcessParametersInternal.c)
 *     ValidateOptionalString @ 0x18009EA40 (ValidateOptionalString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStringParameter(__int64 a1)
{
  if ( !a1 || *(_WORD *)(a1 + 2) < *(_WORD *)a1 )
    return 3221225485LL;
  if ( *(_WORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL ? 0xC000000D : 0;
  return 0LL;
}
