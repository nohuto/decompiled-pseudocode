/*
 * XREFs of ?UpdateInterfacePath@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18012D578
 * Callers:
 *     ?Thunk_UpdateInterfacePath_72@?$ISimpleHapticsControllerProxy_Receive@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801295F0 (-Thunk_UpdateInterfacePath_72@-$ISimpleHapticsControllerProxy_Receive@VBamoSimpleHapticsControll.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012F590 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAX.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003AD30 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCursorSuppressionPolicyObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800612F4 (--0-$CalloutWrapper@VBamoCursorSuppressionPolicyObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800613A0 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@PEAG@?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z @ 0x180116E38 (--$reset@PEAG@-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x18011836C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogOnInterfacePathChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ @ 0x18011BBF4 (-LogOnInterfacePathChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ.c)
 *     ?LogOnInterfacePathChanging@BamoSimpleHapticsControllerProxy@@AEAAXPEBG@Z @ 0x18011BCA8 (-LogOnInterfacePathChanging@BamoSimpleHapticsControllerProxy@@AEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::UpdateInterfacePath(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        char a2,
        unsigned __int16 *a3)
{
  BamoSimpleHapticsControllerProxy *v6; // r14
  int v7; // eax
  char *v8; // r15
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int v15[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const struct std::nothrow_t *v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = (BamoImpl::BamoSimpleHapticsControllerProxyImpl *)((char *)this - 16);
  if ( *((_BYTE *)this + 28) )
  {
    BamoSimpleHapticsControllerProxy::LogOnInterfacePathChanging(
      (BamoImpl::BamoSimpleHapticsControllerProxyImpl *)((char *)this - 16),
      a3);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(BamoSimpleHapticsControllerProxy *, unsigned __int16 *))(*(_QWORD *)v6 + 120LL))(
           v6,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8EA4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v15);
    v8 = (char *)this - 16;
  }
  else
  {
    v8 = (char *)this - 16;
  }
  v17 = 0LL;
  v9 = Microsoft::BamoImpl::Util::CopyString(
         (Microsoft::BamoImpl::Util *)a3,
         (unsigned __int16 *)&v17,
         (unsigned __int16 **)a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::reset<unsigned short *>(
      (void **)this + 5,
      v17);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x905A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
  }
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8EA7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v15[0]);
  if ( *((_BYTE *)this + 28) )
  {
    BamoSimpleHapticsControllerProxy::LogOnInterfacePathChanged(v6);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCursorSuppressionPolicyObjectProxyImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v13 = (*(__int64 (__fastcall **)(BamoSimpleHapticsControllerProxy *))(*(_QWORD *)v8 + 128LL))(v6);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8EB2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v15[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v15);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return 0LL;
}
