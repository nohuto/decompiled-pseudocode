/*
 * XREFs of ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x140191170
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x1401911D4 (--1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ.c)
 */

void __fastcall Gre::Base::FreeSessionGlobalsArea(Gre::Base *this)
{
  __int64 v1; // rdx
  __int64 SessionState; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  PERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  SessionState = W32GetSessionState(this);
  v5 = *(PERESOURCE **)(SessionState + 88);
  if ( v5 )
  {
    if ( *v5 )
    {
      Gre::Base::BaseGlobalsNonPaged::~BaseGlobalsNonPaged(*v5);
      GreDeleteFastMutex((char *)*v5, v6, v7, v8);
      *v5 = 0LL;
    }
    GreDeleteFastMutex(*(char **)(SessionState + 88), v1, v3, v4);
    *(_QWORD *)(SessionState + 88) = 0LL;
  }
}
