/*
 * XREFs of ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1801074AC
 * Callers:
 *     s_ActivateMulticastSession @ 0x180108630 (s_ActivateMulticastSession.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180025A18 (--$_Emplace_reallocate@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x180107750 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMulticastSessionManager::ActivateMulticastSession(
        CMulticastSessionManager *this,
        const unsigned __int16 **a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  __int64 v8; // rbx
  const char *v9; // r9
  __int64 result; // rax
  int EndpointCharacteristics; // eax
  unsigned int v12; // edi
  struct CEndpointCharacteristics *v13; // rax
  int CompatibleMulticastProvider; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  struct CEndpointCharacteristics *v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+28h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v19 = 0LL;
  v20 = 0LL;
  v8 = 0LL;
  try
  {
    while ( (unsigned int)v8 < a3 )
    {
      if ( !a2[v8] )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
          (const char *)0x80070057LL);
        if ( (_QWORD)v19 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
            (__int64 *)v19,
            *((__int64 **)&v19 + 1));
          std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        return 2147942487LL;
      }
      v18 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
      EndpointCharacteristics = GetEndpointCharacteristics(a2[v8], 0, &v18);
      v12 = EndpointCharacteristics;
      if ( EndpointCharacteristics < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFC,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
          (const char *)(unsigned int)EndpointCharacteristics);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
        if ( (_QWORD)v19 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
            (__int64 *)v19,
            *((__int64 **)&v19 + 1));
          std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        return v12;
      }
      if ( *((_QWORD *)&v19 + 1) == v20 )
      {
        std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
          &v19,
          *((__int64 *)&v19 + 1),
          (__int64 *)&v18);
      }
      else
      {
        v13 = v18;
        v18 = 0LL;
        **((_QWORD **)&v19 + 1) = v13;
        *((_QWORD *)&v19 + 1) += 8LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      v8 = (unsigned int)(v8 + 1);
    }
    v18 = 0LL;
    CompatibleMulticastProvider = CMulticastSessionManager::GetCompatibleMulticastProvider(this, &v19, &v18);
    v15 = CompatibleMulticastProvider;
    if ( CompatibleMulticastProvider >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *, __int128 *, const struct _GUID *))(*(_QWORD *)v18 + 72LL))(
              v18,
              &v19,
              a4);
      v17 = v16;
      if ( v16 >= 0 )
      {
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v18);
        if ( (_QWORD)v19 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
            (__int64 *)v19,
            *((__int64 **)&v19 + 1));
          std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x105,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
          (const char *)(unsigned int)v16);
        wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v18);
        if ( (_QWORD)v19 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
            (__int64 *)v19,
            *((__int64 **)&v19 + 1));
          std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        result = v17;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x102,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)(unsigned int)CompatibleMulticastProvider);
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v18);
      if ( (_QWORD)v19 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
          (__int64 *)v19,
          *((__int64 **)&v19 + 1));
        std::_Deallocate<16>((void *)v19, (struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      result = v15;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x108,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           v9);
  }
  return result;
}
