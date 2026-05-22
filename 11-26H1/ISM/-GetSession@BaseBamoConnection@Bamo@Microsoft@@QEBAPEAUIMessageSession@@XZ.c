/*
 * XREFs of ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18004D384
 * Callers:
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004C8B0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18004CCC4 (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004CDEC (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004D0A8 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18004D25C (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004D528 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x18019F804 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x1801A0198 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IMessageSession *__fastcall Microsoft::Bamo::BaseBamoConnection::GetSession(
        Microsoft::Bamo::BaseBamoConnection *this)
{
  return *(struct IMessageSession **)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this)
                                    + 48);
}
