/*
 * XREFs of ?EffectsChainIsValid@CEndpointCharacteristics@@QEAA_NPEAUICompositeSystemEffect@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z @ 0x180138D84
 * Callers:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::EffectsChainIsValid(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  bool v4; // bl
  _QWORD *v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+90h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *a2;
  v7[0] = off_180178B18;
  v7[1] = a1;
  v7[2] = &v9;
  v8 = v7;
  v4 = (*(int (__fastcall **)(__int64 *, _QWORD *))(v3 + 40))(a2, v7) >= 0;
  if ( v8 )
  {
    v5 = v7;
    LOBYTE(v5) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v5);
  }
  return v4;
}
