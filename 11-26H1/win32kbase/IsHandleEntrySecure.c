/*
 * XREFs of IsHandleEntrySecure @ 0x1401CE84C
 * Callers:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401CE67C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401CF0D4 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *CurrentProcessWin32Process; // rax
  unsigned int v10; // esi
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned int JobProvidingUILimit; // r15d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdi
  __int64 ProcessJob; // rbx
  __int64 W32Job; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // edx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 19864);
  v7 = 5LL * (unsigned int)((a2 - *(_QWORD *)(UserSessionState + 19920)) >> 5);
  CurrentProcessWin32Process = (__int64 *)PsGetCurrentProcessWin32Process(v8);
  v10 = 0;
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
  {
    v12 = *((unsigned __int16 *)&unk_14025552C + 12 * *(unsigned __int8 *)(a2 + 24));
    if ( (v12 & 2) != 0 )
    {
      v13 = *(__int64 **)(v6 + 8 * v7 + 8);
    }
    else
    {
      if ( (v12 & 1) == 0 )
        return 0LL;
      v14 = *(_QWORD *)(v6 + 8 * v7 + 8);
      if ( !v14 )
        return 0LL;
      v13 = *(__int64 **)(v14 + 456);
    }
    if ( v13 )
    {
      if ( v13 == CurrentProcessWin32Process || *v13 == *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40) )
        return 1LL;
      JobProvidingUILimit = 0;
      IsEnabledDeviceUsageNoInline = Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline();
      v17 = *v11;
      if ( IsEnabledDeviceUsageNoInline )
      {
        JobProvidingUILimit = KfGetJobProvidingUILimit(v17, 1LL);
        v18 = JobProvidingUILimit == (unsigned int)KfGetJobProvidingUILimit(*v13, 1LL);
      }
      else
      {
        v19 = *v13;
        ProcessJob = PsGetProcessJob(v17);
        v18 = ProcessJob == PsGetProcessJob(v19);
      }
      if ( v18 )
        return 1LL;
      if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( JobProvidingUILimit )
        {
          W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(JobProvidingUILimit);
          if ( !W32Job )
            return v10;
          v22 = *(_QWORD **)(W32Job + 64);
          if ( !v22 )
            return v10;
          v23 = *(_DWORD *)(W32Job + 56);
          v24 = 0;
          if ( !v23 )
            return v10;
          while ( *v22 != a1 )
          {
            ++v24;
            ++v22;
            if ( v24 >= v23 )
              return v10;
          }
        }
        return 1;
      }
      v26 = v11[94];
      if ( v26 )
      {
        v27 = *(_QWORD **)(v26 + 64);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v26 + 56);
          if ( v28 )
          {
            while ( *v27 != a1 )
            {
              ++v10;
              ++v27;
              if ( v10 >= v28 )
                return 0LL;
            }
            return 1LL;
          }
        }
      }
    }
    return 0LL;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 231);
  return 1LL;
}
