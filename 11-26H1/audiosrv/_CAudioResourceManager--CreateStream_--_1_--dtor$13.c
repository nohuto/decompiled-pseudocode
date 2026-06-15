/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$13 @ 0x180167DB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)(a2 + 320));
}
