/*
 * XREFs of ?CreateInputSiteElementProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800381D4
 * Callers:
 *     ?Materialize_BamoInputSiteElementProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180038100 (-Materialize_BamoInputSiteElementProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0BamoInputSiteElementProxyImpl@BamoImpl@@QEAA@XZ @ 0x1800382B0 (--0BamoInputSiteElementProxyImpl@BamoImpl@@QEAA@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BamoImpl::CreateInputSiteElementProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  BamoImpl *v5; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v5 = this;
  *(_QWORD *)a3 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = 0LL;
  if ( *((_DWORD *)this + 47) )
  {
    v5 = 0LL;
  }
  else
  {
    v6 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v7 = operator new(0x158uLL);
  memset_0(v7, 0, 0x158uLL);
  BamoImpl::BamoInputSiteElementProxyImpl::BamoInputSiteElementProxyImpl((BamoImpl::BamoInputSiteElementProxyImpl *)(v7 + 2));
  *v7 = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v7[1] = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v7[42] = 0LL;
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v6);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v11,
    v8,
    v9,
    v10);
  *(_QWORD *)a3 = v7;
}
