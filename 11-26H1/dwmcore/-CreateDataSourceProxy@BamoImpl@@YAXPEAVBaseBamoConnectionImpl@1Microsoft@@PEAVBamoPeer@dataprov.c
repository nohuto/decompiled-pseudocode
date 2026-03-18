/*
 * XREFs of ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18020123C
 * Callers:
 *     ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180201190 (-Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801622A0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180162A70 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DataSourceProxy@@QEAA@XZ @ 0x18020131C (--0DataSourceProxy@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FFE8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

void __fastcall BamoImpl::CreateDataSourceProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  DataSourceProxy *v5; // rax
  DataSourceProxy *v6; // rbx
  __int64 v7; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v8; // rcx
  DataSourceProxy *v9; // rbx
  __int64 v10; // r8
  const char *v11; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v12,
    this);
  v5 = (DataSourceProxy *)DefaultHeap::AllocClear(0xE8uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v5, 0, 0xE8uLL);
  v9 = DataSourceProxy::DataSourceProxy(v6);
  if ( !v9 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x26,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::FailFast_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x26E5,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      (int)v12);
  }
  if ( v13 && (v14 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v8);
  if ( v12 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v12);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v13,
    v7,
    v10,
    v11);
  *(_QWORD *)a3 = v9;
}
