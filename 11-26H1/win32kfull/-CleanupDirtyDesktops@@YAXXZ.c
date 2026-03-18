/*
 * XREFs of ?CleanupDirtyDesktops@@YAXXZ @ 0x140295BD8
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupDirtyDesktops(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *i; // rbx
  __int64 *v4; // rdi
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 63512); i; i = (_QWORD *)i[1] )
  {
    v4 = i + 2;
    while ( 1 )
    {
      v12 = *v4;
      if ( !*v4 )
        break;
      if ( (*(_DWORD *)(v12 + 48) & 0x10) != 0 )
      {
        v4 = (__int64 *)(v12 + 32);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v12, v2);
        v7 = *v4;
        if ( *(_QWORD *)(UserSessionState + 62968) == *v4 )
        {
          v8 = W32GetUserSessionState(v6, v7);
          DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v8 + 62968), v9);
          v7 = *v4;
        }
        v10 = *(_QWORD *)(i[3] + 8LL);
        if ( v10 )
        {
          v11 = (_QWORD *)(v10 + 24);
          if ( *v11 == v7 )
            DeferrableUnlockObjectAssignment<tagDESKTOP>(v11, v7);
        }
        LockObjectAssignment(v4, *(_QWORD *)(*v4 + 32));
      }
    }
  }
}
