/*
 * XREFs of ?GetInterfacePath@BamoSimpleHapticsControllerProxy@@UEAAPEBGXZ @ 0x180119A10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180028770 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const unsigned __int16 *__fastcall BamoSimpleHapticsControllerProxy::GetInterfacePath(
        BamoSimpleHapticsControllerProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const unsigned __int16 *)*((_QWORD *)this + 6);
}
