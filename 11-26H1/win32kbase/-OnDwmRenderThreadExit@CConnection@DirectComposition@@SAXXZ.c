/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401C6B38
 * Callers:
 *     DCompositionThreadCallout @ 0x140147D60 (DCompositionThreadCallout.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::OnDwmRenderThreadExit(__int64 a1)
{
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v2; // rcx
  volatile signed __int32 *v3; // rbx

  DCompSessionState = W32GetDCompSessionState(a1);
  v2 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  *(_QWORD *)(DCompSessionState + 8) = 0LL;
  if ( v2 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(v2);
    v3 = *(volatile signed __int32 **)(DCompSessionState + 16);
    if ( v3 )
      _InterlockedIncrement(v3 + 2);
    ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
    KeLeaveCriticalRegion();
    if ( v3 )
    {
      DirectComposition::CConnection::Disconnect((DirectComposition::CConnection *)v3);
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v3);
    }
  }
}
