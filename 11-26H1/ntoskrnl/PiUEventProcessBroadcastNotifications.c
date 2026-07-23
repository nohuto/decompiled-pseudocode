/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x1409A8BF4
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409A7450 (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140A9BCD0 (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140B058DC (PiUEventQueueBroadcastEventEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rsi
  _WORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rcx
  __int64 Pool2; // rax
  _DWORD *v30; // r14
  int ObjectProperty; // eax
  _DWORD *v32; // r14
  int v33; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v35; // [rsp+A8h] [rbp+38h] BYREF
  int v36; // [rsp+B0h] [rbp+40h] BYREF
  int v37; // [rsp+B8h] [rbp+48h] BYREF

  v2 = 0;
  v36 = 0;
  DestinationString = 0LL;
  v35 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return v2;
  v3 = *(_DWORD *)(a1 + 96);
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 24) = -1;
    v28 = Pool2;
    *(_DWORD *)(Pool2 + 20) = 2;
    *(_OWORD *)(Pool2 + 28) = *(_OWORD *)(a1 + 80);
    goto LABEL_54;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v23 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( !v23 )
      v23 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( !v23 )
      goto LABEL_41;
    v25 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
    if ( !v25 )
      v25 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
    if ( !v25 )
    {
LABEL_41:
      v24 = ExAllocatePool2(0x100uLL);
      v22 = v24;
      if ( !v24 )
        return (unsigned int)-1073741670;
      v30 = (_DWORD *)(v24 + 24);
      *(_DWORD *)(v24 + 20) = 0;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1 + 128,
                         1,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         &v35,
                         v24 + 24,
                         4u,
                         (__int64)&v36,
                         0);
      v2 = ObjectProperty;
      if ( ObjectProperty >= 0 && v36 == 4 )
        goto LABEL_53;
      *v30 = -1;
      goto LABEL_63;
    }
    v26 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    v27 = v26 == 0;
LABEL_49:
    if ( !v27 )
      return v2;
    goto LABEL_41;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v17 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v17 )
      v17 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v17 )
    {
      v18 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v18 )
        v18 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( v18 )
        return v2;
    }
    v19 = *(_QWORD *)(a1 + 128) - *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1;
    if ( !v19 )
      v19 = *(_QWORD *)(a1 + 136) - *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4;
    if ( !v19 )
    {
      v22 = ExAllocatePool2(0x100uLL);
      if ( !v22 )
        return (unsigned int)-1073741670;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 144));
      *(_DWORD *)(v22 + 20) = 1;
      *(_DWORD *)(v22 + 24) = IopGetSessionIdFromSymbolicName(&DestinationString);
      goto LABEL_53;
    }
    v20 = *(_QWORD *)(a1 + 128) - *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)(a1 + 136) - *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4;
    if ( v20 )
    {
      v21 = *(_QWORD *)(a1 + 128) - *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1;
      if ( !v21 )
        v21 = *(_QWORD *)(a1 + 136) - *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4;
      if ( v21 )
        return v2;
    }
    v22 = ExAllocatePool2(0x100uLL);
    if ( !v22 )
      return (unsigned int)-1073741670;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 144));
    *(_DWORD *)(v22 + 20) = 3;
    *(_OWORD *)(v22 + 28) = *(_OWORD *)(a1 + 80);
    v37 = 400;
    v33 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            a1 + 144,
            3,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_InstanceId,
            &v35,
            v22 + 44,
            0x190u,
            (__int64)&v37,
            0);
    v2 = v33;
    if ( v33 < 0 || v35 != 18 )
    {
      ExFreePoolWithTag((PVOID)v22, 0x59706E50u);
      return v2;
    }
    v37 = 4;
    v2 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           v22 + 44,
           1,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_SessionId,
           &v35,
           v22 + 24,
           4u,
           (__int64)&v37,
           0);
    if ( (v2 & 0x80000000) == 0 && v35 == 7 )
    {
LABEL_53:
      v28 = v22;
      goto LABEL_54;
    }
    *(_DWORD *)(v22 + 24) = -1;
LABEL_63:
    v2 = 0;
    goto LABEL_53;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v27 = v6 == 1;
    goto LABEL_49;
  }
  v7 = a1 + 136;
  if ( a1 == -136 )
    return (unsigned int)-1073741811;
  v8 = (_WORD *)(a1 + 136);
  v9 = 200LL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  v2 = v9 == 0 ? 0xC000000D : 0;
  v10 = (200 - v9) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
  if ( v9 && v10 )
  {
    v11 = 2 * v10 + 82;
    if ( v11 < 0x50 || v11 + 7 < v11 )
      return (unsigned int)-1073741675;
    v2 = 0;
    v13 = (v11 + 7) & 0xFFFFFFF8;
    v14 = *(_QWORD *)(v13 + a1 + 84) - *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)(v13 + a1 + 92) - *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4;
    if ( !v14 )
    {
      v15 = ExAllocatePool2(0x100uLL);
      v16 = v15;
      if ( !v15 )
        return (unsigned int)-1073741670;
      v32 = (_DWORD *)(v15 + 24);
      *(_DWORD *)(v15 + 20) = 1;
      v2 = PnpGetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             v7,
             1,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_SessionId,
             &v35,
             v15 + 24,
             4u,
             (__int64)&v36,
             0);
      if ( (v2 & 0x80000000) != 0 || v36 != 4 )
      {
        v2 = 0;
        *v32 = -1;
      }
      v28 = v16;
LABEL_54:
      PiUEventQueueBroadcastEventEntry(v28);
    }
  }
  return v2;
}
