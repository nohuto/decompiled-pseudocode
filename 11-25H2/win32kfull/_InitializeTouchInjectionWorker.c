/*
 * XREFs of _InitializeTouchInjectionWorker @ 0x14027B154
 * Callers:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x14027A704 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 *     NtUserInitializeTouchInjection @ 0x14029A1D0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     CleanupInjectedTouchProcess @ 0x14023CFF0 (CleanupInjectedTouchProcess.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x14027AF10 (Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline.c)
 *     CreatePseudoDigitizerDevice @ 0x14027BC78 (CreatePseudoDigitizerDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitializeTouchInjectionWorker(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 PseudoDigitizerDevice; // rbp
  UIPrivilegeIsolation *v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int128 v20; // xmm0
  __int64 v21; // rax
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = a1;
  v7 = ((unsigned __int64)(5000LL * gliQpcFreq) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  gullTouchInjectionMaxTimeOffset = (v7 + ((unsigned __int64)(5000LL * gliQpcFreq - v7) >> 1)) >> 9;
  if ( *(_QWORD *)(a3 + 880) )
    CleanupInjectedTouchProcess(a3);
  v8 = Win32AllocPoolWithQuotaZInit(104LL, 1953067861LL);
  v9 = v8;
  if ( !v8 )
    goto LABEL_19;
  PseudoDigitizerDevice = CreatePseudoDigitizerDevice((unsigned int)v5, a2, v8);
  if ( !PseudoDigitizerDevice )
    goto LABEL_19;
  if ( !(unsigned int)Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 456) + 368LL) = *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 456)
                                                                                + 368LL) & 0xFFFFFFEF | (16 * (*(_DWORD *)(a3 + 12) >> 31));
    }
    else
    {
      if ( !UIPrivilegeIsolation::Enforced(v11) || (v12 = 16, *(int *)(a3 + 12) >= 0) )
        v12 = 0;
      *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 456) + 368LL) = v12 | *(_DWORD *)(*(_QWORD *)(PseudoDigitizerDevice
                                                                                                  + 456)
                                                                                      + 368LL) & 0xFFFFFFEF;
    }
  }
  if ( !*(_QWORD *)(a3 + 880) )
  {
    v13 = Win32AllocPoolWithQuotaZInit(16LL, 1953067861LL);
    v16 = (_QWORD *)v13;
    if ( !v13 )
    {
LABEL_19:
      UserSetLastError(14);
      return 0LL;
    }
    *(_QWORD *)(v13 + 8) = a3;
    v17 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19264);
    *v16 = v17;
    *(_QWORD *)(W32GetUserSessionState(v17, v18) + 19264) = v16;
  }
  *(_QWORD *)(a3 + 880) = v9;
  v23[0] = v9 + 16;
  v23[1] = PseudoDigitizerDevice;
  HMAssignmentLock(v23, 0LL);
  v19 = v5;
  v20 = *(_OWORD *)(*(_QWORD *)(PseudoDigitizerDevice + 456) + 160LL);
  *(_DWORD *)(v9 + 24) = a2;
  *(_DWORD *)(v9 + 28) = v5;
  *(_OWORD *)v9 = v20;
  v21 = Win32AllocPoolWithQuotaZInit(12 * v5, 1953067861LL);
  if ( !v21 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 80) = v21;
  if ( (_DWORD)v5 )
  {
    do
    {
      v4 += 12LL;
      *(_DWORD *)(*(_QWORD *)(v9 + 80) + v4 - 4) = 0x40000;
      --v19;
    }
    while ( v19 );
  }
  return 1LL;
}
