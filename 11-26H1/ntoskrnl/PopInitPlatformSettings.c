/*
 * XREFs of PopInitPlatformSettings @ 0x140CCF964
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopInitPlatformSettings(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  _BYTE *v4; // rdi
  bool v5; // si
  int SystemInformation; // ebx
  _DWORD *Pool2; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  unsigned __int8 v11; // al
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+48h] [rbp-18h]

  v18 = 0;
  PopAcquirePolicyLock(a1, a2, a3, a4);
  v4 = 0LL;
  v16[0] = 1094930505;
  v17 = 1346584902LL;
  v5 = 0;
  v16[1] = 1;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v16);
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 0LL, 0x206D654Du);
    v4 = Pool2;
    if ( !Pool2 )
    {
      SystemInformation = -1073741670;
      PopReleasePolicyLock();
      goto LABEL_38;
    }
    *Pool2 = 1094930505;
    Pool2[1] = 1;
    Pool2[2] = 1346584902;
    Pool2[3] = -16;
    SystemInformation = ZwQuerySystemInformation(76LL, (__int64)Pool2);
    if ( SystemInformation >= 0 )
    {
      if ( v4[24] >= 3u )
        PopFirmwarePlatformRole = (unsigned __int8)v4[61];
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v9, v8) )
        stru_140E66FF0.WaitBlockFill6[84] = 1;
      if ( PopPlatformRoleOverride != -1 )
        PopFirmwarePlatformRole = PopPlatformRoleOverride;
      if ( PopPlatformAoAcOverride != -1 )
        stru_140E66FF0.WaitBlockFill6[84] = PopPlatformAoAcOverride != 0;
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
      v11 = stru_140E66FF0.WaitBlockFill6[84];
      if ( stru_140E66FF0.WaitBlockFill6[84] )
      {
        if ( !(_DWORD)InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
          goto LABEL_25;
      }
      else
      {
        PopLogSleepDisabled(19, 32, 0LL, 0LL);
      }
      v11 = 0;
      stru_140E66FF0.WaitBlockFill6[84] = 0;
LABEL_25:
      *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] = 1;
      if ( !v11 )
        KiForceIdleDisabled = 1;
      v12 = PopFirmwarePlatformRole;
      if ( (unsigned int)PopFirmwarePlatformRole > 8 )
      {
        v12 = 0;
        PopFirmwarePlatformRole = 0;
      }
      v5 = qword_140E67600 != 0;
      *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[88] = v12;
      SystemInformation = 0;
      PopReleasePolicyLock();
      goto LABEL_30;
    }
  }
  PopReleasePolicyLock();
  if ( SystemInformation < 0 )
LABEL_38:
    KeBugCheckEx(0xA0u, 0xEuLL, SystemInformation, 0LL, 0LL);
LABEL_30:
  if ( v5 )
  {
    LOBYTE(v14) = stru_140E66FF0.WaitBlockFill6[84];
    guard_dispatch_icall_no_overrides(v14, v13);
  }
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    PopAdaptiveStandbyInitialize();
  if ( v4 )
    ExFreePoolWithTag(v4, 0x206D654Du);
  return (unsigned int)SystemInformation;
}
