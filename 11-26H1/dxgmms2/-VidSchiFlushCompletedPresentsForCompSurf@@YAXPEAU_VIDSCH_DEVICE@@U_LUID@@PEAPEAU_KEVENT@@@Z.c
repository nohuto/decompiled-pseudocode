/*
 * XREFs of ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005A010
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140040840 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x140041204 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 */

void __fastcall VidSchiFlushCompletedPresentsForCompSurf(
        struct _VIDSCH_DEVICE *a1,
        struct _LUID a2,
        struct _KEVENT **a3)
{
  __int64 v3; // rdi
  DWORD LowPart; // ebx
  LONG HighPart; // r11d
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rdx
  int v10; // eax
  _BYTE v11[4]; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-15h]
  unsigned int v13; // [rsp+38h] [rbp-11h]
  __int64 v14; // [rsp+40h] [rbp-9h]
  struct _KEVENT *v15; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp+7h] BYREF
  char v17; // [rsp+60h] [rbp+17h]
  int v18; // [rsp+64h] [rbp+1Bh]
  _BYTE v19[56]; // [rsp+68h] [rbp+1Fh] BYREF
  bool v20; // [rsp+B0h] [rbp+67h] BYREF
  struct _LUID v21; // [rsp+B8h] [rbp+6Fh]

  v21 = a2;
  v3 = *((_QWORD *)a1 + 5);
  LowPart = a2.LowPart;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v19, (unsigned __int64 *)(v3 + 2016), 1, 0);
  HighPart = v21.HighPart;
  v7 = 0;
  v8 = 0LL;
  while ( v7 <= *(_DWORD *)(v3 + 3760) )
  {
    v9 = v8 + *(_QWORD *)(v3 + 3576);
    if ( *(_DWORD *)v9 == LowPart && *(_DWORD *)(v9 + 4) == HighPart )
    {
      v10 = *(_DWORD *)(v9 + 112);
      if ( v10 == 2 || v10 == 1 )
      {
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
          (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v11,
          (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v9);
        if ( *(_QWORD *)(*(_QWORD *)(v3 + 8LL * v12 + 3448) + 8LL * *(unsigned int *)(v14 + 4LL * v13) + 40) )
        {
          v15 = (struct _KEVENT *)v3;
          v17 = 0;
          v16[1] = v16;
          v18 = 2;
          v16[0] = v16;
          v20 = 0;
          VidSchiObserveHwFlipQueueUpdates(
            (struct HwQueueStagingList *)&v15,
            (struct _VIDSCH_GLOBAL *)v3,
            v12,
            a3,
            &v20);
          HwQueueStagingList::~HwQueueStagingList(&v15);
          break;
        }
      }
    }
    ++v7;
    v8 += 160LL;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v19);
}
