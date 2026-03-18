/*
 * XREFs of DpiMiracastInterfaceChange @ 0x140087EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkFreeUnicodeString @ 0x140194C6C (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x14024BAEC (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024D210 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiGetDevicePropertyDataString @ 0x140411AC4 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x14041357C (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  char v8; // r15
  char v9; // r12
  void *Pool2; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  const UNICODE_STRING *v13; // rdx
  PKEVENT NotificationEvent; // rax
  int v15; // r15d
  const void **v16; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  unsigned __int64 v20; // rdx
  char *v21; // rax
  char *v22; // r9
  unsigned __int16 v23; // ax
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int16 v38; // ax
  void *v39; // rcx
  __int64 v40; // rbx
  __int64 *v41; // rax
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  __m256i EventHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+80h] [rbp-88h]
  _OWORD v45[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v45, 0, 0x88uLL);
  memset(&EventHandle.m256i_u64[1], 0, 24);
  if ( NotificationStructure )
  {
    v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v3 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        EventHandle.m256i_i64[0] = 0LL;
        v44 = 0LL;
        v6 = *(unsigned __int16 *)(v4 + 2) + 792LL;
        LODWORD(DestinationString[1]) = 0;
        DeviceAttachmentBaseRef = 0LL;
        BYTE2(DestinationString[0]) = 0;
        v8 = 0;
        v9 = 0;
        Pool2 = (void *)ExAllocatePool2(64LL, v6, 1953656900LL);
        v11 = (__int64)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 2466;
          return 0LL;
        }
        memset(Pool2, 0, 0x318uLL);
        *(_DWORD *)(v11 + 16) = 1953656900;
        *(_DWORD *)(v11 + 20) = 14;
        *(_DWORD *)(v11 + 420) = -1;
        *(_DWORD *)(v11 + 456) = -1;
        *(_QWORD *)(v11 + 24) = 1LL;
        *(_QWORD *)(v11 + 88) = 0LL;
        *(_DWORD *)(v11 + 32) = 1;
        *(_QWORD *)(v11 + 40) = 0LL;
        *(_DWORD *)(v11 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v11 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v11 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v11);
        v13 = (const UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
        *(_WORD *)(v11 + 144) = 0;
        *(_WORD *)(v11 + 146) = v13->MaximumLength;
        *(_QWORD *)(v11 + 152) = v11 + 792;
        RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 144), v13);
        if ( IoGetDeviceObjectPointer(
               (PUNICODE_STRING)(v11 + 144),
               0x80000000,
               (PFILE_OBJECT *)(v11 + 176),
               (PDEVICE_OBJECT *)(v11 + 184)) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2525;
LABEL_37:
          v24 = *(void **)(v11 + 336);
          if ( v24 )
          {
            ExFreePoolWithTag(v24, 0);
            *(_QWORD *)(v11 + 336) = 0LL;
          }
          v25 = *(void **)(v11 + 344);
          if ( v25 )
          {
            ExFreePoolWithTag(v25, 0);
            *(_QWORD *)(v11 + 344) = 0LL;
          }
          v26 = *(void **)(v11 + 352);
          if ( v26 )
          {
            ExFreePoolWithTag(v26, 0);
            *(_QWORD *)(v11 + 352) = 0LL;
          }
          v27 = *(void **)(v11 + 360);
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            *(_QWORD *)(v11 + 360) = 0LL;
          }
          v28 = *(void **)(v11 + 368);
          if ( v28 )
          {
            ExFreePoolWithTag(v28, 0);
            *(_QWORD *)(v11 + 368) = 0LL;
          }
          if ( v8 )
            ObfDereferenceObject(*(PVOID *)(v11 + 176));
          v29 = *(void **)(v11 + 464);
          if ( v29 )
            ObfDereferenceObject(v29);
          if ( *(_QWORD *)(v11 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v11 + 128));
          if ( !BYTE2(DestinationString[0]) )
            goto LABEL_57;
          KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&EventHandle.m256i_u64[1]);
          v30 = *(_QWORD *)v11;
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
          {
            v31 = *(_QWORD **)(v11 + 8);
            if ( *v31 == v11 )
            {
              *v31 = v30;
              *(_QWORD *)(v30 + 8) = v31;
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&EventHandle.m256i_u64[1]);
LABEL_57:
              ExFreePoolWithTag((PVOID)v11, 0);
LABEL_74:
              if ( DeviceAttachmentBaseRef )
                ObfDereferenceObject(DeviceAttachmentBaseRef);
              if ( v9 )
                ReleaseMiniportListMutex();
              return 0LL;
            }
          }
LABEL_78:
          __fastfail(3u);
        }
        v8 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)&EventHandle);
        *(_QWORD *)(v11 + 464) = NotificationEvent;
        if ( !NotificationEvent )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2548;
          goto LABEL_37;
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose((HANDLE)EventHandle.m256i_i64[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v11 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v11 + 336,
                    (__int64)&DestinationString[1]) >= 0
          || (v15 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     (__int64)&DestinationString[1]) >= 0) )
        {
          v15 = DestinationString[1];
        }
        v16 = (const void **)(v11 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v11 + 344,
                                     (__int64)&DestinationString[1]);
        v18 = DestinationString[1];
        if ( DevicePropertyDataString < 0 )
          v18 = 0;
        v19 = v18 + v15;
        if ( v19 )
        {
          v20 = v19 + 4LL;
          if ( v20 < 0xFFFF )
          {
            v21 = (char *)ExAllocatePool2(64LL, v20, 1953656900LL);
            *(_QWORD *)(v11 + 352) = v21;
            v22 = v21;
            if ( v21 )
            {
              *(_OWORD *)&DestinationString[1] = 0LL;
              if ( v19 == v18 )
              {
                v23 = DestinationString[1];
              }
              else
              {
                memmove(v21, *(const void **)(v11 + 336), v19 - v18);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v19 - v18) >> 1)) = 0;
                RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *(PCWSTR *)(v11 + 352));
                v16 = (const void **)(v11 + 344);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)LOWORD(DestinationString[1]) >> 1)) = 32;
                v22 = *(char **)(v11 + 352);
                v23 = LOWORD(DestinationString[1]) + 2;
                LOWORD(DestinationString[1]) += 2;
              }
              WORD1(DestinationString[1]) = v19 + 4;
              if ( v18 )
              {
                memmove(&v22[2 * ((unsigned __int64)v23 >> 1)], *v16, v18);
                v23 = DestinationString[1];
              }
              *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v18 + v23) >> 1)) = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v11 + 360,
          (__int64)&DestinationString[1]);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v11 + 368,
          (__int64)&DestinationString[1]);
        DestinationString[1] = 0LL;
        if ( (int)DpiGetDeviceInstanceId(DeviceAttachmentBaseRef) < 0 )
        {
          WdLogSingleEntry1(2LL);
          v9 = 0;
          WdLogGlobalForLineNumber = 2731;
LABEL_36:
          v8 = 1;
          goto LABEL_37;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v11 + 160), (PCWSTR)DestinationString[1]);
        if ( (int)DpiMiracastSendSyncUserModeRequest(v11, 2295808LL) >= 0 )
        {
          if ( *((_QWORD *)&v44 + 1) >= 0x88uLL )
          {
            v32 = v45[1];
            *(_OWORD *)(v11 + 204) = v45[0];
            v33 = v45[2];
            *(_OWORD *)(v11 + 220) = v32;
            v34 = v45[3];
            *(_OWORD *)(v11 + 236) = v33;
            v35 = v45[4];
            *(_OWORD *)(v11 + 252) = v34;
            v36 = v45[5];
            *(_OWORD *)(v11 + 268) = v35;
            v37 = v45[6];
            *(_OWORD *)(v11 + 284) = v36;
            *(_OWORD *)(v11 + 300) = v37;
            v38 = v45[8];
            *(_OWORD *)(v11 + 316) = v45[7];
            *(_WORD *)(v11 + 332) = v38;
            v39 = (void *)DWORD1(v45[8]);
            *(_WORD *)(v11 + 332) = 0;
            if ( PsLookupProcessByProcessId(v39, (PEPROCESS *)(v11 + 104)) >= 0 )
            {
              ObfDereferenceObject(*(PVOID *)(v11 + 104));
              AcquireMiniportListMutex();
              v40 = qword_140169280;
              v9 = 1;
              while ( (__int64 *)v40 != &qword_140169280 )
              {
                if ( !RtlCompareUnicodeString(
                        *((PCUNICODE_STRING *)NotificationStructure + 5),
                        (PCUNICODE_STRING)(v40 + 144),
                        0) )
                  goto LABEL_35;
                v40 = *(_QWORD *)v40;
              }
              if ( ZwAllocateLocallyUniqueId((PLUID)(v11 + 96)) >= 0 )
              {
                if ( IoRegisterDeviceInterface(
                       DeviceAttachmentBaseRef,
                       &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                       0LL,
                       (PUNICODE_STRING)(v11 + 128)) >= 0 )
                {
                  KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&EventHandle.m256i_u64[1]);
                  v41 = (__int64 *)qword_140169288;
                  if ( *(__int64 **)qword_140169288 != &qword_140169280 )
                    goto LABEL_78;
                  *(_QWORD *)v11 = &qword_140169280;
                  *(_QWORD *)(v11 + 8) = v41;
                  *v41 = v11;
                  qword_140169288 = v11;
                  BYTE2(DestinationString[0]) = 1;
                  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&EventHandle.m256i_u64[1]);
                  if ( IoRegisterPlugPlayNotification(
                         EventCategoryTargetDeviceChange,
                         0,
                         *(PVOID *)(v11 + 176),
                         (PDRIVER_OBJECT)g_pDriverObject,
                         DpiMiracastTargetDeviceChange,
                         (PVOID)v11,
                         (PVOID *)(v11 + 400)) >= 0 )
                  {
                    IoSetDeviceInterfaceState((PUNICODE_STRING)(v11 + 128), 1u);
                    goto LABEL_74;
                  }
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 2909;
                }
                else
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 2870;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2851;
              }
              goto LABEL_35;
            }
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2798;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 2769;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2759;
        }
        v9 = 0;
LABEL_35:
        DxgkFreeUnicodeString(v11 + 160);
        goto LABEL_36;
      }
    }
  }
  WdLogSingleEntry1(2LL);
  result = 3221225711LL;
  WdLogGlobalForLineNumber = 2427;
  return result;
}
