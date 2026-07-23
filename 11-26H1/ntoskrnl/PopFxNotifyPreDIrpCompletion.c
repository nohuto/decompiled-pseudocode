/*
 * XREFs of PopFxNotifyPreDIrpCompletion @ 0x1403BE794
 * Callers:
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404F6108 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

void __fastcall PopFxNotifyPreDIrpCompletion(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  KIRQL v9; // al
  int v10; // edx
  char v11; // si

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 864), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    v5 = *(_DWORD *)(BugCheckParameter3 + 32);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v5, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x2000) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      v7 = *(_DWORD *)(BugCheckParameter3 + 32);
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v7, v7);
      }
      while ( v8 != v7 );
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1192));
      v10 = *(_DWORD *)(BugCheckParameter3 + 1220);
      v11 = 0;
      if ( (v10 & 1) != 0 )
      {
        v11 = 1;
        v10 &= ~1u;
      }
      *(_DWORD *)(BugCheckParameter3 + 1216) = a3;
      *(_DWORD *)(BugCheckParameter3 + 1220) = v10 | 2;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1192), v9);
      if ( v11 )
        PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
    }
  }
}
