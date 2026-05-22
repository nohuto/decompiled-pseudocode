/*
 * XREFs of ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z @ 0x18012D2B0
 * Callers:
 *     ?Thunk_UpdateInputSpace_274@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801295D0 (-Thunk_UpdateInputSpace_274@-$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@Ba.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F250 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnInputSpaceChanged@BamoInputSpacePayloadProxy@@AEAAXXZ @ 0x18011BAFC (-LogOnInputSpaceChanged@BamoInputSpacePayloadProxy@@AEAAXXZ.c)
 *     ?LogOnInputSpaceChanging@BamoInputSpacePayloadProxy@@AEAAXAEBUINPUT_SPACE@@@Z @ 0x18011BB4C (-LogOnInputSpaceChanging@BamoInputSpacePayloadProxy@@AEAAXAEBUINPUT_SPACE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        const struct INPUT_SPACE *a2,
        const struct INPUT_SPACE *a3)
{
  char v4; // bp
  BamoInputSpacePayloadProxy *v6; // r14
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char)a2;
  v6 = (BamoImpl::BamoInputSpacePayloadProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputSpacePayloadProxy::LogOnInputSpaceChanging(
      (BamoImpl::BamoInputSpacePayloadProxyImpl *)((char *)this - 16),
      a2);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoInputSpacePayloadProxy *, const struct INPUT_SPACE *))(*(_QWORD *)v6 + 104LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3586,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((_QWORD *)this + 4) = *(_QWORD *)a3;
  *((_DWORD *)this + 10) = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 28) )
  {
    BamoInputSpacePayloadProxy::LogOnInputSpaceChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoInputSpacePayloadProxy *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3594,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, (__int64)a2, (__int64)a3);
  return 0LL;
}
