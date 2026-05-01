/*
 * XREFs of ?AddRef@CDummyUnknown@@WBA@EAAKXZ @ 0x180539B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyUnknown::AddRef(__int64 a1)
{
  return CDummyUnknown::AddRef((CDummyUnknown *)(a1 - 16));
}
