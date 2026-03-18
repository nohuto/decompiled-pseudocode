/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180162700
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801629F4 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180162B84 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180162BB0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v1; // rax
  struct Microsoft::BamoImpl::ConnectionIndirector *v3; // rdx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1
    && (v3 = *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v1 + 24), *(int *)(*((_QWORD *)v3 + 4) + 8LL) > 0) )
  {
    Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, v3);
    v4 = Microsoft::BamoImpl::BamoImplObject::Release(this);
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32));
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(&v6);
  }
  else
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  return v4;
}
