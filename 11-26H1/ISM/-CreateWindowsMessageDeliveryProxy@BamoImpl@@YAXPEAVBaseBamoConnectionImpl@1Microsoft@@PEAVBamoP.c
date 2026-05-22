/*
 * XREFs of ?CreateWindowsMessageDeliveryProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18004CF90
 * Callers:
 *     ?Materialize_BamoWindowsMessageDeliveryProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18004CEE0 (-Materialize_BamoWindowsMessageDeliveryProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003750C (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180037540 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800375E0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18004D25C (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BamoImpl::CreateWindowsMessageDeliveryProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  BamoImpl *v6; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rdi
  __int64 v8; // rdx
  WindowsMessageDeliveryProxy *v9; // rsi
  __int64 v10; // r8
  const char *v11; // r9
  const char *v12; // r9
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WindowsMessageDeliveryProxy *v16; // [rsp+60h] [rbp+18h]

  v6 = this;
  *(_QWORD *)a3 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v7 = 0LL;
  if ( *((_DWORD *)this + 47) )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = this;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(this);
  }
  v16 = (WindowsMessageDeliveryProxy *)operator new(0x48uLL);
  v9 = WindowsMessageDeliveryProxy::WindowsMessageDeliveryProxy(v16, a2);
  if ( v6 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v7);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v13,
    v8,
    v10,
    v11);
  *(_QWORD *)a3 = v9;
  if ( !v9 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x80A8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      v12);
}
