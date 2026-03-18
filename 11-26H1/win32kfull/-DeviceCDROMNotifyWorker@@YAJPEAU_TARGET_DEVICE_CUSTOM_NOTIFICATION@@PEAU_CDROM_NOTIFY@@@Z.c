/*
 * XREFs of ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14029F8E8 (W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 *     W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x14029FA4C (W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F790C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F79BC (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ShowAutorunCursor @ 0x14029A5E0 (ShowAutorunCursor.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall DeviceCDROMNotifyWorker(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION *a1, struct _CDROM_NOTIFY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 UserSessionState; // rbp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int128 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _CDROM_NOTIFY **v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v34[256]; // [rsp+20h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v34);
  if ( IsRemoteConnection(v5, v4) )
    goto LABEL_29;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_IO_MEDIA_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_IO_MEDIA_ARRIVAL.Data4;
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_10;
  }
  v12 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_IO_MEDIA_REMOVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_IO_MEDIA_REMOVAL.Data4;
  if ( !v12 )
  {
    v11 = 2;
LABEL_10:
    *((_DWORD *)a2 + 8) = v11;
    v13 = (_QWORD *)Win32AllocPoolNonPagedZInit(*((unsigned int *)a2 + 4), 1886417749LL);
    v14 = v13;
    if ( v13 )
    {
      memmove(v13, a2, *((unsigned int *)a2 + 4));
      v17 = W32GetUserSessionState(v16, v15);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v17 + 69920));
      v18 = UserSessionState + 69896;
      v19 = (_QWORD *)(UserSessionState + 69912);
      v20 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v21 = v20 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v22 = *((_QWORD *)&v21 + 1);
      if ( *(_QWORD *)v18 != v18 && *((_QWORD *)&v21 + 1) - *v19 > 0x1388uLL )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 345LL);
      *v19 = v22;
      *(_QWORD *)&v21 = *(_QWORD *)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == v18 )
      {
        *v14 = v21;
        v14[1] = v18;
        *(_QWORD *)(v21 + 8) = v14;
        *(_QWORD *)v18 = v14;
        v23 = W32GetUserSessionState(v20, *((_QWORD *)&v21 + 1));
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v23 + 69920));
        KeSetEvent(*(PRKEVENT *)(UserSessionState + 69928), 1, 0);
        goto LABEL_29;
      }
LABEL_24:
      __fastfail(3u);
    }
    goto LABEL_29;
  }
  v24 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v24 )
    v24 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v24 )
  {
    v25 = W32GetUserSessionState(v10, v8);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v25 + 69920));
    if ( !*(_QWORD *)(UserSessionState + 69872) )
    {
      v28 = W32GetUserSessionState(v27, v26);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v28 + 69920));
      goto LABEL_29;
    }
    v29 = *(_QWORD *)a2;
    if ( *(struct _CDROM_NOTIFY **)(*(_QWORD *)a2 + 8LL) == a2 )
    {
      v30 = (struct _CDROM_NOTIFY **)*((_QWORD *)a2 + 1);
      if ( *v30 == a2 )
      {
        *v30 = (struct _CDROM_NOTIFY *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        v31 = W32GetUserSessionState(v29, v26);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v31 + 69920));
        IoUnregisterPlugPlayNotification(*((PVOID *)a2 + 3));
        Win32FreePool(a2);
        goto LABEL_29;
      }
    }
    goto LABEL_24;
  }
  v32 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_IO_DEVICE_BECOMING_READY.Data1;
  if ( !v32 )
    v32 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_IO_DEVICE_BECOMING_READY.Data4;
  if ( !v32 )
    ShowAutorunCursor(10 * a1[1].Event.Data1);
LABEL_29:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v34);
  return 0LL;
}
