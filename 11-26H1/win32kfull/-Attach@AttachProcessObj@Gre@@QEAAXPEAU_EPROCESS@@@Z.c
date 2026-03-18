/*
 * XREFs of ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x1401405A0
 * Callers:
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x140140020 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1401404A4 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x140140530 (-Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::AttachProcessObj::Attach(PRKAPC_STATE ApcState, PRKPROCESS PROCESS)
{
  if ( !LOBYTE(ApcState[1].ApcListHead[0].Flink) )
  {
    KeStackAttachProcess(PROCESS, ApcState);
    LOBYTE(ApcState[1].ApcListHead[0].Flink) = 1;
  }
}
