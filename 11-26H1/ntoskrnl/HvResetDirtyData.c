/*
 * XREFs of HvResetDirtyData @ 0x1408B8348
 * Callers:
 *     HvStoreModifiedData @ 0x1408B7270 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1408B8AE4 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)-*(_DWORD *)(a1 + 104);
    _InterlockedAdd(&CmpDirtySectorCount, result);
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
