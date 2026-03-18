/*
 * XREFs of RIMUnregisterForInput @ 0x140129F90
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x14005B324 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x140129C98 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     NtRIMUnregisterForInput @ 0x1401FF730 (NtRIMUnregisterForInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x14005DFAC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x140092C7C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     RIMCloseDev @ 0x1400933FC (RIMCloseDev.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimRemoveFromObTrackList @ 0x140131038 (rimRemoveFromObTrackList.c)
 *     rimFreeAllUserMem @ 0x140131E40 (rimFreeAllUserMem.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1401809D0 (rimResetPnpRemovePendingStateBits.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14018364C (RIMHandlePowerDeviceRemoval.c)
 *     RIMSignalAllDispositionWaiters @ 0x14018E1F0 (RIMSignalAllDispositionWaiters.c)
 *     RIMFreeAllQueuedCompleteFrames @ 0x140192E7C (RIMFreeAllQueuedCompleteFrames.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401951EC (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1, __int64 a2, int a3)
{
  char v4; // di
  bool v5; // r14
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  int v11; // r12d
  char v12; // r14
  bool v13; // r15
  char *v14; // rdi
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // r14
  __int64 v19; // r12
  _DWORD *v20; // r15
  int v21; // eax
  struct _KTHREAD *v22; // rcx
  _QWORD *v23; // r13
  void *v24; // rcx
  _QWORD *v25; // rax
  int v26; // r8d
  unsigned int v27; // r15d
  char **v28; // r14
  _DWORD *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  HANDLE *v36; // r14
  char *v37; // rcx
  char *v38; // rcx
  void *v39; // rcx
  __int64 v40; // rdx
  int v41; // r8d
  char v42; // di
  bool v43; // r14
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  char *v49; // [rsp+60h] [rbp-48h]
  char *v50; // [rsp+68h] [rbp-40h]
  __int128 Src[3]; // [rsp+70h] [rbp-38h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      101,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v9, v10);
      v14 = (char *)Object;
      LOBYTE(v16) = v13;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19368),
        4,
        1,
        102,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        (char)Object);
    }
    else
    {
      v14 = (char *)Object;
    }
    v50 = v14 + 104;
    RIMLockExclusive((__int64)(v14 + 104));
    v49 = v14 + 760;
    RIMLockExclusive((__int64)(v14 + 760));
    v14[80] = 1;
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v14);
    v18 = *((_QWORD *)v14 + 53);
    *((_QWORD *)v14 + 53) = 0LL;
    while ( v18 )
    {
      v19 = v18;
      v20 = (_DWORD *)(v18 + 168);
      v21 = *(_DWORD *)(v18 + 168);
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2896LL);
        *v20 &= ~0x10u;
        v22 = *(struct _KTHREAD **)(v18 + 296);
        if ( !v22 || v22 == KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2900LL);
        KeSetEvent(*(PRKEVENT *)(v18 + 336), 1, 0);
      }
      v23 = (_QWORD *)(v18 + 232);
      v24 = *(void **)(v18 + 232);
      if ( (*v20 & 0x20) != 0 )
      {
        if ( v24 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2922LL);
      }
      else if ( v24 )
      {
        IoUnregisterPlugPlayNotification(v24);
        *v23 = 0LL;
        ObfDereferenceObject(*(PVOID *)(v18 + 32));
      }
      RIMCloseDev(v18);
      v25 = (_QWORD *)(v18 + 40);
      v18 = *(_QWORD *)(v18 + 40);
      *v25 = 0LL;
      if ( (*v20 & 0x2000) != 0 )
      {
        RIMHandlePowerDeviceRemoval(v19);
      }
      else
      {
        rimResetPnpRemovePendingStateBits(v19);
        if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        {
          *v20 |= 8u;
          rimOnPnpRemoveComplete((__int64)v14, v19, v26);
          if ( *v23 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2943LL);
          rimDoRimDevChange((__int64)v14, v19, 3u);
        }
        RIMFreeSpecificDev((struct RawInputManagerObject *)v14, v19);
      }
    }
    v27 = 0;
    v28 = (char **)(v14 + 312);
    v29 = v14 + 296;
    do
    {
      v11 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v14, v27);
      if ( !*v29 && *v28 )
      {
        GreDeleteFastMutex(*v28, v30, v31, v32);
        *v28 = 0LL;
      }
      ++v27;
      ++v29;
      ++v28;
    }
    while ( v27 <= 2 );
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v14);
    rimFreeAllUserMem(v14);
    if ( v14[776] )
    {
      v36 = (HANDLE *)(v14 + 840);
      if ( *((_QWORD *)v14 + 105) )
      {
        Src[0] = 0xC0000128uLL;
        if ( *((_DWORD *)v14 + 212) )
          RtlCopyToUser(*((void **)v14 + 109), Src, 0x10uLL);
        else
          *(_OWORD *)*((_QWORD *)v14 + 109) = Src[0];
        ZwSetEvent(*v36, 0LL);
        ZwClose(*v36);
      }
    }
    v37 = (char *)*((_QWORD *)v14 + 52);
    if ( v37 )
    {
      GreDeleteFastMutex(v37, v33, v34, v35);
      *((_QWORD *)v14 + 52) = 0LL;
    }
    v38 = (char *)*((_QWORD *)v14 + 12);
    if ( v38 )
    {
      GreDeleteFastMutex(v38, v33, v34, v35);
      *((_QWORD *)v14 + 12) = 0LL;
      *((_DWORD *)v14 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v14 + 42), 0LL);
    ZwClose(*((HANDLE *)v14 + 42));
    *((_QWORD *)v14 + 42) = -1LL;
    ZwClose(*((HANDLE *)v14 + 43));
    *((_QWORD *)v14 + 43) = -1LL;
    v14[81] = 1;
    RIMLockExclusive((__int64)(v14 + 352));
    v14[10] = 1;
    v39 = (void *)*((_QWORD *)v14 + 46);
    if ( v39 != (void *)-1LL )
    {
      ZwClose(v39);
      *((_QWORD *)v14 + 46) = -1LL;
    }
    RIMDeleteAllAsyncWorkNotificationItems(v14);
    RIMUnlockExclusive((__int64)(v14 + 352));
    rimRemoveFromObTrackList(v14);
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v14, v40, v41);
    RIMSignalAllDispositionWaiters(v14);
    RIMUnlockExclusive((__int64)v49);
    RIMUnlockExclusive((__int64)v50);
    ObfDereferenceObject(v14);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v42 = 0;
  }
  v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v44 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v9, v10);
    LOBYTE(v45) = v43;
    LOBYTE(v46) = v42;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v46,
      v45,
      *(_QWORD *)(v44 + 19368),
      4,
      1,
      103,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return (unsigned int)v11;
}
