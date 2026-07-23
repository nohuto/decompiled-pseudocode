/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x14061A1B0
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x140619E40 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1405E806C (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x1406D3490 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  unsigned int v3; // ebp
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  KIRQL v8; // r12
  KIRQL v9; // dl
  unsigned __int64 v10; // r13
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi
  volatile signed __int32 *v13; // r14
  unsigned __int64 v14; // r13
  volatile signed __int32 *v15; // r15
  char v16; // al
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  KIRQL v20; // [rsp+70h] [rbp+8h]
  unsigned __int64 v21; // [rsp+78h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 1800);
  v3 = 10000 * (*(_DWORD *)(a1 + 1776) & 0x3FFFFFFF);
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
  v8 = v5;
  v20 = v5;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    v9 = v5;
  }
  else
  {
    v10 = MEMORY[0xFFFFF78000000008];
    v11 = *(_DWORD *)(a1 + 68);
    v21 = MEMORY[0xFFFFF78000000008];
    if ( v3 <= v11 )
    {
      if ( v3 < v11 )
      {
        v12 = -1LL;
        v13 = *(volatile signed __int32 **)(a1 + 1808);
        if ( v13 != (volatile signed __int32 *)(a1 + 1808) )
        {
          v14 = 0LL;
          do
          {
            v15 = v13 - 72;
            KiAcquireKobjectLockSafe(v13 - 72, v6, v7);
            v16 = *((_BYTE *)v13 - 285) & 0x40;
            if ( v16 )
              v14 = *((_QWORD *)v15 + 3);
            _InterlockedAnd(v15, 0xFFFFFF7F);
            if ( v16 && v14 < v12 )
              v12 = v14;
            v13 = *(volatile signed __int32 **)v13;
          }
          while ( v13 != (volatile signed __int32 *)(a1 + 1808) );
          v10 = v21;
          v1 = (KSPIN_LOCK *)(a1 + 1800);
        }
        v8 = v20;
        v17 = *(_DWORD *)(a1 + 68) - v3;
        if ( v12 - v17 >= v10 )
          v4 = -v17;
        else
          v4 = v10 - v12;
      }
    }
    else
    {
      v4 = v3 - v11;
    }
    v18 = *(_QWORD **)(a1 + 1808);
    if ( v18 != (_QWORD *)(a1 + 1808) )
    {
      do
      {
        ExpTimerAdjust((PKTIMER)(v18 - 36), v10);
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != (_QWORD *)(a1 + 1808) );
      v1 = (KSPIN_LOCK *)(a1 + 1800);
    }
    KeAdjustTimerDelayProcess(a1, v4, v3);
    v9 = v8;
  }
  KeReleaseSpinLock(v1, v9);
  return 0LL;
}
