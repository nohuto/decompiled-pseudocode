/*
 * XREFs of ?AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1801115B0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18007BF48 (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AreResourcesAvailableForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct _GUID *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rbx
  int v9; // eax
  _DWORD *v10; // r10
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v6 = a4;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 56LL))(*(_QWORD *)a1);
  v10 = &unk_18018B570;
  if ( v9 )
    v10 = &unk_18018B5D0;
  v11 = v10[v6] + (a5 != 0 ? 0x10 : 0);
  v13 = (__int128)*a2;
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct EndpointCharacteristicsDescriptor *, __int128 *, _QWORD, int))(*(_QWORD *)g_AudioResourceManager + 56LL))(
           g_AudioResourceManager,
           a1,
           &v13,
           a3,
           2 * v11 + 1);
}
