/*
 * XREFs of ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x14003E75C
 * Callers:
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x14003E5D0 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14001D600 (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void __fastcall VidSchiSynchronouslyUpdateFlipQueueLogs(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int *const a3,
        int a4)
{
  __int64 v8; // r14
  unsigned int i; // ebx
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _VIDSCH_GLOBAL *v14; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-58h]
  unsigned int v16; // [rsp+44h] [rbp-54h]
  unsigned int v17[2]; // [rsp+48h] [rbp-50h]

  v8 = *((_QWORD *)a1 + a2 + 431);
  if ( *(_QWORD *)(v8 + 32) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 40); ++i )
    {
      if ( i == a4 || a4 == -1 )
      {
        v10 = 304LL * i;
        if ( a4 != -1 || *(_DWORD *)(v8 + v10 + 200) )
        {
          v11 = *((unsigned int *)a1 + 10);
          v12 = *((_QWORD *)a1 + 4);
          *(_QWORD *)v17 = 0LL;
          v14 = a1;
          v15 = a2;
          v16 = i;
          v13[0] = 0;
          DpSynchronizeExecution(v12, VidSchiUpdateFlipQueueLogAtISR, &v14, v11, v13);
          if ( *(_DWORD *)(v8 + v10 + 376) != v17[0] )
            VidSchiCommitFlipQueueLogUpdate((LARGE_INTEGER *)(v10 + 152 + v8), i, v17[0], a3, 0);
        }
      }
    }
  }
}
