/*
 * XREFs of ?UpdateSuppressionRegions@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z @ 0x180148A90
 * Callers:
 *     ?Thunk_UpdateSuppressionRegions_150@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180148A30 (-Thunk_UpdateSuppressionRegions_150@-$IDragManagerClientProxy_Receive@VBamoDragManagerClientProx.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180148A50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180146F98 (--$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z.c)
 *     ?LogOnSuppressionRegionsChanged@BamoDragManagerClientProxy@@AEAAXXZ @ 0x18014837C (-LogOnSuppressionRegionsChanged@BamoDragManagerClientProxy@@AEAAXXZ.c)
 *     ?LogOnSuppressionRegionsChanging@BamoDragManagerClientProxy@@AEAAXI@Z @ 0x1801483CC (-LogOnSuppressionRegionsChanging@BamoDragManagerClientProxy@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::UpdateSuppressionRegions(
        BamoImpl::BamoDragManagerClientProxyImpl *this,
        char a2,
        struct tagRECT *a3,
        const char *a4)
{
  unsigned int v4; // ebp
  BamoDragManagerClientProxy *v8; // r14
  int v9; // eax
  char *v10; // r15
  int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  __int64 v13; // r8
  int v14; // edi
  void *v15; // rcx
  int v16; // eax
  int v18[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = (unsigned int)a4;
  v8 = (BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSuppressionRegionsChanging((BamoImpl::BamoDragManagerClientProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v9 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *, struct tagRECT *, _QWORD))(*(_QWORD *)v8 + 120LL))(
           v8,
           a3,
           v4);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5EF,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v18);
    v10 = (char *)this - 16;
  }
  else
  {
    v10 = (char *)this - 16;
  }
  v20 = 0LL;
  v11 = Microsoft::BamoImpl::Util::CopyArray<tagRECT>(a3, v4, &v20, a4);
  v14 = v11;
  if ( v11 >= 0 )
  {
    v15 = (void *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v20;
    if ( v15 )
      operator delete(v15, v12);
    *((_DWORD *)this + 14) = v4;
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC73B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
  }
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC5F2,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v14,
      v18[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoDragManagerClientProxy::LogOnSuppressionRegionsChanged(v8);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v18,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v16 = (*(__int64 (__fastcall **)(BamoDragManagerClientProxy *))(*(_QWORD *)v10 + 128LL))(v8);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5FD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v16,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v18);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v12, v13);
  return 0LL;
}
