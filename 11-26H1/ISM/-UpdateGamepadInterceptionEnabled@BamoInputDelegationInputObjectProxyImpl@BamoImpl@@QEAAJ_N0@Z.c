/*
 * XREFs of ?UpdateGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180137014
 * Callers:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800856D0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@UE.c)
 *     ?Thunk_UpdateGamepadInterceptionEnabled_11@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180136FC0 (-Thunk_UpdateGamepadInterceptionEnabled_11@-$IInputDelegationInputObjectProxy_Receive@VBamoInput.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnGamepadInterceptionEnabledChanged@BamoInputDelegationInputObjectProxy@@AEAAXXZ @ 0x180135DC0 (-LogOnGamepadInterceptionEnabledChanged@BamoInputDelegationInputObjectProxy@@AEAAXXZ.c)
 *     ?LogOnGamepadInterceptionEnabledChanging@BamoInputDelegationInputObjectProxy@@AEAAX_N@Z @ 0x180135E10 (-LogOnGamepadInterceptionEnabledChanging@BamoInputDelegationInputObjectProxy@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadInterceptionEnabled(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bp
  char v4; // r14
  BamoInputDelegationInputObjectProxy *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoInputDelegationInputObjectProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputDelegationInputObjectProxy::LogOnGamepadInterceptionEnabledChanging((BamoImpl::BamoInputDelegationInputObjectProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(BamoInputDelegationInputObjectProxy *, __int64))(*(_QWORD *)v6 + 104LL))(v6, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFCCB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  *((_BYTE *)this + 32) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputDelegationInputObjectProxy::LogOnGamepadInterceptionEnabledChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(BamoInputDelegationInputObjectProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFCD9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
