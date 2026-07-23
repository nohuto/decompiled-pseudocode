/*
 * XREFs of PopInitPlatformSettings @ 0x140CD5B14
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopInitPlatformSettings(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  _BYTE *v4; // rdi
  bool v5; // si
  NTSTATUS v6; // ebx
  _DWORD *Pool2; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  _DWORD SystemInformation[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+48h] [rbp-18h]

  v19 = 0;
  PopAcquirePolicyLock(a1, a2, a3, a4);
  v4 = 0LL;
  SystemInformation[0] = 1094930505;
  v18 = 1346584902LL;
  ReturnLength = 0;
  v5 = 0;
  SystemInformation[1] = 1;
  v6 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  if ( v6 == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, ReturnLength, 0x206D654Du);
    v4 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      PopReleasePolicyLock();
      goto LABEL_36;
    }
    *Pool2 = 1094930505;
    Pool2[1] = 1;
    Pool2[2] = 1346584902;
    Pool2[3] = ReturnLength - 16;
    v6 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
    if ( v6 >= 0 )
    {
      if ( v4[24] >= 3u )
        PopFirmwarePlatformRole = (unsigned __int8)v4[61];
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v9, v8) )
        stru_140E67200.WaitBlockFill6[80] = 1;
      if ( PopPlatformRoleOverride != -1 )
        PopFirmwarePlatformRole = PopPlatformRoleOverride;
      if ( PopPlatformAoAcOverride != -1 )
        stru_140E67200.WaitBlockFill6[80] = PopPlatformAoAcOverride != 0;
      if ( (HvlpFlags & 2) != 0 )
      {
        v10 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
        if ( (HvlpRootFlags & 0x400) != 0 )
        {
          LOBYTE(v10) = 31;
          if ( (HvlEnlightenments & 0x20000000) != 0 )
            LOBYTE(v10) = 23;
        }
        PopLogSleepDisabled(18, v10, 0LL, 0LL);
      }
      v11 = stru_140E67200.WaitBlockFill6[80];
      if ( stru_140E67200.WaitBlockFill6[80] )
      {
        if ( !InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
          goto LABEL_25;
      }
      else
      {
        PopLogSleepDisabled(19, 32, 0LL, 0LL);
      }
      v11 = 0;
      stru_140E67200.WaitBlockFill6[80] = 0;
LABEL_25:
      *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] = 1;
      if ( !v11 )
        KiForceIdleDisabled = 1;
      v12 = PopFirmwarePlatformRole;
      if ( (unsigned int)PopFirmwarePlatformRole > 8 )
      {
        v12 = 0;
        PopFirmwarePlatformRole = 0;
      }
      v5 = qword_140E67860 != 0;
      *(_DWORD *)&stru_140E67200.WaitBlockFill11[84] = v12;
      v6 = 0;
      PopReleasePolicyLock();
      goto LABEL_30;
    }
  }
  PopReleasePolicyLock();
  if ( v6 < 0 )
LABEL_36:
    KeBugCheckEx(0xA0u, 0xEuLL, v6, 0LL, 0LL);
LABEL_30:
  if ( v5 )
  {
    LOBYTE(v14) = stru_140E67200.WaitBlockFill6[80];
    guard_dispatch_icall_no_overrides(v14, v13);
  }
  PopAdaptiveStandbyInitialize();
  if ( v4 )
    ExFreePoolWithTag(v4, 0x206D654Du);
  return (unsigned int)v6;
}
