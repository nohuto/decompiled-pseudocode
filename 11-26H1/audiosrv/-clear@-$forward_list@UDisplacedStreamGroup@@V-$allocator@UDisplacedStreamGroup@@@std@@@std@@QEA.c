/*
 * XREFs of ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800E8380
 * Callers:
 *     ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800E0338 (--1-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800E472C (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800E4E24 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800E53B0 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800E5D20 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E65D8 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F7408 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1DisplacedStreamGroup@@QEAA@XZ @ 0x1800E04EC (--1DisplacedStreamGroup@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<DisplacedStreamGroup>::clear(void **a1)
{
  SaDeviceParams **v1; // rdi
  SaDeviceParams *v2; // rbx

  v1 = (SaDeviceParams **)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = *v1;
      DisplacedStreamGroup::~DisplacedStreamGroup(v1 + 1);
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x30);
      v1 = (SaDeviceParams **)v2;
    }
    while ( v2 );
  }
}
