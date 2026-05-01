/*
 * XREFs of CrmStateMonitorInitialize @ 0x180048924
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180048560 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CrmStateMonitorResourceUsageInitialize @ 0x180076F90 (CrmStateMonitorResourceUsageInitialize.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(__int64 a1, int a2))(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 (__fastcall *v16)(); // rcx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 (__fastcall *v21)(__int64, int, __int64); // rcx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  CempLockInitialize(a1 + 8);
  *(_DWORD *)a1 = a2;
  result = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 + 24);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  if ( a2 > 21 )
  {
    if ( a2 > 32 )
    {
      if ( a2 <= 38 )
      {
        if ( a2 == 38 )
          goto LABEL_26;
        v25 = a2 - 33;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
            goto LABEL_26;
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 != 1 )
                return result;
              *(_QWORD *)(a1 + 56) = 0LL;
              *(_QWORD *)(a1 + 88) = 0LL;
              *(_QWORD *)(a1 + 80) = a1 + 72;
              *(_QWORD *)(a1 + 72) = a1 + 72;
              result = (__int64 (__fastcall *)(__int64, __int64, __int64))CrmStateMonitorDelayedInternetLossCallback;
              goto LABEL_64;
            }
            v21 = (__int64 (__fastcall *)(__int64, int, __int64))CrmStateMonitorAcDcBatteryCallback;
          }
          else
          {
            v21 = (__int64 (__fastcall *)(__int64, int, __int64))CrmStateMonitorAcDcDisplayCallback;
          }
LABEL_46:
          *(_QWORD *)(a1 + 56) = 0LL;
          goto LABEL_47;
        }
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorDelayedCsCallback;
LABEL_64:
        *(_QWORD *)(a1 + 64) = result;
        return result;
      }
      v29 = a2 - 39;
      if ( !v29 )
      {
        memset_0((void *)(a1 + 56), 0, 0x68uLL);
        *(_QWORD *)(a1 + 104) = a1 + 96;
        *(_QWORD *)(a1 + 96) = a1 + 96;
        result = (__int64 (__fastcall *)(__int64, __int64, __int64))CrmStateMonitorFanNoiseHysteresisCallback;
        goto LABEL_74;
      }
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_26;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_26;
      if ( v31 != 1 )
        return result;
    }
    else
    {
      if ( a2 == 32 )
        goto LABEL_26;
      if ( a2 <= 27 )
      {
        if ( a2 == 27 )
        {
          *(_QWORD *)(a1 + 56) = 0LL;
          *(_QWORD *)(a1 + 88) = 0LL;
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = (__int64 (__fastcall *)(__int64, __int64, __int64))CrmStateMonitorDelayedAcCallback;
        }
        else
        {
          v17 = a2 - 22;
          if ( !v17 )
            goto LABEL_26;
          v18 = v17 - 1;
          if ( !v18 )
            goto LABEL_26;
          v19 = v18 - 1;
          if ( !v19 )
          {
            memset_0((void *)(a1 + 56), 0, 0x40uLL);
            *(_QWORD *)(a1 + 80) = a1 + 72;
            *(_QWORD *)(a1 + 72) = a1 + 72;
            result = CrmStateMonitorCPUUsageCSCallback;
            *(_QWORD *)(a1 + 64) = CrmStateMonitorCPUUsageCSCallback;
            *(_DWORD *)(a1 + 96) = 10000;
            return result;
          }
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
              return result;
            v21 = (__int64 (__fastcall *)(__int64, int, __int64))CrmStateMonitorCsAcDcCallback;
            goto LABEL_46;
          }
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = CrmStateMonitorSystemDiskUsageCSCallback;
        }
        goto LABEL_64;
      }
      v22 = a2 - 28;
      if ( !v22 )
        return result;
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
          goto LABEL_26;
        if ( v24 != 1 )
          return result;
        *(_QWORD *)(a1 + 56) = 0LL;
        v21 = CrmStateMonitorDisconnectedStandbyCallback;
        *(_QWORD *)(a1 + 112) = 0LL;
LABEL_47:
        *(_QWORD *)(a1 + 72) = a1 + 72;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        result = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 + 96);
        *(_QWORD *)(a1 + 64) = v21;
        *(_QWORD *)(a1 + 104) = a1 + 96;
        *(_QWORD *)(a1 + 96) = a1 + 96;
        *(_QWORD *)(a1 + 88) = v21;
        return result;
      }
    }
    return (__int64 (__fastcall *)(__int64, __int64, __int64))CrmStateMonitorResourceUsageInitialize(a1);
  }
  if ( a2 == 21 )
  {
    memset_0((void *)(a1 + 56), 0, 0x58uLL);
    v16 = CrmStateMonitorPowerConstrainedCallback;
    goto LABEL_32;
  }
  if ( a2 > 10 )
  {
    if ( a2 <= 16 )
    {
      if ( a2 == 16 )
        goto LABEL_26;
      v10 = a2 - 11;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v9 = v12 - 1;
            if ( v9 )
            {
LABEL_25:
              if ( v9 != 1 )
                return result;
            }
          }
LABEL_26:
          result = 0LL;
          *(_OWORD *)(a1 + 56) = 0LL;
          *(_OWORD *)(a1 + 72) = 0LL;
LABEL_74:
          *(_QWORD *)(a1 + 88) = result;
          return result;
        }
      }
LABEL_34:
      result = 0LL;
      *(_OWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      return result;
    }
    v13 = a2 - 17;
    if ( !v13 )
      goto LABEL_26;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_34;
    v15 = v14 - 1;
    if ( !v15 )
    {
      memset_0((void *)(a1 + 56), 0, 0x80uLL);
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_QWORD *)(a1 + 72) = a1 + 72;
      *(_QWORD *)(a1 + 64) = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      result = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 + 120);
      *(_QWORD *)(a1 + 88) = CrmStateMonitorPostShellReadyUsageCallback;
      *(_QWORD *)(a1 + 128) = a1 + 120;
      *(_QWORD *)(a1 + 120) = a1 + 120;
      *(_QWORD *)(a1 + 112) = CrmStateMonitorPostShellReadyUsageCallback;
      return result;
    }
    if ( v15 != 1 )
      return result;
    memset_0((void *)(a1 + 56), 0, 0x88uLL);
    *(_QWORD *)(a1 + 80) = a1 + 72;
    v16 = CrmStateMonitorPostResumeUsageCallback;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    *(_QWORD *)(a1 + 64) = CrmStateMonitorPostResumeSuspendCallback;
LABEL_32:
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    result = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 + 128);
    *(_QWORD *)(a1 + 96) = v16;
    *(_QWORD *)(a1 + 136) = a1 + 128;
    *(_QWORD *)(a1 + 128) = a1 + 128;
    *(_QWORD *)(a1 + 120) = v16;
    return result;
  }
  if ( a2 == 10 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    return result;
  }
  if ( a2 > 5 )
  {
    v7 = a2 - 6;
    if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 )
    {
LABEL_17:
      *(_OWORD *)(a1 + 56) = 0LL;
      return result;
    }
    goto LABEL_25;
  }
  if ( a2 == 5 )
    goto LABEL_17;
  if ( !a2 || (v5 = a2 - 1) == 0 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    return result;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = (__int64 (__fastcall *)(__int64, __int64, __int64))(a1 + 104);
    *(_QWORD *)(a1 + 64) = CrmStateMonitorCompositeTestCallback;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 96) = CrmStateMonitorCompositeTestCallback;
    return result;
  }
  if ( (unsigned int)(v6 - 1) < 2 )
    goto LABEL_17;
  return result;
}
