/*
 * XREFs of Win32JobObject::_anonymous_namespace_::Create @ 0x1401ACDAC
 * Callers:
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401AD054 (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z @ 0x1401AD160 (-GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1401A89B4 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     Win32JobObject::_anonymous_namespace_::AllocateW32Job @ 0x1401ACB44 (Win32JobObject--_anonymous_namespace_--AllocateW32Job.c)
 */

__int64 __fastcall Win32JobObject::_anonymous_namespace_::Create(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 W32Job; // rsi
  __int64 i; // rdi
  __int64 v5; // rdx
  char v6; // bp
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  W32Job = Win32JobObject::_anonymous_namespace_::AllocateW32Job(a1);
  if ( W32Job )
  {
    for ( i = *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36368); i; i = *(_QWORD *)(i + 360) )
    {
      if ( PsGetProcessJob(*(_QWORD *)i) == *(_QWORD *)(W32Job + 8) )
      {
        if ( (*(_DWORD *)(i + 12) & 0x2000000) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 79);
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
          || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v6 = 0;
        }
        v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
          LOBYTE(v9) = v7;
          LOBYTE(v10) = v6;
          WPP_RECORDER_AND_TRACE_SF_Dq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v10,
            v9,
            *(_QWORD *)(UserSessionState + 69144));
        }
        *(_QWORD *)(i + 752) = W32Job;
      }
    }
  }
  return W32Job;
}
