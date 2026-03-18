/*
 * XREFs of Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401CF1BC
 * Callers:
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401CF10C (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401CF0D4 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

__int64 *__fastcall Win32JobObject::_anonymous_namespace_::GetW32Job(int a1, int a2, int a3)
{
  __int64 *W32Job; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  char v14; // di
  char v15; // bp
  __int64 UserSessionState; // rax

  W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(a1, a2, a3);
  if ( !W32Job )
  {
    v5 = Win32AllocPoolZInitImpl(256LL, 0x48uLL, 0x626A7355u);
    W32Job = (__int64 *)v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 16) = a1;
      v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 69088);
      *W32Job = v9;
      *(_QWORD *)(W32GetUserSessionState(v9, v10, v11) + 69088) = W32Job;
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          *(_QWORD *)(UserSessionState + 69136),
          4u,
          0xEu,
          0xAu,
          (__int64)&WPP_84e54da1802a3ab74b2776e8ce19e758_Traceguids,
          W32Job,
          a1);
      }
    }
  }
  return W32Job;
}
