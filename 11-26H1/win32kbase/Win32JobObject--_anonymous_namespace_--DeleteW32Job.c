/*
 * XREFs of Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401CEFC0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall Win32JobObject::_anonymous_namespace_::DeleteW32Job(char *Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char *v10; // rcx
  struct _RTL_ATOM_TABLE *v11; // rcx
  __int64 v12; // rdx
  char *i; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      11,
      (__int64)&WPP_84e54da1802a3ab74b2776e8ce19e758_Traceguids,
      (char)Buffer);
  }
  v10 = (char *)*((_QWORD *)Buffer + 8);
  if ( v10 )
    GreDeleteFastMutex(v10, a2, a3, a4);
  v11 = (struct _RTL_ATOM_TABLE *)*((_QWORD *)Buffer + 3);
  if ( v11 )
    RtlDestroyAtomTable(v11);
  for ( i = (char *)(W32GetUserSessionState((_DWORD)v11, a2, a3) + 69088); *(_QWORD *)i; i = *(char **)i )
  {
    if ( *(char **)i == Buffer )
    {
      *(_QWORD *)i = *(_QWORD *)Buffer;
      break;
    }
  }
  GreDeleteFastMutex(Buffer, v12, v14, v15);
}
