/*
 * XREFs of ?UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18012C034
 * Callers:
 *     ?Thunk_UpdateGestureTimeoutInMilliseconds_8@?$IEdgyGestureRecognitionConfigurationProxy_Receive@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180129450 (-Thunk_UpdateGestureTimeoutInMilliseconds_8@-$IEdgyGestureRecognitionConfigurationProxy_Receive@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F160 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@Bam.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnGestureTimeoutInMillisecondsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ @ 0x18011B134 (-LogOnGestureTimeoutInMillisecondsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ.c)
 *     ?LogOnGestureTimeoutInMillisecondsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXI@Z @ 0x18011B184 (-LogOnGestureTimeoutInMillisecondsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXI@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds(
        BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  BamoEdgyGestureRecognitionConfigurationProxy *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = (BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyGestureRecognitionConfigurationProxy::LogOnGestureTimeoutInMillisecondsChanging((BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl *)((char *)this - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *, _QWORD))(*(_QWORD *)v6 + 152LL))(
           v6,
           v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE101,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  *((_DWORD *)this + 12) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    BamoEdgyGestureRecognitionConfigurationProxy::LogOnGestureTimeoutInMillisecondsChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(BamoEdgyGestureRecognitionConfigurationProxy *))(*(_QWORD *)v6 + 160LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE10F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
