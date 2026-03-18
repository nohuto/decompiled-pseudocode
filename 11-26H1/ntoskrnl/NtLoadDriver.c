/*
 * XREFs of NtLoadDriver @ 0x140B3B790
 * Callers:
 *     DifNtLoadDriverWrapper @ 0x14067A2E0 (DifNtLoadDriverWrapper.c)
 * Callees:
 *     IopLoadDriverImage @ 0x14052A428 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
