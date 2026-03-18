/*
 * XREFs of IsHandleEntrySecure @ 0x1400A2040
 * Callers:
 *     ValidateHandleSecure @ 0x1400A1F30 (ValidateHandleSecure.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x140161120 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned int v9; // edi
  _QWORD *v10; // r14
  __int64 v12; // rax
  unsigned int v13; // esi
  __int16 v14; // dx
  _QWORD *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // edx
  _QWORD *v22; // rax
  unsigned int v23; // r8d
  unsigned int v24; // edx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(UserSessionState + 19832);
  v6 = 5LL * (unsigned int)((a2 - *(_QWORD *)(UserSessionState + 19888)) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  v9 = 0;
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process || !CurrentProcessWin32Process )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 231LL);
    return 1LL;
  }
  v12 = *(unsigned __int8 *)(a2 + 24);
  v13 = 1;
  v14 = *((_WORD *)&unk_14024703C + 12 * v12);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(_QWORD **)(v5 + 8 * v6 + 8);
  }
  else
  {
    if ( (v14 & 1) == 0 )
      return 0LL;
    v16 = *(_QWORD *)(v5 + 8 * v6 + 8);
    if ( !v16 )
      return 0LL;
    v15 = *(_QWORD **)(v16 + 464);
  }
  if ( !v15 )
    return 0LL;
  if ( v15 != v10 && *v15 != *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
  {
    v17 = ((__int64 (*)(void))PsGetProcessJob)();
    if ( PsGetProcessJob(*v10) != v17 )
    {
      IsEnabledDeviceUsageNoInline = Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline();
      v19 = v10[94];
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v19 && (v22 = *(_QWORD **)(v19 + 56)) != 0LL && (v23 = *(_DWORD *)(v19 + 48), v24 = 0, v23) )
        {
          while ( *v22 != a1 )
          {
            ++v24;
            ++v22;
            if ( v24 >= v23 )
              return 0;
          }
        }
        else
        {
          return 0;
        }
        return v13;
      }
      if ( v19 )
      {
        v20 = *(_QWORD **)(v19 + 56);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v19 + 48);
          if ( v21 )
          {
            while ( *v20 != a1 )
            {
              ++v9;
              ++v20;
              if ( v9 >= v21 )
                return 0LL;
            }
            return v13;
          }
        }
      }
      return 0LL;
    }
  }
  return v13;
}
