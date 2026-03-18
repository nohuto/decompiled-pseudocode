/*
 * XREFs of PspSetUILimitJobObject @ 0x1407F9E58
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PsSystemSetUILimitJobObject @ 0x1407F7910 (PsSystemSetUILimitJobObject.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x140615764 (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PspLockJobChain @ 0x140AAEBB4 (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140AAEE38 (PspUnlockJobChain.c)
 *     PspBindProcessSessionToJob @ 0x140AECEF8 (PspBindProcessSessionToJob.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140B79198 (PspDoesJobHierarchyPermitUILimits.c)
 */

__int64 __fastcall PspSetUILimitJobObject(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char v4; // r13
  __int64 v5; // r14
  unsigned int v9; // edi
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  _QWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+3Ch] [rbp-3Ch]
  __int64 v18; // [rsp+40h] [rbp-38h]
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = a3;
  v19 = 0;
  if ( (a3 & 0xFFFFFC00) == 0 )
  {
    PspLockJobChain(a1, a2, 0LL);
    v10 = 1;
    Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline();
    if ( !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a1) )
    {
      v9 = -1073741637;
LABEL_17:
      PspUnlockJobChain(a1, a2, 0LL);
      return v9;
    }
    if ( *(_DWORD *)(a1 + 576) == -2 )
    {
      v9 = -1073741790;
      goto LABEL_17;
    }
    PspBindProcessSessionToJob(a1);
    v13 = (_DWORD *)(a1 + 544);
    v19 = *(_DWORD *)(a1 + 576);
    if ( v19 <= 0xFFFFFFFD && *v13 != (_DWORD)v5 )
    {
      if ( (unsigned __int8)((__int64 (*)(void))IsWin32kJobNotifyCallOutPresent)() )
      {
        *v13 = v5;
        _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
        if ( (a4 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1556), 0x10u);
        PspUnlockJobChain(a1, a2, 0LL);
        v10 = 0;
        Win32kJobUpdateUIRestrictionsNotify(a1);
      }
      else
      {
        v15[0] = 0LL;
        v15[1] = 0LL;
        v17 = 0;
        PspUnlockJobChain(a1, a2, 1LL);
        v15[2] = a1;
        v4 = 1;
        v16 = 0;
        v18 = v5;
        v10 = 0;
        v9 = PsInvokeWin32Callout(6LL, v15, 1LL, &v19);
        if ( (v9 & 0x80000000) != 0 )
          goto LABEL_19;
      }
    }
    if ( !(unsigned __int8)IsWin32kJobNotifyCallOutPresent(v12, v11) )
    {
      *v13 = v5;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
    }
    v9 = 0;
    if ( v10 )
      goto LABEL_17;
    if ( !v4 )
      return v9;
LABEL_19:
    PspUnlockJobExclusive(a1, a2);
    return v9;
  }
  return (unsigned int)-1073741811;
}
