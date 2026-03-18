/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x140043FA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1400445F4 (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x140055D74 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1400562DC (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchControlVSyncAdapter @ 0x1400FD840 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1401043F0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 v9; // r15
  _QWORD *Pool2; // rdi
  int v12; // ebx
  bool v13; // r8
  unsigned __int64 CurrentVSyncPeriod100ns; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 i; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // r8
  char v25; // si
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 Timer; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-19h] BYREF
  __int128 v35; // [rsp+70h] [rbp-1h] BYREF
  __int128 v36; // [rsp+80h] [rbp+Fh]
  __int64 v37; // [rsp+90h] [rbp+1Fh]
  __int64 v38; // [rsp+C8h] [rbp+57h]

  v7 = a4;
  v37 = 0LL;
  v9 = *((_QWORD *)a1 + a4 + 431);
  v35 = 0LL;
  v36 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, a4) && (int)VidSchControlVSyncAdapter(a1) >= 0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 64LL, 1650551126LL);
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_14008A994);
      WdLogSingleEntry1(6LL, 14499LL);
      WdLogGlobalForLineNumber = 14499;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"ExAllocatePool for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        14499LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      VidSchControlVSyncAdapter(a1);
LABEL_36:
      *a6 = 0LL;
      return (unsigned int)v12;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
    *((_BYTE *)Pool2 + 25) = *(_BYTE *)(v9 + 83088) + 1;
    CurrentVSyncPeriod100ns = VidSchiGetCurrentVSyncPeriod100ns(a1, a4, v13);
    v15 = *(_QWORD *)(v9 + 78960);
    v38 = CurrentVSyncPeriod100ns;
    if ( v15 )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        if ( !*(_QWORD *)(v15 + 8 * i) )
        {
          *((_BYTE *)Pool2 + 24) = i;
          goto LABEL_14;
        }
      }
      _InterlockedIncrement(&dword_14008A994);
      WdLogSingleEntry1(6LL, 14542LL);
      WdLogGlobalForLineNumber = 14542;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Cap for ppPeriodicFrameNotificationStorageArray reached, returning STATUS_NO_MEMORY.",
        14542LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_35;
    }
    v16 = ExAllocatePool2(64LL, 64LL, 1650551126LL);
    *(_QWORD *)(v9 + 78960) = v16;
    v15 = v16;
    if ( !v16 )
    {
      _InterlockedIncrement(&dword_14008A994);
      WdLogSingleEntry1(6LL, 14518LL);
      WdLogGlobalForLineNumber = 14518;
      DxgkLogInternalTriageEvent(v17, 262145LL);
LABEL_35:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v12 = -1073741801;
      VidSchControlVSyncAdapter(a1);
      ExFreePoolWithTag(Pool2, 0x62616956u);
      goto LABEL_36;
    }
    *((_BYTE *)Pool2 + 24) = 0;
LABEL_14:
    *(_QWORD *)(v15 + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)) = Pool2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    v19 = *((_QWORD *)a1 + 2);
    *((_DWORD *)Pool2 + 2) = a4;
    *Pool2 = a2;
    v20 = *(_QWORD *)(a5 + 16);
    Pool2[2] = v20;
    Pool2[7] = v19;
    if ( *((_DWORD *)a1 + 64) == 1 )
    {
      v12 = -1073741822;
LABEL_24:
      v26 = *((_DWORD *)a1 + 64);
      if ( v26 == 2 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 14582;
        v12 = -1073741822;
LABEL_22:
        VidSchDestroyPeriodicFrameNotification(
          *(_QWORD **)(*(_QWORD *)(v9 + 78960) + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)),
          (unsigned __int8)*((_DWORD *)Pool2 + 6),
          v24);
        goto LABEL_36;
      }
      if ( v26 != 1 )
      {
        WdLogSingleEntry1(3LL, v12);
        WdLogGlobalForLineNumber = 14589;
        if ( (byte_14008A201 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventPerformanceWarning, v28, 25);
      }
      v25 = v38;
      v29 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 44368), v38, Pool2[2], -1);
      Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, Pool2, 4LL);
      Pool2[5] = Timer;
      if ( !Timer )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14604;
        DxgkLogInternalTriageEvent(v31, 0x40000LL);
        v12 = -1073741801;
        goto LABEL_22;
      }
      v32 = 0LL;
      if ( v29 <= 0 )
        v32 = v29;
      ExSetTimer(Timer, v32, 0LL, 0LL);
      v12 = 0;
LABEL_19:
      *a6 = Pool2;
      if ( (byte_14008A201 & 4) != 0 )
        McTemplateK0pqxxqpp_EtwWriteTransfer(
          v23,
          (unsigned int)&EventCreatePeriodicFrameNotification,
          v24,
          *Pool2,
          *((_DWORD *)Pool2 + 2),
          Pool2[2],
          v25,
          *((_DWORD *)Pool2 + 6),
          Pool2[4],
          Pool2[5]);
      if ( v12 >= 0 )
        return (unsigned int)v12;
      goto LABEL_22;
    }
    v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 3160) + 128LL) + 4024 * v7 + 1072);
    DWORD2(v36) = *((_DWORD *)Pool2 + 6);
    *(_QWORD *)&v36 = v20;
    DWORD2(v35) = v21;
    v22 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[74])(*(_QWORD *)(v19 + 3160), &v35);
    v12 = v22;
    if ( v22 < 0 )
    {
      if ( (unsigned int)(v22 + 0x3FFFFFFF) <= 1 )
        goto LABEL_24;
    }
    else
    {
      v23 = v37;
      Pool2[4] = v37;
    }
    v25 = v38;
    goto LABEL_19;
  }
  return 3223191558LL;
}
