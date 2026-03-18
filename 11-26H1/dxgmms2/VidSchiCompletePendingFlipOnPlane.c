/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x140003348
 * Callers:
 *     VidSchiCompletePendingFlip @ 0x1400036D8 (VidSchiCompletePendingFlip.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1400039F8 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx
  int v14; // eax
  __int64 v15; // r9
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 80) )
    {
      v9 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 3448) + 304LL * *(unsigned int *)(a4 + 84) + 188);
      if ( (int)v9 > -1 )
      {
        v10 = *(_QWORD *)(a2 + 3576) + 160 * v9;
        if ( v10 )
        {
          v14 = *(_DWORD *)(v10 + 112);
          if ( v14 == 2 || v14 == 1 )
          {
            v15 = *(_QWORD *)(v10 + 8);
            v17 = 0;
            v16[0] = 0LL;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD, _BYTE, char *, _QWORD *))VidSchExitIndependentFlipInternal)(
              a1,
              a2,
              v10,
              v15,
              0,
              0,
              &v17,
              v16);
          }
        }
      }
    }
    if ( *(_BYTE *)(a2 + 67) )
    {
      v12 = *(_DWORD *)(a4 + 76);
      v11 = ((_BYTE)v12 + 1) & 0x3F;
    }
    else
    {
      v11 = 0;
      v12 = 63;
    }
    VidSchiCompleteFlipEntry(a1, a2, a3, a4, v11, v12, a5, 0LL);
  }
  return 0LL;
}
