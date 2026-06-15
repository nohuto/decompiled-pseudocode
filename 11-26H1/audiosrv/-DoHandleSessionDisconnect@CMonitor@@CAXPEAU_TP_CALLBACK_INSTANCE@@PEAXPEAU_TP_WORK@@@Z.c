/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180120FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SessionDisconnectedContext@@QEAA@XZ @ 0x180120ED4 (--1SessionDisconnectedContext@@QEAA@XZ.c)
 *     ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x18012119C (-HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(PTP_CALLBACK_INSTANCE Instance, CMonitor **Context, PTP_WORK Work)
{
  CMonitor::HandleSessionDisconnected(Context[1], (enum AudioSessionDisconnectReason)Context);
  SessionDisconnectedContext::~SessionDisconnectedContext((SessionDisconnectedContext *)Context);
  operator delete(Context, (const struct std::nothrow_t *)0x18);
}
