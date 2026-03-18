/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180240220
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162B54 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801DC2F0 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  char v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v7,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) && a4 )
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 0);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7);
  return 0LL;
}
