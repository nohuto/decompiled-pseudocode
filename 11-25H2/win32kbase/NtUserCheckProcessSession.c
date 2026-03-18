/*
 * XREFs of NtUserCheckProcessSession @ 0x14016ECA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DwmCheckProcessSession @ 0x14013EE60 (_DwmCheckProcessSession.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserCheckProcessSession(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  ULONG v6; // ecx
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]

  v1 = a1;
  v4 = 0LL;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterSharedCrit(0, 1u);
    if ( (unsigned int)IsCurrentProcessDwm() )
    {
      v8 = DwmCheckProcessSession(v1);
      if ( v8 >= 0 )
      {
        v4 = 1LL;
        goto LABEL_11;
      }
      v6 = RtlNtStatusToDosError(v8);
    }
    else
    {
      v6 = 5;
    }
    UserSetLastError(v6);
LABEL_11:
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
    return v4;
  }
  if ( !UserIsCurrentProcessDwm(v3, v2) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  CLockProcessByPid::CLockProcessByPid(v9, v1, 0LL);
  LOBYTE(v4) = v10 >= 0;
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v9);
  return v4;
}
