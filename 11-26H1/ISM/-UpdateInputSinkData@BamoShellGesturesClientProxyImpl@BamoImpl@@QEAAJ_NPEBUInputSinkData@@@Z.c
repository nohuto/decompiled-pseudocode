/*
 * XREFs of ?UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z @ 0x180094F0C
 * Callers:
 *     ?Thunk_UpdateInputSinkData_355@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015E6B0 (-Thunk_UpdateInputSinkData_355@-$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18015E700 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180037930 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180038638 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180038638.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnInputSinkDataChanged@BamoShellGesturesClientProxy@@AEAAXXZ @ 0x18015E2B4 (-LogOnInputSinkDataChanged@BamoShellGesturesClientProxy@@AEAAXXZ.c)
 *     ?LogOnInputSinkDataChanging@BamoShellGesturesClientProxy@@AEAAXAEBUInputSinkData@@@Z @ 0x18015E304 (-LogOnInputSinkDataChanging@BamoShellGesturesClientProxy@@AEAAXAEBUInputSinkData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        __int64 a2,
        const struct InputSinkData *a3)
{
  char v4; // bp
  BamoShellGesturesClientProxy *v6; // r14
  int v7; // eax
  int v8; // eax
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoShellGesturesClientProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoShellGesturesClientProxy::LogOnInputSinkDataChanging(
      (BamoImpl::BamoShellGesturesClientProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *, const struct InputSinkData *))(*(_QWORD *)v6 + 152LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x829D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a3;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a3 + 2);
  if ( *((_BYTE *)this + 28) )
  {
    BamoShellGesturesClientProxy::LogOnInputSinkDataChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
      (__int64)v10,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoShellGesturesClientProxy *))(*(_QWORD *)v6 + 160LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x82AB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
