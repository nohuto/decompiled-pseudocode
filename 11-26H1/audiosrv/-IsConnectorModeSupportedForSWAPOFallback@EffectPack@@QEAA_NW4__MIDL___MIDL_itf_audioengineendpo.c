/*
 * XREFs of ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800792D0
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18007BF48 (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18008AEDC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall EffectPack::IsConnectorModeSupportedForSWAPOFallback(EffectPack *this, __int64 a2, struct _GUID *a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  int i; // eax
  _QWORD *v7; // r8
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 196);
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(v3 + 2040) )
  {
    _o_terminate((int)a2, a2, a3);
    __debugbreak();
    JUMPOUT(0x18007933BLL);
  }
  v5 = *(_QWORD *)(v3 + 2048) + 16LL * (int)a2;
  for ( i = 0; i < *(_DWORD *)(v5 + 8); ++i )
  {
    v7 = (_QWORD *)(*(_QWORD *)v5 + 16LL * i);
    v8 = *v7 - *(_QWORD *)&a3->Data1;
    if ( *v7 == *(_QWORD *)&a3->Data1 )
      v8 = v7[1] - *(_QWORD *)a3->Data4;
    if ( !v8 )
      return i != -1;
  }
  i = -1;
  return i != -1;
}
