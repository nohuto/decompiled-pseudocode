/*
 * XREFs of MiMarkRetpolineBits @ 0x140B1F348
 * Callers:
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B1F2FC (MiMarkKernelImageRetpolineBits.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140CFABB8 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     MiSplitBitmapPages @ 0x1402A5028 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140431D80 (RtlAreBitsClearEx.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     MiAddressToRetpolineBit @ 0x1404FF6D0 (MiAddressToRetpolineBit.c)
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
  if ( a3 || RtlAreBitsClearEx((unsigned __int64 *)&stru_140E2D150.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5) )
  {
    if ( (unsigned int)MiSplitBitmapPages(4LL) )
      RtlSetBitsEx((__int64)&stru_140E2D150.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5);
    else
      v8 = -1073741801;
  }
  else
  {
    RtlClearBitsEx((__int64)&stru_140E2D150.WaitBlock[2].WaitListEntry.Blink, v5, v7 - v5);
  }
  MmReleaseLoadLock(Lock);
  return v8;
}
