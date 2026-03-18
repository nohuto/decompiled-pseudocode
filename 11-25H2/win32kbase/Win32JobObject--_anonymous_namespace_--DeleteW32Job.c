/*
 * XREFs of Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401ACEF8
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall Win32JobObject::_anonymous_namespace_::DeleteW32Job(char *Buffer, __int64 a2)
{
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  char *v8; // rcx
  struct _RTL_ATOM_TABLE *v9; // rcx
  char **v10; // rcx
  char *v11; // rdx

  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      12,
      (__int64)&WPP_24285db1a4f43635ee6b597c88f141a8_Traceguids,
      (char)Buffer);
  }
  v8 = (char *)*((_QWORD *)Buffer + 7);
  if ( v8 )
    GreDeleteFastMutex(v8);
  v9 = (struct _RTL_ATOM_TABLE *)*((_QWORD *)Buffer + 2);
  if ( v9 )
    RtlDestroyAtomTable(v9);
  v10 = (char **)(W32GetUserSessionState(v9, a2) + 69096);
  v11 = *v10;
  if ( *v10 )
  {
    while ( v11 != Buffer )
    {
      v10 = (char **)v11;
      v11 = *(char **)v11;
      if ( !v11 )
        goto LABEL_18;
    }
    *v10 = *(char **)Buffer;
  }
LABEL_18:
  GreDeleteFastMutex(Buffer);
}
