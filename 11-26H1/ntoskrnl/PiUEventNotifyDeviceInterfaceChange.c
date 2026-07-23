/*
 * XREFs of PiUEventNotifyDeviceInterfaceChange @ 0x1409A6AA8
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1409A7450 (PiUEventProcessEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1404C2B68 (PiUEventHashGuidIntoBucket.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rax
  _QWORD *v4; // r13
  _QWORD *v5; // r15
  unsigned int v6; // esi
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // rax
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 )
    goto LABEL_4;
  v12 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v12 )
  {
LABEL_4:
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = (_QWORD *)(a1 + 128);
    v5 = v13;
    v13[1] = &unk_140F848D0;
    v6 = 0;
    v13[0] = (char *)&PiUEventDevInterfaceClientList
           + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 128));
    do
    {
      v7 = (_QWORD **)*v5;
      v8 = *(_QWORD **)*v5;
      while ( v8 != v7 )
      {
        v9 = (__int64)v8;
        v8 = (_QWORD *)*v8;
        if ( !v6 )
        {
          v10 = *v4 - *(_QWORD *)(v9 + 24);
          if ( *v4 == *(_QWORD *)(v9 + 24) )
            v10 = *(_QWORD *)(a1 + 136) - *(_QWORD *)(v9 + 32);
          if ( v10 )
            continue;
        }
        if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v9) )
          v1 = PiUEventNotifyClient(a1, v9);
      }
      ++v6;
      ++v5;
    }
    while ( v6 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
