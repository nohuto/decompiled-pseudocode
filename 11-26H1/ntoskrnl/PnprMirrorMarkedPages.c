/*
 * XREFs of PnprMirrorMarkedPages @ 0x140BF7F18
 * Callers:
 *     PnprSwap @ 0x1405DE720 (PnprSwap.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x140415210 (RtlFindNextForwardRunClear.c)
 *     RtlFindFirstRunClear @ 0x1404895E0 (RtlFindFirstRunClear.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // r15
  unsigned int v1; // edi
  __int64 v2; // rdx
  bool v3; // r12
  _RTL_BITMAP *i; // rsi
  ULONG j; // eax
  ULONG v6; // r14d
  ULONG v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  ULONG v10; // r14d
  int v11; // eax
  int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h]

  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = PnprContext;
  StartingIndex = 0;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v3 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    v16 = *(_QWORD *)(PnprContext + 33232);
    do
    {
      for ( i = *(_RTL_BITMAP **)(v2 + 152); ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
      {
        v2 = PnprContext;
        if ( i == (_RTL_BITMAP *)(PnprContext + 152) )
          break;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
        for ( j = RtlFindFirstRunClear(i + 2, &StartingIndex); ; j = RtlFindNextForwardRunClear(
                                                                       i + 2,
                                                                       v10,
                                                                       &StartingIndex) )
        {
          v6 = StartingIndex;
          v7 = j;
          if ( j )
          {
            if ( j >= 0x140 )
              v7 = 320;
            RtlSetBits(i + 2, StartingIndex, v7);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( !v7 )
            break;
          v8 = guard_dispatch_icall_no_overrides(
                 *(_QWORD *)(PnprContext + 33184),
                 (v6 + *(_QWORD *)&i[1].SizeOfBitMap) << 12);
          v9 = PnprContext;
          v1 = v8;
          if ( v8 < 0 )
          {
            v11 = *(_DWORD *)(PnprContext + 33288);
            if ( !v11 )
              v11 = 3277;
            *(_DWORD *)(PnprContext + 33288) = v11;
            v12 = *(_DWORD *)(v9 + 33292);
            if ( !v12 )
              v12 = 8;
            *(_DWORD *)(v9 + 33292) = v12;
            goto LABEL_22;
          }
          v10 = v7 + v6;
          StartingIndex = v10;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
        }
        if ( *(_DWORD *)(PnprContext + 200) == 3 )
          goto LABEL_22;
      }
    }
    while ( !v3 );
  }
LABEL_22:
  if ( (_DWORD)v0 != *(_DWORD *)(PnprContext + 180) && *(int *)(PnprContext + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return v1;
}
