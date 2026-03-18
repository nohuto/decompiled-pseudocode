/*
 * XREFs of ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x140070F4C
 * Callers:
 *     DxgkStartPnPStop @ 0x1401AA86C (DxgkStartPnPStop.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE(
        DXGADAPTERSTOPRESETLOCKEXCLUSIVE *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 0;
    v2 = *(_QWORD *)this;
    *(_QWORD *)(v2 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)this);
  }
}
