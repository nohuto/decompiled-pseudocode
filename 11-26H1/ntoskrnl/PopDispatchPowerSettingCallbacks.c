/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1409FBC00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403BDF7C (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403BE16C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E227C (PopUnregisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x1409FBD3C (PopCallPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopDispatchPowerSettingCallbacks()
{
  __int64 Next_high; // rdi
  _DWORD *v1; // rbx
  __int64 v2; // r14
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rdi
  _QWORD *v7; // rax
  char v8; // al
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char v11; // cl

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  ExAcquireFastMutex(&PopSettingLock);
  v1 = PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = Next_high;
    while ( 1 )
    {
      v3 = v1 + 4;
      v4 = *((_QWORD *)v1 + 2);
      while ( (_QWORD *)v4 != v3 )
      {
        if ( *(_BYTE *)(v4 + 104) )
        {
          v4 = *(_QWORD *)v4;
        }
        else
        {
          *(_BYTE *)(v4 + 104) = 1;
          if ( *(_QWORD *)(v4 + 72) != *(_QWORD *)&v1[2 * v2 + 16] )
            PopCallPowerSettingCallback(v4);
          v5 = *(_QWORD *)v4;
          *(_BYTE *)(v4 + 104) = 0;
          if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 32) )
            PopUnregisterPowerSettingCallback((__int64 *)v4);
          v4 = v5;
        }
      }
      if ( (_QWORD *)*v3 != v3 || v1[14] || v1[15] )
      {
        v6 = *(_QWORD *)v1;
      }
      else
      {
        v8 = 1;
        v9 = v1 + 16;
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
        v6 = *(_QWORD *)v1;
        if ( v11 )
        {
          if ( *(_DWORD **)(v6 + 8) != v1 || (v7 = (_QWORD *)*((_QWORD *)v1 + 1), (_DWORD *)*v7 != v1) )
            __fastfail(3u);
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          ExFreePoolWithTag(v1, 0x74655350u);
        }
      }
      if ( (PVOID *)v6 == &PopPowerSettings )
        break;
      v1 = (_DWORD *)v6;
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  PopDecrementPowerSettingPendingUpdates(0);
}
