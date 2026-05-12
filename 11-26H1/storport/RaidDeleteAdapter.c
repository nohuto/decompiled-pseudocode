/*
 * XREFs of RaidDeleteAdapter @ 0x1400478CC
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidDeleteDeferredQueue @ 0x140047EB4 (RaidDeleteDeferredQueue.c)
 *     PortFreeRegistryBuffer @ 0x14005B9D4 (PortFreeRegistryBuffer.c)
 *     RaDriverDeleteDevice @ 0x14005BDB8 (RaDriverDeleteDevice.c)
 *     StorFreeEventNotificationResources @ 0x14005C204 (StorFreeEventNotificationResources.c)
 *     StorDeleteDictionary @ 0x14005CA34 (StorDeleteDictionary.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorDlrmCleanup @ 0x140183C7C (StorDlrmCleanup.c)
 *     RaidDeleteResourceList @ 0x140183F14 (RaidDeleteResourceList.c)
 *     RaDeleteBus @ 0x140183F6C (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x140187BE0 (RaidDeleteDma.c)
 *     StorFreeContiguousMemory @ 0x140188BF4 (StorFreeContiguousMemory.c)
 *     RaFreeUniqueTagging @ 0x1401AF750 (RaFreeUniqueTagging.c)
 *     PortFreeDriverParameters @ 0x1401B0EA4 (PortFreeDriverParameters.c)
 *     RaDeleteMiniport @ 0x1401B9810 (RaDeleteMiniport.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  struct _UNICODE_STRING *v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v13; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  void *v15; // rcx
  KIRQL v16; // bl
  void *v17; // rcx
  _DWORD *v18; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  PSLIST_ENTRY i; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 6064);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 6064) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 6224);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 48);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 48LL) = 0LL;
    }
    v5 = *(void **)(*(_QWORD *)(a1 + 6224) + 40LL);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 40LL) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 6224);
    v7 = *(void **)(v6 + 112);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x464D6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 112LL) = 0LL;
      v6 = *(_QWORD *)(a1 + 6224);
    }
    if ( (unsigned __int8)StorIsMFNDSupported(a1, v6) )
      RtlFreeUnicodeString(v8 + 1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6224), 0x464D6152u);
    *(_QWORD *)(a1 + 6224) = 0LL;
  }
  v9 = *(void **)(a1 + 6216);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x464D6152u);
    *(_QWORD *)(a1 + 6216) = 0LL;
  }
  StorDlrmCleanup(a1);
  StorFreeEventNotificationResources(*(PVOID *)(a1 + 6272));
  v10 = *(void **)(a1 + 6208);
  *(_QWORD *)(a1 + 6272) = 0LL;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x45526152u);
    *(_QWORD *)(a1 + 6208) = 0LL;
  }
  PortFreeRegistryBuffer(a1 + 2072);
  *(_DWORD *)(a1 + 2128) = 0;
  RaidDeleteResourceList(a1 + 360);
  LOBYTE(v11) = *(_BYTE *)(a1 + 4434) == 0;
  RaDeleteMiniport(a1 + 376, v11);
  if ( *(_DWORD *)(a1 + 944) )
    StorFreeContiguousMemory(a1 + 896);
  v12 = *(_QWORD *)(a1 + 4616);
  if ( v12 )
  {
    StorFreeContiguousIoResources(a1, v12);
    *(_QWORD *)(a1 + 4616) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4434) )
    RaidDeleteDma(a1 + 896);
  RaDeleteBus(a1 + 792);
  RaidDeleteDeferredQueue(a1 + 1072);
  RaidDeleteDeferredQueue(a1 + 1456);
  if ( *(_QWORD *)(a1 + 2064) )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 2064) = 0LL;
  }
  v13 = *(void **)(a1 + 4440);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x52446152u);
    *(_QWORD *)(a1 + 4440) = 0LL;
  }
  if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
    RaFreeUniqueTagging(a1);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2040));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5608));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5792));
  RaDriverDeleteDevice(a1);
  v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v14 )
  {
    ExFreeCacheAwareRundownProtection(v14);
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  v15 = *(void **)(a1 + 4424);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x72446152u);
    *(_QWORD *)(a1 + 4424) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4724) & 1) != 0 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v33, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v16);
    v17 = *(void **)(a1 + 4744);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x72446152u);
      *(_QWORD *)(a1 + 4744) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4728) > 1 && *(_QWORD *)(a1 + 4736) )
  {
    v18 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v20 = 0;
    v21 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4736) + ((unsigned __int64)v20 << 6)));
              i;
              i = i->Next )
        {
          v18 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v18[5] )
          break;
        ++v20;
      }
      while ( v20 < v21 );
      ExFreePoolWithTag(v18, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4736), 0x54436152u);
    *(_QWORD *)(a1 + 4736) = 0LL;
  }
  v23 = *(void **)(a1 + 4792);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x54456152u);
    *(_QWORD *)(a1 + 4792) = 0LL;
  }
  v24 = *(void **)(a1 + 4944);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x4D566152u);
    *(_QWORD *)(a1 + 4944) = 0LL;
  }
  StorDeleteDictionary(a1 + 168);
  v25 = *(void **)(a1 + 48);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x53446152u);
  v26 = *(void **)(a1 + 5448);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0x45436152u);
    *(_QWORD *)(a1 + 5448) = 0LL;
  }
  v27 = *(void **)(a1 + 5144);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0x54456152u);
    *(_QWORD *)(a1 + 5144) = 0LL;
  }
  v28 = *(void **)(a1 + 6120);
  *(_DWORD *)(a1 + 4992) = -1;
  *(_DWORD *)(a1 + 4996) = 0;
  *(_QWORD *)(a1 + 5000) = 0LL;
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0x43546152u);
    *(_QWORD *)(a1 + 6120) = 0LL;
  }
  v29 = *(void **)(a1 + 6128);
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0x43546152u);
    *(_QWORD *)(a1 + 6128) = 0LL;
  }
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v30 = *(void **)(a1 + 5680);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0x72436152u);
      *(_QWORD *)(a1 + 5680) = 0LL;
    }
    v31 = *(void **)(a1 + 5688);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0x72436152u);
      *(_QWORD *)(a1 + 5688) = 0LL;
    }
  }
  v32 = *(void **)(a1 + 6264);
  if ( v32 )
  {
    IoUnregisterPlugPlayNotificationEx(v32);
    *(_QWORD *)(a1 + 6264) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
