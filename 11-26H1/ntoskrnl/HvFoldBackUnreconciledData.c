/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140AE33FC
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14045F150 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x140AE3454 (HvFreeUnreconciledData.c)
 */

__int64 __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1744));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1736) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  return HvFreeUnreconciledData(a1);
}
