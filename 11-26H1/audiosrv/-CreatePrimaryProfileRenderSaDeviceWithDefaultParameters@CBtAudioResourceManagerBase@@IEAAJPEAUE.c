/*
 * XREFs of ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E0D18
 * Callers:
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E65D8 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180078BF0 (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E2C44 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800E43B8 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters(
        CBtAudioResourceManagerBase *a1,
        struct EndpointCharacteristicsDescriptor *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // esi
  int v7; // edi
  int DefaultPrimaryProfileRenderSaDeviceParams; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int SaDeviceWrapper; // eax
  SaDeviceParams *v13; // [rsp+50h] [rbp-31h] BYREF
  SaDeviceParams **v14; // [rsp+58h] [rbp-29h] BYREF
  struct SaDeviceParams *v15; // [rsp+60h] [rbp-21h] BYREF
  char v16; // [rsp+68h] [rbp-19h]
  _OWORD v17[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v18; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v6 = (int)a2;
  v7 = (int)a1;
  v13 = 0LL;
  v14 = &v13;
  v15 = 0LL;
  v16 = 1;
  DefaultPrimaryProfileRenderSaDeviceParams = CBtAudioResourceManagerBase::GetDefaultPrimaryProfileRenderSaDeviceParams(
                                                a1,
                                                a2,
                                                a3,
                                                &v15);
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v14);
  if ( DefaultPrimaryProfileRenderSaDeviceParams >= 0 )
  {
    memset(v17, 0, sizeof(v17));
    v18 = 0LL;
    SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                        v7,
                        v6,
                        (_DWORD)v13,
                        0,
                        0,
                        (__int64)v17,
                        a4,
                        0LL,
                        0LL,
                        a5);
    DefaultPrimaryProfileRenderSaDeviceParams = SaDeviceWrapper;
    if ( SaDeviceWrapper >= 0 )
    {
      DefaultPrimaryProfileRenderSaDeviceParams = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)SaDeviceWrapper;
    v10 = 558LL;
  }
  else
  {
    v9 = (unsigned int)DefaultPrimaryProfileRenderSaDeviceParams;
    v10 = 554LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)v9);
LABEL_7:
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v13);
  return (unsigned int)DefaultPrimaryProfileRenderSaDeviceParams;
}
