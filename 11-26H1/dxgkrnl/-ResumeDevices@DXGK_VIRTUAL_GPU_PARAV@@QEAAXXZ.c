/*
 * XREFs of ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x14018C034
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x14018BA60 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x14005D7CC (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(DXGK_VIRTUAL_GPU_PARAV *this)
{
  volatile signed __int32 *v1; // rdi
  __int64 **v2; // rsi
  __int64 *i; // rbx

  v1 = (volatile signed __int32 *)((char *)this + 288);
  v2 = (__int64 **)((char *)this + 320);
  DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
    if ( *((_DWORD *)i + 122) == 1 && !*((_BYTE *)i - 48) )
      VIDMM_EXPORT::VidMmSuspendResumeDevice(
        *(VIDMM_EXPORT **)(*(i - 13) + 760),
        (struct VIDMM_DEVICE *)i[84],
        0LL,
        *((_DWORD *)i + 122));
    i[40] = 0LL;
    ExReleasePushLockExclusiveEx(i + 39, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
