/*
 * XREFs of KiResumeThread @ 0x140310D78
 * Callers:
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x140310CA4 (KiThawSingleThread.c)
 *     KiAdjustThreadTimer @ 0x1405F8DC8 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1403B7DD0 (KiComputeDueTime.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 *     KiTestForAlertPending @ 0x1404A4888 (KiTestForAlertPending.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  char v4; // si
  __int64 v5; // r12
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 *v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // edi
  char v15; // al
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF

  v3 = &retaddr;
  v25 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v4 = a3;
  v5 = a2;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v24);
      v3 = *(_UNKNOWN ***)(a1 + 64);
    }
    while ( v3 );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 112) & 7;
    if ( (_BYTE)v3 == 4 )
    {
      if ( !v4 )
      {
        *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
        v7 = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
        v8 = *(_BYTE *)(a1 + 587);
        while ( v7 < v8 )
        {
          v9 = *(_QWORD *)(a1 + 208) + 48LL * v7;
          if ( *(_BYTE *)(v9 + 17) == 6 )
          {
            v10 = *(_QWORD *)(v9 + 32);
            *(_BYTE *)(v9 + 17) = 4;
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v10, a2, a3);
            if ( *(int *)(v10 + 4) > 0 || (*(_BYTE *)v10 & 0x7F) == 2 )
            {
              _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
              *(_BYTE *)(v9 + 17) = 5;
              v4 = 1;
              break;
            }
            v11 = *(__int64 **)(v10 + 16);
            if ( *v11 != v10 + 8 )
              __fastfail(3u);
            *(_QWORD *)v9 = v10 + 8;
            *(_QWORD *)(v9 + 8) = v11;
            *v11 = v9;
            *(_QWORD *)(v10 + 16) = v9;
            _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
          }
          ++v7;
        }
        v12 = 0;
        if ( _bittest((const signed __int32 *)(a1 + 116), 0x11u) && !v4 )
        {
          v13 = *(_QWORD *)(a1 + 280);
          *(_DWORD *)(a1 + 256) |= 0x40000080u;
          if ( (unsigned int)KiComputeDueTime(a1 + 256, v13, 0LL, &v25) )
          {
            if ( (unsigned __int8)KiInsertTimerTable(v5, (int)a1 + 256, 0, v25, 0LL) )
            {
              if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
              {
                LOBYTE(a3) = 1;
                KiTraceSetTimer(a1 + 256, 0LL, a3);
              }
              else
              {
                _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
              }
            }
            else
            {
              KiTimerWaitTest(v5, a1 + 256, 0LL);
            }
            v12 = 1;
          }
          else
          {
            v4 = 1;
            v12 = 0;
          }
        }
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v14 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v12 << 9) & 0xFFFDFFFF;
        v15 = *(_BYTE *)(a1 + 112) & 0xE7;
        *(_DWORD *)(a1 + 116) = v14;
        if ( v15 == 5
          && (LOBYTE(a3) = *(_BYTE *)(a1 + 391),
              LOBYTE(a2) = (v14 & 0x10) != 0,
              !(unsigned int)KiTestForAlertPending(a1, a2, a3, 0LL)) )
        {
          if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
            v4 = 1;
        }
        else
        {
          v4 = 1;
        }
      }
      LOBYTE(v3) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
      *(_BYTE *)(a1 + 112) = (_BYTE)v3;
    }
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      LOBYTE(v3) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v3 == 5 )
        LOBYTE(v3) = KiSignalThread(v5, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(v3) = KiSignalThreadForApc(v5, a1 + 648, 2, 0);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v16 = a1 + 736;
  v17 = (_QWORD *)(a1 + 744);
  v18 = (_QWORD *)*v17;
  while ( v18 != v17 )
  {
    v19 = (__int64)v18;
    v18 = (_QWORD *)*v18;
    v20 = *(_BYTE *)(v19 + 16);
    switch ( v20 )
    {
      case 1:
        v21 = *(unsigned __int16 *)(v19 + 18);
        goto LABEL_53;
      case 2:
        *(_BYTE *)(v19 + 17) = 5;
        LOBYTE(v3) = KiInsertQueueInternal(*(_QWORD *)(v19 + 24), (_QWORD *)v19, a3);
        break;
      case 4:
        *(_BYTE *)(v19 + 17) = 5;
        *(_DWORD *)(v16 + 4) = 0;
        LOBYTE(v3) = KiInsertQueueDpc(*(_QWORD *)(v19 + 24), v16, v19, 0LL, 0);
        break;
      default:
        v21 = 256LL;
LABEL_53:
        LOBYTE(v3) = KiTryUnwaitThread(v5, v19, v21, 0LL);
        break;
    }
  }
  v17[1] = v17;
  *v17 = v17;
  return (char)v3;
}
