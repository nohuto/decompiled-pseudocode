/*
 * XREFs of ?UpdateResumePosition@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x18017BF7C
 * Callers:
 *     ?Thunk_UpdateResumePosition_23@?$IControllerNavigationOverrideProxy_Receive@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017B810 (-Thunk_UpdateResumePosition_23@-$IControllerNavigationOverrideProxy_Receive@VBamoControllerNavig.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18017C260 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnResumePositionChanged@BamoControllerNavigationOverrideProxy@@AEAAXXZ @ 0x18017B05C (-LogOnResumePositionChanged@BamoControllerNavigationOverrideProxy@@AEAAXXZ.c)
 *     ?LogOnResumePositionChanging@BamoControllerNavigationOverrideProxy@@AEAAXAEBUtagPOINT@@@Z @ 0x18017B0AC (-LogOnResumePositionChanging@BamoControllerNavigationOverrideProxy@@AEAAXAEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoControllerNavigationOverrideProxyImpl::UpdateResumePosition(
        BamoImpl::BamoControllerNavigationOverrideProxyImpl *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  char v4; // bp
  BamoControllerNavigationOverrideProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char)a2;
  v6 = (BamoImpl::BamoControllerNavigationOverrideProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoControllerNavigationOverrideProxy::LogOnResumePositionChanging(
      (BamoImpl::BamoControllerNavigationOverrideProxyImpl *)((char *)this - 16),
      a2);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoControllerNavigationOverrideProxy *, const struct tagPOINT *))(*(_QWORD *)v6 + 152LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA3C0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((struct tagPOINT *)this + 7) = *a3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoControllerNavigationOverrideProxy::LogOnResumePositionChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 160LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA3CE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)a2, (__int64)a3);
  return 0LL;
}
