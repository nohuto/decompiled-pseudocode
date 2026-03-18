/*
 * XREFs of RIMUnregisterForInput @ 0x14009DC10
 * Callers:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14009C4B8 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x14010F4A0 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1401D8690 (NtRIMUnregisterForInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x14002CED8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401086C0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimRemoveFromObTrackList @ 0x14012A328 (rimRemoveFromObTrackList.c)
 *     RIMCloseDev @ 0x14013F5A8 (RIMCloseDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140144ED0 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAllUserMem @ 0x14014AF38 (rimFreeAllUserMem.c)
 *     RIMHandlePowerDeviceRemoval @ 0x14014B934 (RIMHandlePowerDeviceRemoval.c)
 *     RIMSignalAllDispositionWaiters @ 0x14014F660 (RIMSignalAllDispositionWaiters.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 *     RIMFreeAllQueuedCompleteFrames @ 0x1401EF46C (RIMFreeAllQueuedCompleteFrames.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EFC94 (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  char v2; // di
  bool v3; // r14
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  int v8; // r12d
  char v9; // r14
  bool v10; // r15
  char *v11; // rdi
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r14
  __int64 v16; // r13
  _DWORD *v17; // r15
  int v18; // eax
  struct _KTHREAD *v19; // rcx
  _QWORD *v20; // r12
  void *v21; // rcx
  _QWORD *v22; // rax
  unsigned int v23; // r15d
  char **v24; // r14
  _DWORD *v25; // r13
  HANDLE *v26; // r14
  void *v27; // rcx
  char *v28; // rcx
  char *v29; // rcx
  void *v30; // rcx
  char v31; // di
  bool v32; // r14
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  char *v38; // [rsp+60h] [rbp-48h]
  char *v39; // [rsp+68h] [rbp-40h]
  __int128 Src[3]; // [rsp+70h] [rbp-38h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      102,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v8 >= 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v7);
      v11 = (char *)Object;
      LOBYTE(v13) = v10;
      LOBYTE(v14) = v9;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19336),
        4,
        1,
        103,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        (char)Object);
    }
    else
    {
      v11 = (char *)Object;
    }
    v39 = v11 + 104;
    RIMLockExclusive((__int64)(v11 + 104));
    v38 = v11 + 760;
    RIMLockExclusive((__int64)(v11 + 760));
    v11[80] = 1;
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v11);
    v15 = *((_QWORD *)v11 + 53);
    *((_QWORD *)v11 + 53) = 0LL;
    while ( v15 )
    {
      v16 = v15;
      v17 = (_DWORD *)(v15 + 168);
      v18 = *(_DWORD *)(v15 + 168);
      if ( (v18 & 0x10) != 0 )
      {
        if ( (v18 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2936LL);
        *v17 &= ~0x10u;
        v19 = *(struct _KTHREAD **)(v15 + 296);
        if ( !v19 || (v11 = (char *)Object, v19 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2940LL);
        KeSetEvent(*(PRKEVENT *)(v15 + 336), 1, 0);
      }
      v20 = (_QWORD *)(v15 + 232);
      v21 = *(void **)(v15 + 232);
      if ( (*v17 & 0x20) != 0 )
      {
        if ( v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2962LL);
      }
      else if ( v21 )
      {
        IoUnregisterPlugPlayNotification(v21);
        *v20 = 0LL;
        ObfDereferenceObject(*(PVOID *)(v15 + 32));
      }
      RIMCloseDev(v15);
      v22 = (_QWORD *)(v15 + 40);
      v15 = *(_QWORD *)(v15 + 40);
      *v22 = 0LL;
      if ( (*v17 & 0x2000) != 0 )
      {
        RIMHandlePowerDeviceRemoval(v16);
      }
      else
      {
        rimResetPnpRemovePendingStateBits(v16);
        if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
        {
          *v17 |= 8u;
          rimOnPnpRemoveComplete((char)v11, v16);
          if ( *v20 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2983LL);
          rimDoRimDevChange((__int64)v11, v16, 3u);
        }
        RIMFreeSpecificDev((struct RawInputManagerObject *)v11);
      }
    }
    v23 = 0;
    v24 = (char **)(v11 + 312);
    v25 = v11 + 296;
    do
    {
      v8 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v11, v23);
      if ( !*v25 && *v24 )
      {
        GreDeleteFastMutex(*v24);
        *v24 = 0LL;
      }
      ++v23;
      ++v25;
      ++v24;
    }
    while ( v23 <= 2 );
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      RIMFreeAllQueuedCompleteFrames(v11);
    rimFreeAllUserMem(v11);
    if ( v11[776] )
    {
      v26 = (HANDLE *)(v11 + 840);
      if ( *((_QWORD *)v11 + 105) )
      {
        Src[0] = 0xC0000128uLL;
        if ( *((_DWORD *)v11 + 212) )
        {
          v27 = (void *)*((_QWORD *)v11 + 109);
          if ( (unsigned __int64)v27 >= MmUserProbeAddress )
            v27 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v27, Src, 0x10uLL);
        }
        else
        {
          *(_OWORD *)*((_QWORD *)v11 + 109) = Src[0];
        }
        ZwSetEvent(*v26, 0LL);
        ZwClose(*v26);
      }
    }
    v28 = (char *)*((_QWORD *)v11 + 52);
    if ( v28 )
    {
      GreDeleteFastMutex(v28);
      *((_QWORD *)v11 + 52) = 0LL;
    }
    v29 = (char *)*((_QWORD *)v11 + 12);
    if ( v29 )
    {
      GreDeleteFastMutex(v29);
      *((_QWORD *)v11 + 12) = 0LL;
      *((_DWORD *)v11 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v11 + 42), 0LL);
    ZwClose(*((HANDLE *)v11 + 42));
    *((_QWORD *)v11 + 42) = -1LL;
    ZwClose(*((HANDLE *)v11 + 43));
    *((_QWORD *)v11 + 43) = -1LL;
    v11[81] = 1;
    RIMLockExclusive((__int64)(v11 + 352));
    v11[10] = 1;
    v30 = (void *)*((_QWORD *)v11 + 46);
    if ( v30 != (void *)-1LL )
    {
      ZwClose(v30);
      *((_QWORD *)v11 + 46) = -1LL;
    }
    RIMDeleteAllAsyncWorkNotificationItems(v11);
    RIMUnlockExclusive((__int64)(v11 + 352));
    rimRemoveFromObTrackList(v11);
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v11);
    RIMSignalAllDispositionWaiters(v11);
    RIMUnlockExclusive((__int64)v38);
    RIMUnlockExclusive((__int64)v39);
    ObfDereferenceObject(v11);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v31 = 0;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v7);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v31;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      *(_QWORD *)(v33 + 19336),
      4,
      1,
      104,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
