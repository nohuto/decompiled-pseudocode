/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000B434 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1400411B4 (-DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  bool v9; // cc
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx

  v1 = *(_QWORD *)(a1 + 1040);
  if ( *(_BYTE *)(v1 + 212) )
    return 1LL;
  v3 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 208), 0, 0) )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 1152) & 0x4000) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 1092) )
        goto LABEL_13;
      v11 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3);
      v12 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3 + 512);
      if ( !*(_BYTE *)(v11 + 29) )
      {
        if ( *(_DWORD *)(v11 + 48) == 6 )
        {
          v14 = *(_QWORD *)(*(unsigned int *)(v11 + 80) + *(_QWORD *)(*(_QWORD *)(v11 + 64) + 192LL));
LABEL_20:
          if ( v14 < v12 )
            return 0LL;
          goto LABEL_21;
        }
        v13 = *(unsigned __int64 **)(v11 + 72);
        if ( *(_BYTE *)(v11 + 30) )
        {
          v14 = *v13;
          goto LABEL_20;
        }
        if ( *(_DWORD *)v13 - (int)v12 < 0 )
          return 0LL;
      }
LABEL_21:
      LODWORD(v3) = v3 + 1;
    }
  }
  v4 = *(_DWORD *)(a1 + 1092);
  if ( v4 )
    v5 = *(_QWORD *)(a1 + 8LL * (v4 - 1));
  else
    v5 = 0LL;
  while ( (unsigned int)v3 < v4 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 172);
      v8 = *(_DWORD *)(a1 + 8LL * (unsigned int)v3 + 524);
      v9 = v8 <= v7;
      if ( v8 == v7 )
      {
        if ( *(_DWORD *)(a1 + 8LL * (unsigned int)v3 + 520) > *(_DWORD *)(v6 + 168) )
          return 0LL;
        v9 = v8 <= v7;
      }
      if ( !v9 )
        return 0LL;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  if ( v5 )
  {
    LOBYTE(v3) = 1;
    VidSchiUpdateLastCompletedPresentTimestamp(v5, v3, 0);
  }
LABEL_13:
  if ( (*(_DWORD *)(a1 + 1152) & 0x8000) != 0 )
  {
    v15 = *(_QWORD *)(v1 + 40);
    if ( *(_BYTE *)(v15 + 64) )
      ADAPTER_RENDER::DdiNotifyFocusPresent(*(ADAPTER_RENDER **)(v15 + 8));
  }
  return 1LL;
}
