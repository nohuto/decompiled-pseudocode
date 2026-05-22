/*
 * XREFs of ?AddRef@OneCoreUAPInputHost@@WCA@EAAKXZ @ 0x1800A1BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OneCoreUAPInputHost::AddRef(__int64 a1)
{
  return DWMLegacyInputTarget::AddRef((DWMLegacyInputTarget *)(a1 - 32));
}
