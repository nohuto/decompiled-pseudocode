/*
 * XREFs of ?DeviceClassCDROMNotifyWorker@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@@Z @ 0x14029FC08
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029F99C (W32AttachToProcessAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 *     W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___ @ 0x14029FB14 (W32AttachToSessionAndExecute__lambda_adff334027c49673f190de87ea497d6e___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall DeviceClassCDROMNotifyWorker(struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *a1)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rax
  _QWORD *Context; // rbx
  unsigned int Length; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp+8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  v2 = *(_QWORD *)&a1->Event.Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)a1->Event.Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 && IoGetDeviceObjectPointer(a1->SymbolicLinkName, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v3 = a1->SymbolicLinkName->Length + 48;
    v4 = Win32AllocPoolZInit(v3, 1886417749LL);
    Context = (_QWORD *)v4;
    if ( v4 )
    {
      *(_DWORD *)(v4 + 16) = v3;
      Length = a1->SymbolicLinkName->Length;
      *(_WORD *)(v4 + 40) = Length;
      memmove((void *)(v4 + 42), a1->SymbolicLinkName->Buffer, Length);
      *((_DWORD *)Context + 9) = W32GetCurrentWin32kSessionId(v7);
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             FileObject,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceCDROMNotify,
             Context,
             (PVOID *)Context + 3) < 0 )
      {
        Win32FreePool(Context);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v9, v8);
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 69920));
        v13 = W32GetUserSessionState(v12, v11) + 69880;
        v15 = *(_QWORD *)v13;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
          __fastfail(3u);
        *Context = v15;
        Context[1] = v13;
        *(_QWORD *)(v15 + 8) = Context;
        *(_QWORD *)v13 = Context;
        v16 = W32GetUserSessionState(v14, v15);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v16 + 69920));
      }
    }
    ObfDereferenceObject(FileObject);
  }
  return 0LL;
}
