/*
 * XREFs of ?MyServiceTerminate@@YAXXZ @ 0x1801531E0
 * Callers:
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x1801527C0 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 * Callees:
 *     McGenEventUnregister_EtwEventUnregister @ 0x1801534B0 (McGenEventUnregister_EtwEventUnregister.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void MyServiceTerminate(void)
{
  unsigned int v0; // edi
  struct IAudioService *v1; // rcx
  HANDLE v2; // rax
  struct CAudioThreadPool *v3; // rbx
  struct _TP_CLEANUP_GROUP *v4; // rcx

  v0 = (unsigned int)CoInitializeEx(0LL, 0) >> 31;
  (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 32LL))(g_AudioService);
  v1 = g_AudioService;
  if ( *((_QWORD *)g_AudioService + 1) )
  {
    CM_Unregister_Notification(*((_QWORD *)g_AudioService + 1));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
  }
  if ( *((_QWORD *)v1 + 2) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 2));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 2) = 0LL;
  }
  if ( *((_QWORD *)v1 + 3) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 3));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 3) = 0LL;
  }
  if ( *((_QWORD *)v1 + 5) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 5));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 5) = 0LL;
  }
  if ( *((_QWORD *)v1 + 4) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 4));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 4) = 0LL;
  }
  if ( *((_QWORD *)v1 + 6) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 6));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 6) = 0LL;
  }
  v2 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v2 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v2, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
    v1 = g_AudioService;
  }
  (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)v1 + 40LL))(v1);
  if ( g_DeviceEnumerator )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->Release)(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
  CleanupDeviceAPI();
  v3 = ThreadPool;
  if ( ThreadPool )
  {
    v4 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
    if ( v4 )
    {
      CloseThreadpoolCleanupGroupMembers(v4, 0, 0LL);
      CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v3 + 10));
      *((_QWORD *)v3 + 10) = 0LL;
      v3 = ThreadPool;
    }
    if ( v3 )
      (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))v3)(v3, 1LL);
  }
  ThreadPool = 0LL;
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_AudioService )
    (*(void (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService, 1LL);
  g_AudioService = 0LL;
  McGenEventUnregister_EtwEventUnregister();
  if ( !(_BYTE)v0 )
    CoUninitialize();
}
