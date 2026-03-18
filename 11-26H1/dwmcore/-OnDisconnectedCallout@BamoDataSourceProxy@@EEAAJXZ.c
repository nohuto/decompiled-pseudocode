/*
 * XREFs of ?OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ @ 0x180161D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801622A0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180162A70 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FFE8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoDataSourceProxy::OnDisconnectedCallout(BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::CalloutWrapperObject *v2; // rcx
  unsigned int v3; // ebx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    &v5,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL));
  v3 = (*(__int64 (__fastcall **)(BamoDataSourceProxy *))(*(_QWORD *)this + 40LL))(this);
  if ( v6 && (v7 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v2);
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v6);
  return v3;
}
