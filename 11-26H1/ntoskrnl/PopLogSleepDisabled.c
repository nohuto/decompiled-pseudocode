/*
 * XREFs of PopLogSleepDisabled @ 0x140945880
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1407C9270 (PopUpdateUpgradeInProgress.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopLogDisabledSleepReason @ 0x14094512C (PopLogDisabledSleepReason.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140CCF964 (PopInitPlatformSettings.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopGetReasonListByReasonCode @ 0x1409450F4 (PopGetReasonListByReasonCode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLogSleepDisabled(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *IptSaveArea; // rax

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
      IptSaveArea = stru_140F10070.IptSaveArea;
      if ( *(struct _KTHREAD **)stru_140F10070.IptSaveArea != (struct _KTHREAD *)&stru_140F10070.SystemAffinityTokenListHead )
        __fastfail(3u);
      *v10 = &stru_140F10070.SystemAffinityTokenListHead;
      v10[1] = IptSaveArea;
      *IptSaveArea = v10;
      stru_140F10070.IptSaveArea = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
