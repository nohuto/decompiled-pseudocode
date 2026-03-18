/*
 * XREFs of AslRegistryGetUInt32 @ 0x140B30A48
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140881504 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x140881A8C (SdbpGetMergeSdbsDisabled.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140B30748 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     AslRegistryGetUInt32_UStr @ 0x14088859C (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32(_DWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v7);
  else
    AslLogCallPrintf(1LL, (__int64)"AslRegistryGetUInt32");
  return (unsigned int)inited;
}
