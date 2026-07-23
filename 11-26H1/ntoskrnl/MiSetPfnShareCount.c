/*
 * XREFs of MiSetPfnShareCount @ 0x1403CDFF0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiMakeShadowPageTableRange @ 0x14087BC3C (MiMakeShadowPageTableRange.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnShareCount(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r8
  signed __int64 result; // rax
  signed __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 24),
             a2 ^ (a2 ^ v2) & 0xC000000000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 a2 ^ (a2 ^ result) & 0xC000000000000000uLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
