/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004493C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004456C (--1CAudioSession@@MEAA@XZ.c)
 *     ??1?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180044930 (--1-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_p.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046420 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006DCDC (--1CAudioStream@@UEAA@XZ.c)
 *     ?GetTsSessionId@CAudioSession@@UEAAKXZ @ 0x180083670 (-GetTsSessionId@CAudioSession@@UEAAKXZ.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800CB634 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x1800CE020 (-ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D2788 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    while ( v1 != v3 )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1++);
    v4 = *(void **)a1;
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v7 = *(void **)a1;
    v6 = (const struct std::nothrow_t *)(v5 & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = (unsigned __int64)v6;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = v7;
      v6 = (const struct std::nothrow_t *)v8;
    }
    operator delete(v4, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
