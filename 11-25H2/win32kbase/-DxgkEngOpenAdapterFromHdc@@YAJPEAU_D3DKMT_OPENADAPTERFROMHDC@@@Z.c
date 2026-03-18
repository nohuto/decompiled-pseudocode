/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400867D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086C28 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rdx
  NTSTATUS DeviceObjectPointer; // r14d
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rdi
  int v6; // r8d
  int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // r9
  const WCHAR *v11; // rdx
  struct _GRETHREAD *v12; // rax
  PDEVICE_OBJECT v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  void *p_hAdapter; // rcx
  void *p_AdapterLuid; // rcx
  void *p_VidPnSourceId; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  struct _DEVICE_OBJECT *v28; // rcx
  PFILE_OBJECT FileObject; // [rsp+20h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE Src[24]; // [rsp+38h] [rbp-D0h] BYREF
  HDC v32[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h]
  _QWORD v34[19]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+118h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v32, v2, 0x18uLL);
  DeviceObjectPointer = -1073741811;
  v35 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v34, v32[0]);
  if ( v34[0] )
  {
    v4 = *(_QWORD *)(v34[0] + 48LL);
    if ( v4 )
    {
      v5 = *(struct _ERESOURCE **)(v4 + 48);
      GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v5);
      v6 = *(_DWORD *)(v4 + 40);
      v7 = 1;
      v8 = v6 & 1;
      if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 )
      {
        v9 = *(_QWORD *)(v4 + 2568);
        if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) >> 23) & 1 )
        {
          v35 = *(_DWORD *)(v9 + 248);
          v11 = *(const WCHAR **)(v4 + 2568);
LABEL_11:
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, v11);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          goto LABEL_12;
        }
      }
      if ( (v6 & 1) == 0 )
        goto LABEL_38;
      if ( (v6 & 0x20000) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)(v4 + 2568);
      if ( v8 && *(_QWORD *)(v8 + 296) && (*(_DWORD *)(v8 + 164) & 4) != 0 )
      {
        v35 = *(_DWORD *)(v8 + 248);
        v28 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v4 + 2568) + 296LL);
      }
      else
      {
LABEL_38:
        if ( (v6 & 0x20000) != 0 )
          goto LABEL_12;
        v20 = *(_QWORD *)(v4 + 2568);
        if ( !v20 || (*(_DWORD *)(v20 + 160) & 0x4000000) == 0 )
          goto LABEL_12;
        v21 = *(_QWORD *)(W32GetSessionState(v8) + 88);
        if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v23, v22)
          || !*(_QWORD *)(v21 + 2936)
          || (v24 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() == v24)
          || UserIsCurrentProcessDwm(v26, v25) )
        {
          v7 = 0;
        }
        if ( !v7 )
          goto LABEL_12;
        v35 = *(_DWORD *)(*(_QWORD *)(v4 + 2568) + 248LL);
        v27 = *(_QWORD *)(W32GetSessionState(v35) + 88);
        if ( *(_DWORD *)(v27 + 2920) )
        {
          v11 = (const WCHAR *)(v27 + 2944);
          goto LABEL_11;
        }
        v28 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v4 + 2568) + 296LL);
        if ( !v28 )
        {
LABEL_12:
          if ( v5 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)v5);
            v12 = GreGetCurrentThreadCrossSessionCheck();
            if ( v12 )
            {
              if ( (*((_BYTE *)v12 + 16))-- == 1 )
                *(_QWORD *)v12 &= ~0x100uLL;
            }
            GreReleaseSemaphoreSharedInternal(v5);
          }
          goto LABEL_17;
        }
      }
      DeviceObject = v28;
      ObfReferenceObject(v28);
      DeviceObjectPointer = 0;
      goto LABEL_12;
    }
  }
LABEL_17:
  memset(Src, 0, sizeof(Src));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_28;
  v14 = DeviceObject;
  *(_QWORD *)Src = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14);
  DeviceObjectPointer = (*(__int64 (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 64))(Src);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_28:
    *(_DWORD *)&Src[8] = 0;
    *(_QWORD *)&Src[12] = 0LL;
    v35 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_hAdapter, &Src[8], 4uLL);
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_AdapterLuid, &Src[12], 8uLL);
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_VidPnSourceId, &v35, 4uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v34);
  return (unsigned int)DeviceObjectPointer;
}
