/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x14000ECF0
 * Callers:
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14000EE00 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(
        KSPIN_LOCK *a1,
        int *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        union _ULARGE_INTEGER *a5,
        unsigned int *a6)
{
  unsigned int v10; // edi
  unsigned int i; // r9d
  KSPIN_LOCK v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 252, &LockHandle);
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)a1 + 12) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    v12 = a1[i + 431];
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 3248) )
        break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    if ( v10 >= *((_DWORD *)a1 + 12) )
      return 0LL;
    if ( (unsigned int)VidSchiCheckHeadTimeout((struct _VIDSCH_GLOBAL *)a1, v10, a2, a3, a4, a5) )
      break;
    ++v10;
  }
  if ( a6 )
    *a6 = v10;
  return 1LL;
}
