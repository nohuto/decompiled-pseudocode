/*
 * XREFs of _EffectPack::GetSupportedConnectorModesInternal_::_1_::dtor$17 @ 0x180162B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::GetSupportedConnectorModesInternal_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(a2 + 56);
}
