/*
 * XREFs of PopPowerRequestHandleRequestUpdate @ 0x140AE4F44
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407CC4F0 (PopPowerRequestDebounceTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407DF5DC (PopUmpoSendPowerRequestAction.c)
 */

char __fastcall PopPowerRequestHandleRequestUpdate(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // r8d
  int v9; // eax
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // r14d
  unsigned __int8 v15; // si
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 48LL * (int)a2;
  v7 = *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 8);
  v8 = v7 + 1;
  v9 = v7 - 1;
  if ( a3 )
    v9 = v8;
  *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 8) = v9;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( a2 <= 3 )
      {
        v10 = LOBYTE(stru_140F12EA0.OtherTransferCount) == 0;
        *(_BYTE *)((int)a2 + a1 + 153) = a3;
        if ( !v10 )
          LOBYTE(v9) = PopUmpoSendPowerRequestAction(*(_DWORD *)(a1 + 36), a2, a3);
      }
    }
  }
  v11 = *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 12);
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 4) == 0 )
    {
      v12 = v11 | 4;
      *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 12) = v12;
      v13 = 0;
      while ( 1 )
      {
        v14 = v12 & 2;
        v15 = *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 8) != 0;
        LOBYTE(v9) = v14 != 0;
        if ( (_BYTE)v9 == v15 )
          break;
        PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
        guard_dispatch_icall_no_overrides(0LL, a2);
        PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, v16, v17, v18);
        v12 = *(_DWORD *)((_BYTE *)&PopPowerRequestAttributes + v6 + 12) & 0xFFFFFFFD | (2 * v15);
        *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 12) = v12;
        if ( v14 )
        {
          if ( (unsigned int)++v13 >= 3 )
          {
            ++*(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 8);
            v23[0] = 0LL;
            *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 12) = v12 | 8;
            v23[1] = -1LL;
            LOBYTE(v9) = KeSetTimer2((__int64)&stru_140F12EA0.SavedApcStateFill[40], -50000000LL, 0LL, (__int64)v23);
            break;
          }
        }
      }
      *(_DWORD *)((char *)&PopPowerRequestAttributes + v6 + 12) &= ~4u;
    }
  }
  else
  {
    PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
    guard_dispatch_icall_no_overrides(a1, a2);
    LOBYTE(v9) = (unsigned __int8)PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, v19, v20, v21);
  }
  return v9;
}
