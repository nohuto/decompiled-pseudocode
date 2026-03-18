/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x140A401E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403B4070 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403B4260 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E8EBC (PopUnregisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x140A4031C (PopCallPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rdi
  LONG *p_LockNV; // rbx
  __int64 v2; // r14
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  struct _KTHREAD *v6; // rdi
  struct _LIST_ENTRY *v7; // rax
  char v8; // al
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char v11; // cl

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_140F106CC;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  p_LockNV = *(LONG **)&stru_140F10828.ThreadTimerDelay;
  if ( *(struct _KTHREAD **)&stru_140F10828.ThreadTimerDelay != (struct _KTHREAD *)&stru_140F10828.ThreadTimerDelay )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = p_LockNV + 4;
      v4 = *((_QWORD *)p_LockNV + 2);
      while ( (_QWORD *)v4 != v3 )
      {
        if ( *(_BYTE *)(v4 + 104) )
        {
          v4 = *(_QWORD *)v4;
        }
        else
        {
          *(_BYTE *)(v4 + 104) = 1;
          if ( *(_QWORD *)(v4 + 72) != *(_QWORD *)&p_LockNV[2 * v2 + 16] )
            PopCallPowerSettingCallback(v4);
          v5 = *(_QWORD *)v4;
          *(_BYTE *)(v4 + 104) = 0;
          if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 32) )
            PopUnregisterPowerSettingCallback((__int64 *)v4);
          v4 = v5;
        }
      }
      if ( (_QWORD *)*v3 != v3 || p_LockNV[14] || p_LockNV[15] )
      {
        v6 = *(struct _KTHREAD **)p_LockNV;
      }
      else
      {
        v8 = 1;
        v9 = p_LockNV + 16;
        v10 = 3LL;
        do
        {
          v11 = 0;
          if ( *v9++ == 0LL )
            v11 = v8;
          v8 = v11;
          --v10;
        }
        while ( v10 );
        v6 = *(struct _KTHREAD **)p_LockNV;
        if ( v11 )
        {
          if ( (LONG *)v6->Header.WaitListHead.Flink != p_LockNV
            || (v7 = (struct _LIST_ENTRY *)*((_QWORD *)p_LockNV + 1), (LONG *)v7->Flink != p_LockNV) )
          {
            __fastfail(3u);
          }
          v7->Flink = (struct _LIST_ENTRY *)v6;
          v6->Header.WaitListHead.Flink = v7;
          ExFreePoolWithTag(p_LockNV, 0x74655350u);
        }
      }
      if ( v6 == (struct _KTHREAD *)&stru_140F10828.ThreadTimerDelay )
        break;
      p_LockNV = &v6->Header.LockNV;
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  PopDecrementPowerSettingPendingUpdates(0);
}
