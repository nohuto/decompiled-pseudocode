/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401A2498
 * Callers:
 *     DCompositionThreadCallout @ 0x1401079B0 (DCompositionThreadCallout.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E47F0 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void DirectComposition::CConnection::OnDwmRenderThreadExit(void)
{
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v1; // rcx
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // edx

  DCompSessionState = W32GetDCompSessionState();
  *(_QWORD *)(DCompSessionState + 8) = 0LL;
  v1 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v1 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(v1);
    v2 = *(volatile signed __int32 **)(DCompSessionState + 16);
    if ( v2 )
      _InterlockedIncrement(v2 + 2);
    ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      DirectComposition::CConnection::Disconnect((DirectComposition::CConnection *)v2);
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v2, v3);
    }
  }
}
