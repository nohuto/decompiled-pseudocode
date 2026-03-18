/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x140242860
 * Callers:
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupDirtyDesktops(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *i; // rbx
  _QWORD *v4; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rcx

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 63520); i; i = (_QWORD *)i[1] )
  {
    v4 = i + 2;
    while ( 1 )
    {
      v11 = (_QWORD *)*v4;
      if ( !*v4 )
        break;
      if ( (v11[6] & 0x10) != 0 )
      {
        v4 = v11 + 4;
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v11, v2);
        v7 = (_QWORD *)*v4;
        if ( *(_QWORD *)(UserSessionState + 62976) == *v4 )
        {
          v8 = W32GetUserSessionState(v6, v7);
          DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v8 + 62976));
          v7 = (_QWORD *)*v4;
        }
        v9 = *(_QWORD *)(i[7] + 8LL);
        if ( v9 )
        {
          v10 = (_QWORD **)(v9 + 24);
          if ( *v10 == v7 )
            DeferrableUnlockObjectAssignment<tagDESKTOP>(v10);
        }
        LockObjectAssignment(v4, *(_QWORD *)(*v4 + 32LL));
      }
    }
  }
}
