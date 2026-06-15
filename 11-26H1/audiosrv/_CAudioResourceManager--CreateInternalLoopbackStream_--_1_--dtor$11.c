/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x180167C63
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)(a2 + 328));
}
