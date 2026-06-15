/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800B97D8
 * Callers:
 *     ?CreateInstance@CAPOWrapperClient@@SAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x1800B9AAC (-CreateInstance@CAPOWrapperClient@@SAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AE.c)
 * Callees:
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x18006BBDC (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEBU_GUID@@@Z @ 0x1800BA6B8 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4__MIDL___MIDL_itf_audioenginecore_0000_000.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum __MIDL___MIDL_itf_audioenginecore_0000_0000_0002 &,_GUID const &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4)
{
  void *v8; // rax
  int v9; // edi
  CAPOWrapperClient *v10; // rbx
  void *v12; // [rsp+20h] [rbp-28h]
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new[](0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12 = v8;
  if ( v8 )
  {
    v10 = CAPOWrapperClient::CAPOWrapperClient((CAPOWrapperClient *)v8);
    v13 = 0LL;
    v9 = CAPOWrapperClient::RuntimeClassInitialize(v10, *a2, *a3, a4, v12, v10);
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
             a1);
      (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else if ( v10 )
    {
      (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
  return (unsigned int)v9;
}
