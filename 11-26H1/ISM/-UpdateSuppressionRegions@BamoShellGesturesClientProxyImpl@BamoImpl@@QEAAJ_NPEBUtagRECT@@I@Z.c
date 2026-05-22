/*
 * XREFs of ?UpdateSuppressionRegions@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@I@Z @ 0x18015E768
 * Callers:
 *     ?Thunk_UpdateSuppressionRegions_150@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015E6C0 (-Thunk_UpdateSuppressionRegions_150@-$IShellGesturesClientProxy_Receive@VBamoShellGesturesClient.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18015E700 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037930 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180038638 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180038638.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180146F98 (--$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z.c)
 *     ?LogOnSuppressionRegionsChanged@BamoShellGesturesClientProxy@@AEAAXXZ @ 0x18015E36C (-LogOnSuppressionRegionsChanged@BamoShellGesturesClientProxy@@AEAAXXZ.c)
 *     ?LogOnSuppressionRegionsChanging@BamoShellGesturesClientProxy@@AEAAXI@Z @ 0x18015E3BC (-LogOnSuppressionRegionsChanging@BamoShellGesturesClientProxy@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateSuppressionRegions(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        char a2,
        struct tagRECT *a3,
        const char *a4)
{
  unsigned int v4; // ebp
  BamoShellGesturesClientProxy *v8; // r14
  int v9; // eax
  char *v10; // r15
  int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  __int64 v13; // r8
  int v14; // edi
  void *v15; // rcx
  int v16; // eax
  __int64 v18[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = (unsigned int)a4;
  v8 = (BamoImpl::BamoShellGesturesClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoShellGesturesClientProxy::LogOnSuppressionRegionsChanging((BamoImpl::BamoShellGesturesClientProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v18,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v9 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *, struct tagRECT *, _QWORD))(*(_QWORD *)v8 + 168LL))(
           v8,
           a3,
           v4);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x82CB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v18);
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
    v15 = (void *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v20;
    if ( v15 )
      operator delete(v15, v12);
    *((_DWORD *)this + 24) = v4;
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8362,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
  }
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x82CE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v14,
      v18[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoShellGesturesClientProxy::LogOnSuppressionRegionsChanged(v8);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v18,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v16 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *))(*(_QWORD *)v10 + 176LL))(v8);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x82D9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v16,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v18);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)v12, v13);
  return 0LL;
}
