/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1400197B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14001A6B0 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        KSPIN_LOCK *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4)
{
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  void (*v13)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v15[5]; // [rsp+70h] [rbp-58h] BYREF

  if ( a4 )
  {
    if ( a2 < *((_DWORD *)a1 + 12) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      memset(v15, 0, sizeof(v15));
      KeAcquireInStackQueuedSpinLock(a1 + 252, &LockHandle);
      VidSchQueryLastCompletedPresentIdDWMInternal(
        (struct _VIDSCH_GLOBAL *)a1,
        0LL,
        a2,
        a3,
        (struct _D3DKMT_PRESENT_STATS_DWM2 *)v15);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = 0LL;
      v9 = v15[1];
      *a4 = v15[0];
      v10 = v15[2];
      a4[1] = v9;
      v11 = v15[3];
      a4[2] = v10;
      v12 = v15[4];
      a4[3] = v11;
      a4[4] = v12;
      return result;
    }
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 8378;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v13 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 8367;
    v13(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
