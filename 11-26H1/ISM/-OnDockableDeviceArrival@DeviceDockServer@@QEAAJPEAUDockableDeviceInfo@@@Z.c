/*
 * XREFs of ?OnDockableDeviceArrival@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18018429C
 * Callers:
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DE80C (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B2580 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801827D8 (--$_Emplace@AEAKAEAV-$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeviceDockServer::OnDockableDeviceArrival(DeviceDockServer *this, struct DockableDeviceInfo *a2)
{
  __int64 *v4; // r15
  const char *v5; // r9
  _QWORD *v6; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  __int64 v8; // rdi
  __int64 i; // rbx
  int v10; // eax
  char v12[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void (__fastcall ***v14)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = (__int64 *)((char *)this + 88);
  LODWORD(v14) = *(_DWORD *)a2;
  if ( *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
          (__int64 *)this + 11,
          (__int64)&v15,
          &v14) != *((_QWORD *)this + 11) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x102,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v5);
  v14 = 0LL;
  v6 = operator new(0x58uLL);
  v15 = v6;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  *v6 = &BamoDockableDevicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDockableDevicePrincipal::`vftable'{for `IDockableDevicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 2),
    BamoServerConnection);
  v6[2] = &BamoImpl::BamoDockableDevicePrincipalImpl::`vftable';
  v6[7] = 0LL;
  *((_OWORD *)v6 + 4) = 0LL;
  v6[10] = 0LL;
  v14 = (void (__fastcall ***)(_QWORD))v6;
  (*(void (__fastcall **)(_QWORD *, char *))(v6[1] + 32LL))(v6 + 1, (char *)a2 + 76);
  (*(void (__fastcall **)(_QWORD *, char *))(v6[1] + 48LL))(v6 + 1, (char *)a2 + 1552);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v6[1] + 64LL))(v6 + 1, *((unsigned int *)a2 + 392));
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v6[1] + 80LL))(v6 + 1, *((unsigned __int16 *)a2 + 786));
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v6[1] + 96LL))(v6 + 1, *((unsigned __int16 *)a2 + 787));
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Emplace<unsigned long &,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy> &>(
    v4,
    (__int64)v12,
    a2,
    &v14);
  v8 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v8; i += 8LL )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ***)(_QWORD)))(*(_QWORD *)(*(_QWORD *)i + 8LL)
                                                                                    + 48LL))(
            *(_QWORD *)i + 8LL,
            *(unsigned int *)a2,
            v14);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x114,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v10);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v14);
  return 0LL;
}
