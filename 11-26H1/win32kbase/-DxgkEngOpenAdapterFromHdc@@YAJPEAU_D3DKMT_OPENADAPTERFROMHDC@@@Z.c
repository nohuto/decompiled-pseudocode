/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400C6780
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x1400C6BC0 (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *Src)
{
  NTSTATUS DeviceObjectPointer; // r14d
  __int64 v3; // rdx
  PVOID v4; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // rdi
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // eax
  const WCHAR *v12; // rdx
  struct _GRETHREAD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  PVOID v23; // [rsp+30h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE Srca[24]; // [rsp+48h] [rbp-D0h] BYREF
  HDC v26[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-A8h]
  _QWORD v28[19]; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+130h] [rbp+18h] BYREF
  PVOID Object; // [rsp+138h] [rbp+20h] BYREF

  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  RtlCopyFromUser(v26, Src, 0x18uLL);
  DeviceObjectPointer = -1073741811;
  v29 = 0;
  v23 = 0LL;
  Object = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v28, v26[0]);
  if ( !v28[0] )
    goto LABEL_2;
  v7 = *(_QWORD *)(v28[0] + 48LL);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(struct _ERESOURCE **)(v7 + 48);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<8>();
  v10 = *(_DWORD *)(v7 + 40);
  v3 = 0x20000LL;
  if ( (v10 & 1) != 0 && (v10 & 0x20000) == 0 )
  {
    v9 = *(_QWORD *)(v7 + 2568);
    if ( !v9 || v9 == -4 )
      v11 = 0;
    else
      v11 = (*(_DWORD *)(v9 + 160) >> 23) & 1;
    if ( v11 )
    {
      v29 = *(_DWORD *)(v9 + 248);
      v12 = *(const WCHAR **)(v7 + 2568);
LABEL_15:
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v12);
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              &DestinationString,
                              0,
                              (PFILE_OBJECT *)&v23,
                              (PDEVICE_OBJECT *)&Object);
      goto LABEL_16;
    }
  }
  if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
  {
    if ( (v10 & 0x20000) != 0 )
      goto LABEL_16;
    v9 = *(_QWORD *)(v7 + 2568);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 296) && (*(_DWORD *)(v9 + 164) & 4) != 0 )
      {
        v29 = *(_DWORD *)(v9 + 248);
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 2568) + 296LL);
LABEL_38:
        Object = (PVOID)v9;
        ObfReferenceObject((PVOID)v9);
        DeviceObjectPointer = 0;
        goto LABEL_16;
      }
    }
  }
  if ( (v10 & 0x20000) == 0 )
  {
    v15 = *(_QWORD *)(v7 + 2568);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 160) & 0x4000000) != 0 )
      {
        v16 = *(_QWORD *)(W32GetSessionState(v9) + 88);
        if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(v18, v17, v19, v20) )
        {
          if ( *(_QWORD *)(v16 + 3016) )
          {
            v21 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
            if ( PsGetCurrentProcess(v22) != v21 && !UserIsCurrentProcessDwm(v9, v3, v10) )
            {
              v29 = *(_DWORD *)(*(_QWORD *)(v7 + 2568) + 248LL);
              v3 = *(_QWORD *)(W32GetSessionState(v29) + 88);
              if ( *(_DWORD *)(v3 + 3000) )
              {
                v12 = (const WCHAR *)(v3 + 3024);
                goto LABEL_15;
              }
              v9 = *(_QWORD *)(*(_QWORD *)(v7 + 2568) + 296LL);
              if ( v9 )
                goto LABEL_38;
            }
          }
        }
      }
    }
  }
LABEL_16:
  if ( v8 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v9, (unsigned int)&LockRelease, v10, (_DWORD)v8, (__int64)L"DevLock");
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      if ( (*((_BYTE *)v13 + 16))-- == 1 )
        *(_QWORD *)v13 &= ~0x100uLL;
    }
    GreReleaseSemaphoreSharedInternal(v8);
  }
LABEL_2:
  memset(Srca, 0, sizeof(Srca));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_22;
  v4 = Object;
  *(_QWORD *)Srca = Object;
  if ( v23 )
  {
    ObfReferenceObject(Object);
    ObfDereferenceObject(v23);
    v23 = 0LL;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4, v3);
  DeviceObjectPointer = (*(__int64 (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 64))(Srca);
  ObfDereferenceObject(Object);
  Object = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_22:
    *(_DWORD *)&Srca[8] = 0;
    *(_QWORD *)&Srca[12] = 0LL;
    v29 = 0;
  }
  RtlCopyToUser(&Src->hAdapter, &Srca[8], 4uLL);
  RtlCopyToUser(&Src->AdapterLuid, &Srca[12], 8uLL);
  RtlCopyToUser(&Src->VidPnSourceId, &v29, 4uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v28);
  return (unsigned int)DeviceObjectPointer;
}
