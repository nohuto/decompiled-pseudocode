/*
 * XREFs of MiMarkRetpolineBits @ 0x140B213C8
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B2137C (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140D00F38 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     RtlAreBitsClearEx @ 0x14041EDB0 (RtlAreBitsClearEx.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiAddressToRetpolineBit @ 0x1404F8EC0 (MiAddressToRetpolineBit.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  unsigned int v8; // esi
  struct _KTHREAD *Lock; // r14

  v5 = MiAddressToRetpolineBit(a1);
  v7 = MiAddressToRetpolineBit((v4 + 0xFFFF + v6) & 0xFFFFFFFFFFFF0000uLL);
  v8 = 0;
  Lock = MmAcquireLoadLock();
  if ( a3 || RtlAreBitsClearEx((unsigned __int64 *)&stru_140E2D2D0.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5) )
  {
    if ( (unsigned int)MiSplitBitmapPages(4LL) )
      RtlSetBitsEx((__int64)&stru_140E2D2D0.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5);
    else
      v8 = -1073741801;
  }
  else
  {
    RtlClearBitsEx((__int64)&stru_140E2D2D0.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5);
  }
  MmReleaseLoadLock(Lock);
  return v8;
}
