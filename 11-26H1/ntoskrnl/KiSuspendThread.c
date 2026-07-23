/*
 * XREFs of KiSuspendThread @ 0x14020917C
 * Callers:
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x14020908C (KiFreezeSingleThread.c)
 *     KiAdjustThreadTimer @ 0x1405F8DC8 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiCancelTimer @ 0x1403B6FE0 (KiCancelTimer.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     KiRequestApcInterruptSynchronously @ 0x140522BEC (KiRequestApcInterruptSynchronously.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // di
  __int64 v5; // r15
  char v7; // r14
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  volatile signed __int32 *v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char result; // al
  char v17; // al
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  v4 = 0;
  v21 = 0;
  v5 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    v4 = 1;
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v7 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v7 = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v7 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(v5, a1 + 648, a3, v3 != 0 ? 2 : 0);
        }
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 116);
        v9 = v8 ^ (*(char *)(a1 + 391) << 18);
        *(_BYTE *)(a1 + 112) = 3;
        *(_BYTE *)(a1 + 193) = 1;
        *(_DWORD *)(a1 + 116) = v8 ^ v9 & 0x40000;
        *(_QWORD *)(a1 + 64) = 0LL;
        v10 = *(_QWORD *)(a1 + 208);
        v11 = v10 + 17;
        v12 = v10 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v11 < 5u )
          {
            v13 = *(volatile signed __int32 **)(v11 + 15);
            KiAcquireKobjectLockSafe(v13);
            if ( *(_BYTE *)v11 == 4 )
            {
              a2 = v11 - 17;
              v14 = *(_QWORD *)(v11 - 17);
              if ( *(_QWORD *)(v14 + 8) != v11 - 17 || (v15 = *(_QWORD **)(v11 - 9), *v15 != a2) )
                __fastfail(3u);
              *v15 = v14;
              *(_QWORD *)(v14 + 8) = v15;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
            *(_BYTE *)v11 = 6;
          }
          v11 += 48LL;
        }
        while ( v11 - 17 != v12 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(a2) = 1;
          v18 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, a2) )
          {
            v19 = *(_QWORD *)(a1 + 280);
            if ( v19 <= v18 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v18;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v18 - v19;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v17 = *(_BYTE *)(a1 + 112) & 0xF8 | 4;
        *(_DWORD *)(a1 + 116) = (*(_DWORD *)(a1 + 116) & 0xFFFDFFFF ^ ((*(_DWORD *)(a1 + 116) & 0x200) << 8)) & 0xFFFFFDFF;
        *(_BYTE *)(a1 + 112) = v17;
        if ( (v17 & 0x20) != 0 )
          KiSignalThread(v5, a1, 256LL, 0LL);
      }
    }
    else if ( v3 && KeGetCurrentThread() != (struct _KTHREAD *)a1 && *(_BYTE *)(a1 + 388) == 2 )
    {
      v20 = *(unsigned int *)(a1 + 536);
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      KiRequestApcInterruptSynchronously(v20);
    }
  }
  result = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
