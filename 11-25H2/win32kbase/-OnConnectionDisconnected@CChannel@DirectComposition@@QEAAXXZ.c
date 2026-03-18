/*
 * XREFs of ?OnConnectionDisconnected@CChannel@DirectComposition@@QEAAXXZ @ 0x140139D04
 * Callers:
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140139C80 (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x140139D88 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CChannel::OnConnectionDisconnected(DirectComposition::CChannel *this)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 3, 4) != 4
    && !_InterlockedCompareExchange((volatile signed __int32 *)this + 6, 1, 0)
    && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)this + 4)) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
      (*(void (__fastcall **)(DirectComposition::CChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
    ExReleaseResourceLite(*((PERESOURCE *)this + 4));
    KeLeaveCriticalRegion();
  }
  *((_BYTE *)this + 48) &= ~2u;
}
