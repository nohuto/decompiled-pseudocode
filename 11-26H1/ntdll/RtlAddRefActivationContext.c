/*
 * XREFs of RtlAddRefActivationContext @ 0x1800126B0
 * Callers:
 *     RtlGetActiveActivationContext @ 0x180011D20 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180011FC0 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180012924 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    do
    {
      if ( *a1 == 0x7FFFFFFF )
        break;
      v1 = *a1;
    }
    while ( v1 != _InterlockedCompareExchange(a1, v1 + 1, v1) );
  }
}
