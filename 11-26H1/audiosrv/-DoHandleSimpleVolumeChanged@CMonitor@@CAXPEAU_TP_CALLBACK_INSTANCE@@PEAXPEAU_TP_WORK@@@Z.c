/*
 * XREFs of ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180120FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SimpleVolumeChangedContext@@QEAA@XZ @ 0x180120F20 (--1SimpleVolumeChangedContext@@QEAA@XZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180121240 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 */

void __fastcall CMonitor::DoHandleSimpleVolumeChanged(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work,
        const struct _GUID *a4)
{
  CMonitor::HandleSimpleVolumeChanged(*((CMonitor **)Context + 3), *(float *)Context, *((_DWORD *)Context + 1), a4);
  SimpleVolumeChangedContext::~SimpleVolumeChangedContext((SimpleVolumeChangedContext *)Context);
  operator delete(Context, (const struct std::nothrow_t *)0x28);
}
