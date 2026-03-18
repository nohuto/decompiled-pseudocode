/*
 * XREFs of VidSchiControlVSyncThread @ 0x140039A20
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x14001D994 (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140039B8C (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v2; // rbp
  char v3; // cl
  signed __int32 v4; // eax
  int v5; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)a1 + 2500) )
  {
    VidSchiControlIndependentVidPnVSyncThread(a1);
  }
  else
  {
    v2 = (struct _ERESOURCE *)((char *)a1 + 1360);
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1360), 1u);
    v3 = *((_BYTE *)a1 + 2096);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 640, 0, 0);
    if ( v3
      && !v4
      && !*((_DWORD *)a1 + 546)
      && !*(_DWORD *)(*((_QWORD *)a1 + 2) + 3192LL)
      && !*((_DWORD *)a1 + 201)
      && !*((_DWORD *)a1 + 219)
      && !*((_DWORD *)a1 + 547) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v5 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
      if ( *((_BYTE *)a1 + 67) )
      {
        v5 = (unsigned __int8)VidSchiVSyncDisabledOnAllPlanes(a1, *((struct _VIDSCH_PRESENT_INFO **)a1 + 431), -1);
      }
      else if ( *((_DWORD *)a1 + 656) >= *((_DWORD *)a1 + 673) )
      {
        *((_DWORD *)a1 + 656) = -1;
        v5 = 1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v5 )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, 4294967293LL);
        *((_BYTE *)a1 + 2501) = 1;
      }
    }
    ExReleaseResourceLite(v2);
    _InterlockedExchange((volatile __int32 *)a1 + 638, 0);
  }
}
