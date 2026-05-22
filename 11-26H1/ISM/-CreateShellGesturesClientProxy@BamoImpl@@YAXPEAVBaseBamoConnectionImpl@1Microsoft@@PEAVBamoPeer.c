/*
 * XREFs of ?CreateShellGesturesClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18008FD7C
 * Callers:
 *     ?Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004C078 (-Materialize_BamoShellGesturesClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800379CC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ShellGesturesClientProxy@@QEAA@XZ @ 0x18008FE2C (--0ShellGesturesClientProxy@@QEAA@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800A9F18 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoImpl::CreateShellGesturesClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v6; // rcx
  ShellGesturesClientProxy *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  const char *v10; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v15; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v11,
    this);
  v15 = operator new(0xB8uLL);
  memset_0(v15, 0, 0xB8uLL);
  v7 = ShellGesturesClientProxy::ShellGesturesClientProxy((ShellGesturesClientProxy *)v15);
  if ( v12 && (v13 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v6);
  if ( v11 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v11);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v12,
    v5,
    v8,
    v9);
  *(_QWORD *)a3 = v7;
  if ( !v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x642F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v10);
}
