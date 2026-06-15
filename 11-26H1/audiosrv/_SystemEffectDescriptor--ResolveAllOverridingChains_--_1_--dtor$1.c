/*
 * XREFs of _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x180162C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(a2 + 40);
}
