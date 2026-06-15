/*
 * XREFs of _lambda_f00ad828a2d515e855b0de47f172bf9e_::operator() @ 0x1800AAA1C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$emplace_front@AEAPEAUISessionInternalEvents@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@AEAPEAUISessionInternalEvents@@@Z @ 0x1800AAB68 (--$emplace_front@AEAPEAUISessionInternalEvents@@@-$forward_list@V-$com_ptr_t@UISessionInternalEv.c)
 *     ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@AEAV23@@Z @ 0x1800D18E8 (--$emplace_front@AEAV-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@-$f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f00ad828a2d515e855b0de47f172bf9e_::operator()(__int64 a1)
{
  _QWORD *v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int CustomResourceManagerService; // eax
  CEndpointCharacteristics *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *v10; // [rsp+60h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF

  std::forward_list<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>>::emplace_front<ISessionInternalEvents * &>(*(_QWORD *)a1 + 288LL);
  *(_OWORD *)v7 = 0LL;
  v8 = 0LL;
  v2 = (_QWORD *)(*(_QWORD *)a1 + 240LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 264LL) > 7uLL )
    v2 = (_QWORD *)*v2;
  v3 = (*(__int64 (__fastcall **)(PVOID, _QWORD *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                               + 40LL))(
         g_pEndpointCharacteristicsCache,
         v2,
         0LL,
         0LL,
         v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     v7[0],
                                     &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                     &v10);
    v4 = CustomResourceManagerService;
    if ( CustomResourceManagerService >= 0 )
    {
      if ( v10 )
      {
        v11 = 0LL;
        if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v10)(
               v10,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v11) >= 0 )
          std::forward_list<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy> &>(
            *(_QWORD *)a1 + 288LL,
            &v11);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v7);
  return v4;
}
