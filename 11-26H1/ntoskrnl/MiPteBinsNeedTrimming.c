/*
 * XREFs of MiPteBinsNeedTrimming @ 0x1402A52F0
 * Callers:
 *     MiMakeSystemPtesAppear @ 0x1402A5094 (MiMakeSystemPtesAppear.c)
 *     MiAdjustPteBins @ 0x1402A51F0 (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1402A534C (MiGetNumberOfCachedPtes.c)
 */

__int64 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  unsigned __int64 NumberOfCachedPtes; // rax
  unsigned __int64 v3; // r9
  __int64 result; // rax
  unsigned __int64 v5; // rdx

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  if ( NumberOfCachedPtes < 0x400 )
    return 0LL;
  v3 = NumberOfCachedPtes + *(_QWORD *)(a1 + 88);
  if ( v3 <= 0x200000 )
    return 0LL;
  result = 1LL;
  v5 = 16LL * (*(_QWORD *)a1 - *(_QWORD *)(a1 + 72));
  if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
    v5 = *(_QWORD *)a1 - *(_QWORD *)(a1 + 72);
  if ( v3 <= v5 >> 2 )
    return 0LL;
  return result;
}
