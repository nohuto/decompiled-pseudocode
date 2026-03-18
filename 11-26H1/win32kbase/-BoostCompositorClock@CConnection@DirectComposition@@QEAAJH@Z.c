/*
 * XREFs of ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0
 * Callers:
 *     DCompositionBoostCompositionClockForInput @ 0x1400A98F0 (DCompositionBoostCompositionClockForInput.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionBoostCompositorClock @ 0x14016B370 (NtDCompositionBoostCompositorClock.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14012B8DC (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14017D34C (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::BoostCompositorClock(DirectComposition::CConnection *this, int a2)
{
  unsigned int v4; // esi
  int v5; // eax
  char v6; // bl

  v4 = 0;
  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 1;
  v5 = *((_DWORD *)this + 62);
  if ( a2 )
  {
    if ( v5 != -1 )
    {
      ++v5;
      goto LABEL_4;
    }
  }
  else if ( v5 )
  {
    --v5;
LABEL_4:
    *((_DWORD *)this + 62) = v5;
    goto LABEL_5;
  }
  v4 = -1073741823;
LABEL_5:
  v6 = v5 != 0;
  if ( (*((_DWORD *)this + 92) || !v5)
    && *((_BYTE *)this + 252) != v6
    && DirectComposition::CConnection::IsConnected(this) )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
    if ( (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                *((DirectComposition::CSystemChannel **)this + 19),
                v6) >= 0 )
      *((_BYTE *)this + 252) = v6;
    DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return v4;
}
