/*
 * XREFs of NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E694C (NvmeAdapterCreateFabricControllerIoQueues.c)
 *     NvmeAdapterFabricControllerFreeDiscoveryEntries @ 0x1400E84A4 (NvmeAdapterFabricControllerFreeDiscoveryEntries.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400ED198 (NvmeAdapterScheduleFabricNvmeControllerBackgroundWork.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 */

void __fastcall NvmeAdapterNvmeControllerBackgroundWork(PDEVICE_OBJECT DeviceObject, unsigned __int8 *Context)
{
  __int64 v2; // rcx
  __int16 v4; // bp
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int16 v7; // di
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  unsigned int j; // edi
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  char *v15; // rdi
  char *i; // rsi
  _OWORD *v17; // rsi
  char v18; // al
  __int64 v19; // rax
  char v20; // [rsp+68h] [rbp+10h] BYREF
  char v21; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_QWORD *)Context + 17);
  v20 = 0;
  v21 = 0;
  v4 = 0;
  if ( (v2 & 0x400) != 0 )
    goto LABEL_50;
  if ( (v2 & 0x40000000) != 0 )
  {
    LOBYTE(v5) = Context[742];
    v6 = 0;
    if ( (_BYTE)v5 )
    {
      do
      {
        v7 = v4 + 1;
        v8 = *(_QWORD *)(*((_QWORD *)Context + 68) + 8LL * v6);
        if ( *(_BYTE *)(v8 + 3) == 48 && (int)NvmeAdapterSendFabricControllerAsyncEventCommand(Context, v8) < 0 )
          v7 = v4;
        v5 = Context[742];
        ++v6;
        v4 = v7;
      }
      while ( v6 < v5 );
      v2 = *((_QWORD *)Context + 17);
    }
    if ( v4 == (unsigned __int8)v5 )
    {
      v2 &= ~0x40000000uLL;
      *((_QWORD *)Context + 17) = v2;
    }
  }
  if ( (v2 & 0x400) != 0 )
    goto LABEL_50;
  v9 = *((_DWORD *)Context + 143);
  if ( v9 != 1 )
  {
    if ( v9 != 2 )
      goto LABEL_45;
    while ( 1 )
    {
      *((_QWORD *)Context + 17) = v2 & 0xFFFFFFFDFFFFFFFFuLL;
      v13 = NvmeAdapterPerformFabricControllerDiscovery(Context, &v21);
      v14 = *((_QWORD *)Context + 17);
      if ( (v14 & 0x400) != 0 )
        goto LABEL_50;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741267 )
          goto LABEL_42;
      }
      else if ( v21 && (v14 & 0x200000000LL) == 0 )
      {
        v15 = (char *)(Context + 1608);
        for ( i = (char *)*((_QWORD *)Context + 201); i != v15; i = *(char **)i )
          NvmeAdapterProcessFabricControllerDiscoveryEntry(Context, i + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)Context + 14, 1u);
        v17 = Context + 1576;
        NvmeAdapterFabricControllerFreeDiscoveryEntries((_QWORD **)Context + 197);
        if ( *((_QWORD *)Context + 200) )
        {
          *(_QWORD *)(*(_QWORD *)v15 + 8LL) = v17;
          **((_QWORD **)Context + 202) = v17;
          *v17 = *(_OWORD *)v15;
          *((_QWORD *)Context + 202) = v15;
          *(_QWORD *)v15 = v15;
        }
        *((_QWORD *)Context + 196) = *((_QWORD *)Context + 200);
        *((_QWORD *)Context + 195) = *((_QWORD *)Context + 199);
        *((_QWORD *)Context + 200) = 0LL;
        ExReleaseResourceLite((PERESOURCE)Context + 14);
        KeLeaveCriticalRegion();
      }
      v18 = 0;
      if ( _bittest64((const signed __int64 *)Context + 17, 0x21u) )
LABEL_42:
        v18 = 1;
      v2 = *((_QWORD *)Context + 17);
      if ( (v2 & 0x400) != 0 )
        goto LABEL_50;
      if ( !v18 )
        goto LABEL_45;
    }
  }
  if ( (v2 & 0x3000) != 0 )
    NvmeAdapterCreateFabricControllerIoQueues((__int64)Context);
  v10 = *((_QWORD *)Context + 17);
  if ( (v10 & 0x400) != 0 )
    goto LABEL_50;
  if ( (v10 & 0x10000) != 0 && *((_WORD *)Context + 11) )
  {
    NvmeAdapterStartFabricControllerNamespaces(Context);
  }
  else if ( (*((_DWORD *)Context + 268) & 2) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 1u);
    for ( j = 0; j < *((unsigned __int16 *)Context + 12); ++j )
    {
      v12 = *(_DWORD *)(*((_QWORD *)Context + 76) + 4LL * j);
      if ( !v12 )
        break;
      NvmeAdapterFabricControllerUpdateNamespace((__int64)Context, v12, &v20);
      if ( (*((_DWORD *)Context + 34) & 0x400LL) != 0 )
        goto LABEL_50;
      if ( v20 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 16) + 32LL), BusRelations);
    }
    if ( (*((_DWORD *)Context + 268) & 2) == 0 )
      _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 2u);
  }
LABEL_45:
  v19 = *((_QWORD *)Context + 17);
  if ( (v19 & 0x400) == 0
    && ((v19 & 0x40011000) != 0 || *((_DWORD *)Context + 143) == 2 || (*((_DWORD *)Context + 268) & 2) != 0) )
  {
    NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(Context, 5000LL);
    return;
  }
LABEL_50:
  KeSetEvent((PRKEVENT)(Context + 184), 0, 0);
}
