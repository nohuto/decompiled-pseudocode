/*
 * XREFs of ?OnNotify@BamoDataProviderProxy@@UEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x1802444C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180162998 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180162B54 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z @ 0x180244520 (-OnNotify@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_KW4DataProviderNotificationEventArg@@@Z.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnNotify(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataProviderProxyImpl::OnNotify(v4 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7);
  return (unsigned int)v4;
}
