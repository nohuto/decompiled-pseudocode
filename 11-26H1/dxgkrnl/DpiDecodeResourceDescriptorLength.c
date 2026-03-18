/*
 * XREFs of DpiDecodeResourceDescriptorLength @ 0x140423D08
 * Callers:
 *     DpiVerifyResources @ 0x140401138 (DpiVerifyResources.c)
 *     DpiFdoDetectPostDevice @ 0x1404023B8 (DpiFdoDetectPostDevice.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DpiDecodeResourceDescriptorLength(__int64 a1)
{
  __int16 v2; // ax

  if ( *(_BYTE *)a1 == 3 )
    return *(unsigned int *)(a1 + 12);
  if ( *(_BYTE *)a1 == 7 )
  {
    v2 = *(_WORD *)(a1 + 2);
    if ( (v2 & 0x200) != 0 )
      return (unsigned __int64)*(unsigned int *)(a1 + 12) << 8;
    if ( (v2 & 0x400) != 0 )
      return (unsigned __int64)*(unsigned int *)(a1 + 12) << 16;
    if ( (v2 & 0x800) != 0 )
      return (unsigned __int64)*(unsigned int *)(a1 + 12) << 32;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3861;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3868;
  }
  return 0LL;
}
