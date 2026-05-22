/*
 * XREFs of ?UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180060FB4
 * Callers:
 *     ?Thunk_UpdateEatPolicy_8@?$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180060FA0 (-Thunk_UpdateEatPolicy_8@-$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfi.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012EE10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@Bamo.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnEatPolicyChanged@BamoActivationConfigurationInputObjectProxy@@AEAAXXZ @ 0x18008D4D8 (-LogOnEatPolicyChanged@BamoActivationConfigurationInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnEatPolicyChanging@BamoActivationConfigurationInputObjectProxy@@AEAAXI@Z @ 0x180099260 (-LogOnEatPolicyChanging@BamoActivationConfigurationInputObjectProxy@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  BamoActivationConfigurationInputObjectProxy *v6; // rsi
  int v8; // eax
  int v9; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoActivationConfigurationInputObjectProxy::LogOnEatPolicyChanging(
      (BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      this,
      1LL);
    v8 = (*(__int64 (__fastcall **)(BamoActivationConfigurationInputObjectProxy *, _QWORD))(*(_QWORD *)v6 + 120LL))(
           v6,
           v3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6DC2,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>(v10);
  }
  *((_DWORD *)this + 9) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoActivationConfigurationInputObjectProxy::LogOnEatPolicyChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      this,
      2LL);
    v9 = (*(__int64 (__fastcall **)(BamoActivationConfigurationInputObjectProxy *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6DD0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>(v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
