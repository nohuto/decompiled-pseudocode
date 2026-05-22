/*
 * XREFs of ?AddRef@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x1800CD500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::AddRef(__int64 a1)
{
  return DWMLegacyInputTarget::AddRef((DWMLegacyInputTarget *)(a1 - 16));
}
