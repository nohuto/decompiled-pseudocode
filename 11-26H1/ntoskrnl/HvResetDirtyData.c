/*
 * XREFs of HvResetDirtyData @ 0x1408BE918
 * Callers:
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x1408BF0B4 (HvpResetPageProtection.c)
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
