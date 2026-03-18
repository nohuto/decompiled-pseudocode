/*
 * XREFs of NtLoadKey2 @ 0x140B388F0
 * Callers:
 *     DifNtLoadKey2Wrapper @ 0x14067A630 (DifNtLoadKey2Wrapper.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKey2(void *a1, void *a2, unsigned int a3)
{
  return CmLoadDifferencingKey(a1, a2, a3, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL, 0, 0LL, KeGetCurrentThread()->PreviousMode);
}
