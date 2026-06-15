/*
 * XREFs of ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800C73F0
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800BBBD0 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x1800465BC (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800C3F88 (--0-$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800C3FEC (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800C50B4 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     ?GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180101FC0 (-GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::DisconnectOffloadStreams(__int64 a1, __int64 a2)
{
  int OffloadStreamGroups; // eax
  unsigned int v4; // ebx
  __int64 *i; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-59h] BYREF
  __int64 v11; // [rsp+30h] [rbp-49h]
  _BYTE *v12; // [rsp+38h] [rbp-41h]
  _BYTE v13[64]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v14[64]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v10 = 0LL;
  v11 = 0LL;
  OffloadStreamGroups = DeviceGraphStore::GetOffloadStreamGroups(&v10);
  v4 = OffloadStreamGroups;
  if ( OffloadStreamGroups >= 0 )
  {
    std::function<void (bool)>::function<void (bool)>((__int64)v13, a2);
    v12 = v13;
    v7 = (__int64 *)*((_QWORD *)&v10 + 1);
    for ( i = (__int64 *)v10; i != v7; ++i )
      lambda_c5ba6885c59c7d44add3d2e24646e672_::operator()((__int64)v13, i);
    std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>((__int64)v14, (__int64)v13);
    lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)v13, v8);
    lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)v14, v9);
    if ( (_QWORD)v10 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v10,
        *((__int64 **)&v10 + 1));
      std::_Deallocate<16>((void *)v10, (struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAAC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)OffloadStreamGroups);
    if ( (_QWORD)v10 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v10,
        *((__int64 **)&v10 + 1));
      std::_Deallocate<16>((void *)v10, (struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v4;
  }
}
