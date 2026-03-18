/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x140024CE0
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x140054C70 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // rdx
  int v11; // eax
  BOOL v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(v3 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 2016), &LockHandle);
  v9 = *(_DWORD *)(a1 + 192) & 1;
  *a3 = v9;
  if ( v9 )
  {
    v4 = *(_QWORD *)(a1 + 656);
    if ( v4 )
    {
      --*(_DWORD *)(a1 + 788);
      --*(_DWORD *)(v3 + 3008);
      --*(_DWORD *)(v8 + 784);
      v10 = *(_QWORD *)(v4 + 32);
      if ( v10 == a1 + 672 )
      {
        *(_QWORD *)(a1 + 656) = 0LL;
        *(_DWORD *)(a1 + 652) &= 0xFFFFFFF0;
        VidSchiUpdateContextStatus(a1, 1, 19163LL);
      }
      else
      {
        *(_QWORD *)(a1 + 656) = v10 - 32;
        if ( v10 == 32 )
        {
          *(_DWORD *)(a1 + 652) &= 0xFFFFFFF8;
          v19 = *(_DWORD *)(a1 + 652) & 0xFFFFFFF7;
        }
        else
        {
          v11 = *(_DWORD *)(v10 + 16);
          v12 = v11 == 5 || v11 == 4;
          v13 = v12 | *(_DWORD *)(a1 + 652) & 0xFFFFFFFE;
          v14 = 0;
          *(_DWORD *)(a1 + 652) = v13;
          if ( *(_DWORD *)(v10 + 16) == 3 )
            v14 = 2;
          v15 = v13 & 0xFFFFFFFD | v14;
          *(_DWORD *)(a1 + 652) = v15;
          v16 = 0;
          if ( *(_DWORD *)(v10 + 16) == 7 )
            v16 = 4;
          v17 = v15 & 0xFFFFFFFB | v16;
          v18 = 0;
          *(_DWORD *)(a1 + 652) = v17;
          if ( *(_DWORD *)(v10 + 16) == 6 )
            v18 = 8;
          v19 = v17 & 0xFFFFFFF7 | v18;
        }
        *(_DWORD *)(a1 + 652) = v19;
      }
      VidSchiProfilePerformanceTick(5LL, v8, 0LL, 0LL, 0LL, v4, 0LL, 0LL);
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
