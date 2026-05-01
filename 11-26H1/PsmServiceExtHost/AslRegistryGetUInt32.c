/*
 * XREFs of AslRegistryGetUInt32 @ 0x18009922C
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x18008F004 (SdbpGetMergeSdbsDisabled.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1800992B4 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  unsigned int v6; // ebx
  struct _UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&v8, a3);
  v6 = inited;
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v8);
  else
    AslLogCallPrintf(1LL, "AslRegistryGetUInt32", 1148LL, "RtlInitUnicodeStringEx failed [%x]", inited);
  return v6;
}
