/*
 * XREFs of ?CreateSystemButtonEventControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18004BF3C
 * Callers:
 *     ?Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004BE90 (-Materialize_BamoSystemButtonEventControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAA.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800379CC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?CreateSystemButtonEventControllerProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemButtonEventControllerProxy@@@Z @ 0x18004BFF0 (-CreateSystemButtonEventControllerProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemBu.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800A9F18 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoImpl::CreateSystemButtonEventControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  struct ISMBamos_AutoBamos::BamoPeer *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  const char *v10; // r9
  struct BamoSystemButtonEventControllerProxy *v11; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct BamoSystemButtonEventControllerProxy *v16; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a3 = 0LL;
  v16 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v12,
    this);
  v6 = CreateSystemButtonEventControllerProxy(v5, &v16);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x646E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      (int)v12);
  if ( v13 && (v14 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(retaddr);
  if ( v12 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v12);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v13,
    v7,
    v8,
    v9);
  v11 = v16;
  *(_QWORD *)a3 = v16;
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6473,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v10);
}
