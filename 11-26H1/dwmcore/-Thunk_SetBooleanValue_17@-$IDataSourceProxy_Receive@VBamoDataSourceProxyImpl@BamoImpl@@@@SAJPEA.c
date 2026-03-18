/*
 * XREFs of ?Thunk_SetBooleanValue_17@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18020B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180161830 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180162208 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801622A0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180162A70 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18023FFE8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetBooleanValue_17(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  char v3; // di
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h] BYREF
  char v16; // [rsp+30h] [rbp-18h]

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v14,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  LOBYTE(v5) = v3;
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v4, v5);
  if ( v15 && (v16 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v7);
  if ( v14 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v14);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v15,
    v6,
    v9,
    v10);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v11, v12);
  return v8;
}
