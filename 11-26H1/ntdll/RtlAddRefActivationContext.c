/*
 * XREFs of RtlAddRefActivationContext @ 0x18005DDE0
 * Callers:
 *     RtlGetActiveActivationContext @ 0x18005D450 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18005D6F0 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18005E054 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    do
    {
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      RefCount = ActivationContext->RefCount;
    }
    while ( RefCount != _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount + 1, RefCount) );
  }
}
