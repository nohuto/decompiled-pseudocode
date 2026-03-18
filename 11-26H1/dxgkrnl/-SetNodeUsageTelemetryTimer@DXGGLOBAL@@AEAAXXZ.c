/*
 * XREFs of ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401DFD08
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z @ 0x1401DF020 (-NodeUsageTelemetryThread@DXGGLOBAL@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::SetNodeUsageTelemetryTimer(DXGGLOBAL *this)
{
  KeSetTimer((PKTIMER)this + 4778, (LARGE_INTEGER)(-10000000LL * *((int *)this + 76486)), (PKDPC)this + 4779);
}
