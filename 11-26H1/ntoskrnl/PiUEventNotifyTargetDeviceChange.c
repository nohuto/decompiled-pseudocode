/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x14099A54C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409D6560 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1404B4FE4 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *Pool2; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  wchar_t *v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r14
  char v16; // al
  _QWORD *v17; // rsi
  __int64 v19; // rdx
  char v20; // [rsp+80h] [rbp+8h]
  char v21; // [rsp+88h] [rbp+10h]

  Pool2 = 0LL;
  v2 = 0;
  v20 = 0;
  v3 = 0;
  v21 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 96) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v20 = 1;
      v12 = 136LL;
    }
    else
    {
      v12 = 128LL;
    }
    v13 = (wchar_t *)(v12 + a1);
    if ( *(_BYTE *)(a1 + 76) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v14 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v13));
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = v20;
      do
      {
        v17 = v15;
        v15 = (_QWORD *)*v15;
        if ( !v16 || !*((_BYTE *)v17 + 40) )
        {
          if ( wcsicmp(v13, *(const wchar_t **)(v17[3] + 16LL))
            || !(unsigned __int8)PiUEventApplyAdditionalFilters(a1, v17)
            || (v3 = PiUEventNotifyClient(a1, v17), v3 < 0) )
          {
            v16 = v20;
          }
          else
          {
            v16 = v20;
            if ( Pool2 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v21 = 1;
                continue;
              }
              v19 = v4++;
              Pool2[v19] = *((_DWORD *)v17 + 12);
            }
          }
        }
        v2 = v21;
      }
      while ( v15 != v14 );
    }
    if ( Pool2 && v4 > 1 )
    {
      if ( v2 )
      {
        memset_0(Pool2 + 1, 0, 0xFFCuLL);
        *Pool2 = -1;
      }
      else
      {
        *Pool2 = v4 - 1;
      }
      ZwUpdateWnfStateData((__int64)&WNF_PNPB_AWAITING_RESPONSE, (__int64)Pool2);
    }
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x59706E50u);
  }
  return (unsigned int)v3;
}
