/*
 * XREFs of _lambda_9bf885da0abb1dc890da24065742d1f0_::operator() @ 0x1800FA104
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 */

bool __fastcall lambda_9bf885da0abb1dc890da24065742d1f0_::operator()(__int64 **a1)
{
  char v1; // bl
  GUID v3; // xmm0
  unsigned __int16 *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  GUID v9; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(GUID *)a1[3];
  v4 = (unsigned __int16 *)*a1[2];
  v5 = *(unsigned int *)a1[1];
  v6 = **a1;
  v10 = 0;
  v7 = *(_QWORD **)(v6 + 8);
  v9 = v3;
  if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v7, v5, v4, &v9, 0, &v10, 0LL, 0LL, 0LL) >= 0 )
    return *a1[4] < (unsigned int)(int)((double)v10 * 10000000.0 / (double)*(int *)(*a1[2] + 4) + 0.5);
  return v1;
}
