/*
 * XREFs of ?UpdateType@BamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18013026C
 * Callers:
 *     ?Thunk_UpdateType_47@?$IInputForwardAreaInputObjectProxy_Receive@VBamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801298E0 (-Thunk_UpdateType_47@-$IInputForwardAreaInputObjectProxy_Receive@VBamoInputForwardAreaInputObjec.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F210 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputForwardAreaInputObjectProxyImpl@BamoImpl@@U.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnTypeChanged@BamoInputForwardAreaInputObjectProxy@@AEAAXXZ @ 0x18011CE0C (-LogOnTypeChanged@BamoInputForwardAreaInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011D0DC (-LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputForwardAreaInputObjectProxyImpl::UpdateType(
        BamoImpl::BamoInputForwardAreaInputObjectProxyImpl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  char v4; // r14
  BamoInputForwardAreaInputObjectProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = (BamoImpl::BamoInputForwardAreaInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputForwardAreaInputObjectProxy::LogOnTypeChanging(
      (BamoImpl::BamoInputForwardAreaInputObjectProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoInputForwardAreaInputObjectProxy *, const struct _GUID *))(*(_QWORD *)v6 + 104LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((struct _GUID *)this + 2) = *a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputForwardAreaInputObjectProxy::LogOnTypeChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoInputForwardAreaInputObjectProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
