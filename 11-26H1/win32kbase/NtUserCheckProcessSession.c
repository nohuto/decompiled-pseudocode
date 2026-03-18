/*
 * XREFs of NtUserCheckProcessSession @ 0x1401E2390
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DwmCheckProcessSession @ 0x1401747B0 (_DwmCheckProcessSession.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserCheckProcessSession(int a1)
{
  __int64 v1; // rdi
  int v2; // edx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-50h]

  v1 = a1;
  v6 = 0LL;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterSharedCrit(0LL, 1LL, v4, v5);
    if ( (unsigned int)IsCurrentProcessDwm(v10) )
    {
      v16 = DwmCheckProcessSession(v1);
      if ( v16 >= 0 )
      {
        v6 = 1LL;
        goto LABEL_11;
      }
      v11 = RtlNtStatusToDosError(v16);
    }
    else
    {
      v11 = 5;
    }
    UserSetLastError(v11);
LABEL_11:
    UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
    return v6;
  }
  if ( !UserIsCurrentProcessDwm(v3, v2, v4) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v17, v1, 0, v7, 1, 0LL);
  LOBYTE(v6) = v18 >= 0;
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v17, v9);
  return v6;
}
