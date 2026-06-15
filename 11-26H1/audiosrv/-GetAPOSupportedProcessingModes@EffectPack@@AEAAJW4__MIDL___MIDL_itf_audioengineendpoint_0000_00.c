/*
 * XREFs of ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000CB1C
 * Callers:
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18013B304 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall EffectPack::GetAPOSupportedProcessingModes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r8

  v4 = a2;
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(a1 + 1456) )
  {
    _o_terminate(a1, a2, a3);
    __debugbreak();
    JUMPOUT(0x18000CB94LL);
  }
  v6 = *(_QWORD *)(a1 + 1464) + 96LL * (int)a2;
  if ( (_DWORD)a3 == 1
    || (v7 = CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(a1 + 1584)), v8 = 0LL, v7)
    || v4 == 3 )
  {
    v8 = 1LL;
  }
  return SystemEffectDescriptor::GetSupportedProcessingModes(v6, a4, v8);
}
