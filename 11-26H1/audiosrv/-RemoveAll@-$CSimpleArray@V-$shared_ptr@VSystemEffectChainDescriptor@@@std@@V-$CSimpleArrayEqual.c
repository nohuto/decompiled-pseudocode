/*
 * XREFs of ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180010CC0
 * Callers:
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x18000AC10 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _EffectPack::GetSupportedConnectorModesInternal_::_1_::dtor$17 @ 0x180162B30 (_EffectPack--GetSupportedConnectorModesInternal_--_1_--dtor$17.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x180162C80 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(
        __int64 a1)
{
  int v2; // esi
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rbx

  if ( *(_QWORD *)a1 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *(volatile signed __int32 **)(*(_QWORD *)a1 + v3 + 8);
        if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
          if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
        }
        ++v2;
        v3 += 16LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 8) );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
