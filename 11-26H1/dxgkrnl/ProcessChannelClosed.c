/*
 * XREFs of ProcessChannelClosed @ 0x140213770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140212F60 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_140168448)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1);
}
