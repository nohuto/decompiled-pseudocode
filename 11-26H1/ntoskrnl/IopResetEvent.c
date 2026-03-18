/*
 * XREFs of IopResetEvent @ 0x140455C40
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     IopFreeBandwidthContract @ 0x140B6E8DC (IopFreeBandwidthContract.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopResetEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // esi

  result = *(unsigned int *)(a1 + 80);
  if ( (result & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
