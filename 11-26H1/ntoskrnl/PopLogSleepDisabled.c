/*
 * XREFs of PopLogSleepDisabled @ 0x1409C11F0
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1407CC310 (PopUpdateUpgradeInProgress.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x1409C0A9C (PopLogDisabledSleepReason.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140CD5B14 (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PopGetReasonListByReasonCode @ 0x1409C0A64 (PopGetReasonListByReasonCode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *FirstArgument; // rax

  v8 = 0;
  if ( PopGetReasonListByReasonCode(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(Pool2 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(Pool2 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(Pool2 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(Pool2 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(Pool2 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(Pool2 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(Pool2 + 28) = a4;
        memmove((void *)(Pool2 + 32), a3, a4);
      }
      FirstArgument = PpmIdlePolicyLock.FirstArgument;
      if ( *(struct _KTHREAD **)PpmIdlePolicyLock.FirstArgument != (struct _KTHREAD *)&PpmIdlePolicyLock.SystemCallNumber )
        __fastfail(3u);
      *v10 = &PpmIdlePolicyLock.SystemCallNumber;
      v10[1] = FirstArgument;
      *FirstArgument = v10;
      PpmIdlePolicyLock.FirstArgument = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
