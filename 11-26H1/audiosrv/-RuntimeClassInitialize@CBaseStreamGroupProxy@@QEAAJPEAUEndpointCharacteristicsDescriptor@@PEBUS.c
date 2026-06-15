/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FEF40
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FF250 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioModeEffectsWatcher@@@Z @ 0x1800FFA88 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x18003EC8C (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180053CD4 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180063B78 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ??1AudioPumpDspResourceTokenPair@@QEAA@XZ @ 0x1800C16F0 (--1AudioPumpDspResourceTokenPair@@QEAA@XZ.c)
 *     ?TryGetAudioPumpDspResourceTokenFromTokenList@@YA?AUAudioPumpDspResourceTokenPair@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800C239C (-TryGetAudioPumpDspResourceTokenFromTokenList@@YA-AUAudioPumpDspResourceTokenPair@@AEBV-$vector@.c)
 *     ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x1800C34B8 (--$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharact.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        __int64 a1,
        CEndpointCharacteristics **a2,
        __int64 a3,
        int a4,
        __int64 **a5)
{
  CEndpointCharacteristics *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  IMalloc *v14; // rcx
  unsigned int v15; // edi
  const char *v16; // r9
  __int64 result; // rax
  __int64 v18; // r14
  int v19; // eax
  unsigned int v20; // edi
  CResourcePriorityTracker *v21; // rax
  __int64 *AudioPumpDspResourceTokenFromTokenList; // rax
  __int64 v23; // rdi
  _QWORD v24[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    *(_DWORD *)(a1 + 336) = (*(__int64 (**)(void))(*(_QWORD *)*a2 + 56LL))();
    v9 = *a2;
    v10 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    CEndpointCharacteristics::TryGetCustomResourceManagerService(
      v9,
      &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
      (void **)(a1 + 328));
    v13 = _AllocString<CTCoAllocPolicy>(v12, v11, *(const wchar_t **)a3, (_QWORD *)(a1 + 56));
    v15 = v13;
    if ( v13 >= 0 )
    {
      v18 = *(unsigned __int16 *)(*(_QWORD *)(a3 + 16) + 16LL);
      v19 = CTCoAllocPolicy::Alloc(v14, 1, v18 + 18, (void **)(a1 + 48));
      v20 = v19;
      if ( v19 >= 0 )
      {
        memcpy_0(*(void **)(a1 + 48), *(const void **)(a3 + 16), v18 + 18);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 32);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(a1 + 68) = *(_DWORD *)(a3 + 8);
        *(_QWORD *)(a1 + 160) = 0LL;
        *(_DWORD *)(a1 + 168) = 0;
        *(_BYTE *)(a1 + 64) = *(_BYTE *)(a3 + 49);
        *(_BYTE *)(a1 + 65) = *(_BYTE *)(a3 + 50);
        CProcessingModeParameters::operator=((char **)(a1 + 288), (char **)(a3 + 56));
        v21 = (CResourcePriorityTracker *)operator new[](0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v26 = (__int64)v21;
        if ( v21 )
          v21 = CResourcePriorityTracker::CResourcePriorityTracker(v21, a4);
        *(_QWORD *)(a1 + 96) = v21;
        if ( v21 )
        {
          AudioPumpDspResourceTokenFromTokenList = TryGetAudioPumpDspResourceTokenFromTokenList(v24, a5);
          v23 = *AudioPumpDspResourceTokenFromTokenList;
          *AudioPumpDspResourceTokenFromTokenList = 0LL;
          v26 = v23;
          AudioPumpDspResourceTokenPair::~AudioPumpDspResourceTokenPair((AudioPumpDspResourceTokenPair *)v24);
          if ( v23 )
          {
            if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 88) )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<CEndpointCharacteristics * &>(
                (__int64 **)(a1 + 72),
                *(__int64 **)(a1 + 80),
                &v26);
            }
            else
            {
              wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
                *(_QWORD **)(a1 + 80),
                v23);
              *(_QWORD *)(a1 + 80) += 8LL;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x8007000ELL);
          result = 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x136,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v19);
        result = v20;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x133,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
      result = v15;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v16);
  }
  return result;
}
