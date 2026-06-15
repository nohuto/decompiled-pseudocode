/*
 * XREFs of ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@PEAU12@@1@AEBU_GUID@@@Z @ 0x180150154 (--$_Eqrange@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocato.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180150320 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801521CC (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180152510 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CExclusiveModeListener::OnHmdRemoved(
        CExclusiveModeListener *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int updated; // eax
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-B8h]
  __int64 v19; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h]
  char v21; // [rsp+58h] [rbp-A0h]
  __int128 v22; // [rsp+60h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-88h] BYREF
  __int128 v24; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v25[32]; // [rsp+90h] [rbp-68h] BYREF
  __int128 *v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+B8h] [rbp-40h]
  char *v28; // [rsp+C0h] [rbp-38h]
  __int64 v29; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  lpCriticalSection = v5;
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v17,
    (__int64)a3);
  v16 = 0LL;
  v6 = (**v17)(v17, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v16);
  if ( v6 < 0 )
  {
    v7 = 213LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v6;
  }
  v24 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 48LL))(v16, &v24);
  if ( v6 < 0 )
  {
    v7 = 216LL;
    goto LABEL_3;
  }
  v9 = (_DWORD *)*((_QWORD *)this + 44);
  if ( *v9 > 4u )
  {
    v28 = (char *)this + 136;
    v29 = 16LL;
    v26 = &v24;
    v27 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801AE87E, 0LL, 0LL, 4, (__int64)v25);
  }
  v10 = std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>((__int64 *)this + 20, (__int64)&v22, &v24);
  v11 = *(_QWORD *)v10;
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v19,
    *(_QWORD *)(*(_QWORD *)v10 + 48LL));
  v20 = *(_QWORD *)(v11 + 56);
  v21 = *(_BYTE *)(v11 + 64);
  if ( v20 && (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 104LL))(v16), v13 = v12, v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v5 )
    {
      LeaveCriticalSection(v5);
      lpCriticalSection = 0LL;
    }
    return v13;
  }
  else
  {
    v22 = *(_OWORD *)std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Eqrange<_GUID>(
                       (__int64 *)this + 20,
                       &v23,
                       &v24);
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Erase(
      (char *)this + 160,
      &v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    v14 = v24 - *((_QWORD *)this + 17);
    if ( (_QWORD)v24 == *((_QWORD *)this + 17) )
      v14 = *((_QWORD *)&v24 + 1) - *((_QWORD *)this + 18);
    if ( !v14 )
    {
      *(GUID *)((char *)this + 136) = GUID_00000000_0000_0000_0000_000000000000;
      *((_DWORD *)this + 44) = 0;
      updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          243LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
}
