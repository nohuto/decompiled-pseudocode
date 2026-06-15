/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FF250
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F88E8 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18008058C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FEF40 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveStreamGroupProxy::RuntimeClassInitialize(
        __int64 a1,
        CEndpointCharacteristics **a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 **a6)
{
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  IUnknown *pProxy; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_a3c92b9a_cda0_40fe_8a49_4d3b61caf7f7,
               (LPVOID *)&pProxy);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 2148LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_12;
  }
  Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 2154LL;
    goto LABEL_5;
  }
  AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v20, a6);
  v14 = AudioPumpDspResourceTokenFromTokenList[1];
  AudioPumpDspResourceTokenFromTokenList[1] = 0LL;
  v19 = v14;
  AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v20);
  v15 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64, __int64))pProxy->lpVtbl[1].AddRef)(
          pProxy,
          a4,
          v14,
          (a1 + 16) & -(__int64)(a1 != 0));
  v11 = v15;
  if ( v15 >= 0 )
  {
    Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)(a1 + 112), (__int64)pProxy);
    v15 = CBaseStreamGroupProxy::RuntimeClassInitialize(a1 + 8, a2, a3, a5, a6);
    v11 = v15;
    if ( v15 >= 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      v11 = 0;
      goto LABEL_12;
    }
    v16 = 2160LL;
  }
  else
  {
    v16 = 2157LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
  return v11;
}
