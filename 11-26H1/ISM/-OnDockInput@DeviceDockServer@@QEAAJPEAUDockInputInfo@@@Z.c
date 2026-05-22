/*
 * XREFs of ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08
 * Callers:
 *     ?OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BCA10 (-OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180045D60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800954A0 (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B2580 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x180182914 (--$_Emplace@AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@Uta.c)
 *     ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@1@AEBUDockInputIdentity@@@Z @ 0x180182A34 (--$_Eqrange@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@U.c)
 *     ??$_Find_lower_bound@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@AEBUDockInputIdentity@@@Z @ 0x180182C40 (--$_Find_lower_bound@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@.c)
 *     ??$_Lower_bound_duplicate@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@AEBUDockInputIdentity@@@Z @ 0x180182CDC (--$_Lower_bound_duplicate@UDockInputIdentity@@@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$.c)
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180182D14 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDo.c)
 *     ??0?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180182E78 (--0-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x180185444 (-ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1801865E4 (-_Erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801A6460 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801A64F4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801A6698 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801A67A0 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DeviceDockServer::OnDockInput(DeviceDockServer *this, struct DockInputInfo *a2)
{
  const char *v4; // r9
  __int64 v5; // r12
  _OWORD *v6; // rbx
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rcx
  _DWORD *v10; // r10
  __int64 *v11; // r11
  bool v12; // al
  volatile signed __int32 *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  volatile signed __int32 *v16; // rax
  int v17; // eax
  char *v18; // rax
  int v19; // eax
  volatile signed __int32 *Instance; // rax
  int v21; // eax
  __int128 v23; // xmm7
  __int128 v24; // xmm8
  __int128 v25; // xmm9
  __int128 v26; // xmm10
  __int128 v27; // xmm11
  __int64 v28; // xmm6_8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 i; // rbx
  int v33; // eax
  int v34; // eax
  int v35[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v37[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v38[24]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v40[60]; // [rsp+88h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  InputTraceLogging::DeviceDock::ServerReceiveInput(a2);
  LODWORD(v36) = *((_DWORD *)a2 + 1);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
    (__int64 *)this + 13,
    (__int64)v35,
    &v36);
  if ( *(_QWORD *)v35 == *((_QWORD *)this + 13) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x98,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v4);
  wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>(
    &v36,
    (void (__fastcall ****)(_QWORD))(*(_QWORD *)v35 + 40LL));
  v5 = v36 + 8;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v36 + 8) + 40LL))(v36 + 8) )
    goto LABEL_40;
  v6 = (_OWORD *)((char *)a2 + 68);
  v7 = *((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17);
  v8 = *((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18);
  std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Find_lower_bound<DockInputIdentity>(
    (__int64 *)this + 17,
    v37,
    (__int64)a2 + 32);
  if ( !std::_Tree<std::_Tmap_traits<DockInputIdentity,unsigned __int64,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,unsigned __int64>>,0>>::_Lower_bound_duplicate<DockInputIdentity>(
          v9,
          v37[2],
          (__int64)a2 + 32)
    || v10 == (_DWORD *)*v11 )
  {
    if ( !*((_BYTE *)a2 + 64) || v7 <= 0 || v8 <= 0 )
      goto LABEL_40;
    memset_0(v38, 0, 0xB0uLL);
    v39[0] = *v6;
    v39[1] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
    v18 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    v19 = StringCchCopyW((char *)v40, 57LL, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v19,
        v35[0]);
    std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Emplace<DockInputIdentity const &,tagRECT &>(
      (__int64 *)this + 17,
      (__int64)v37,
      (__int64)a2 + 32,
      v39);
    Instance = (volatile signed __int32 *)DisplayOcclusionContextProvider::GetInstance();
    *(_QWORD *)v35 = Instance;
    if ( Instance )
      _InterlockedIncrement(Instance + 4);
    v21 = DisplayOcclusionContextProvider::OnOcclusionRectAdded(
            (DisplayOcclusionContextProvider *)Instance,
            (struct DockInputInfo *)((char *)a2 + 32),
            (const struct DisplayOcclusionRect *)v38);
    v15 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  v12 = v10[14] != *(_DWORD *)v6
     || v10[15] != *((_DWORD *)a2 + 18)
     || v10[16] != *((_DWORD *)a2 + 19)
     || v10[17] != *((_DWORD *)a2 + 20);
  if ( !*((_BYTE *)a2 + 64) )
    goto LABEL_24;
  if ( v7 > 0 && v8 > 0 && v12 )
  {
    *(_OWORD *)(v10 + 14) = *v6;
    v13 = (volatile signed __int32 *)DisplayOcclusionContextProvider::GetInstance();
    *(_QWORD *)v35 = v13;
    if ( v13 )
      _InterlockedIncrement(v13 + 4);
    v14 = DisplayOcclusionContextProvider::OnOcclusionRectUpdated(
            (DisplayOcclusionContextProvider *)v13,
            (struct DockInputInfo *)((char *)a2 + 32),
            (const struct tagRECT *)((char *)a2 + 68));
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v14);
LABEL_38:
      wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)v35);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v36);
      return v15;
    }
    wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)v35);
    v11 = (__int64 *)((char *)this + 136);
  }
  if ( !*((_BYTE *)a2 + 64) || !v7 || !v8 )
  {
LABEL_24:
    *(_OWORD *)v35 = *(_OWORD *)std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Eqrange<DockInputIdentity>(
                                  v11,
                                  v37,
                                  (unsigned int *)a2 + 8);
    std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Erase(
      (char *)this + 136,
      v35);
    v16 = (volatile signed __int32 *)DisplayOcclusionContextProvider::GetInstance();
    *(_QWORD *)v35 = v16;
    if ( v16 )
      _InterlockedIncrement(v16 + 4);
    v17 = DisplayOcclusionContextProvider::OnOcclusionRectRemoved(
            (DisplayOcclusionContextProvider *)v16,
            (struct DockInputInfo *)((char *)a2 + 32));
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_38;
    }
LABEL_39:
    wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)v35);
  }
LABEL_40:
  v23 = *(_OWORD *)a2;
  v24 = *((_OWORD *)a2 + 1);
  v25 = *((_OWORD *)a2 + 2);
  v26 = *((_OWORD *)a2 + 3);
  v27 = *((_OWORD *)a2 + 4);
  v28 = *((_QWORD *)a2 + 10);
  v29 = *(_QWORD *)std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
                     (_QWORD *)this + 15,
                     (__int64)v37,
                     (unsigned int *)a2 + 8);
  *(_OWORD *)(v29 + 56) = v23;
  *(_OWORD *)(v29 + 72) = v24;
  *(_OWORD *)(v29 + 88) = v25;
  *(_OWORD *)(v29 + 104) = v26;
  *(_OWORD *)(v29 + 120) = v27;
  *(_QWORD *)(v29 + 136) = v28;
  v30 = *((_QWORD *)this + 10);
  if ( v30 )
  {
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(v30 + 8) + 40LL))(
            v30 + 8,
            *((unsigned int *)a2 + 1),
            a2);
    if ( v34 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v34);
  }
  else
  {
    v31 = *((_QWORD *)this + 8);
    for ( i = *((_QWORD *)this + 7); i != v31; i += 8LL )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct DockInputInfo *))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 40LL))(
              *(_QWORD *)i + 8LL,
              *((unsigned int *)a2 + 1),
              a2);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF8,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
          (const char *)(unsigned int)v33);
    }
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v36);
  return 0LL;
}
