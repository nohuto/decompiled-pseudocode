/*
 * XREFs of ProcessChannelSuspended @ 0x140213820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x14021312C (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelSuspended()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_140168448)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(v0, v1);
}
