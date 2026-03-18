/*
 * XREFs of ?FreeSessionGlobalsArea@Base@Gre@@YAXXZ @ 0x14006E100
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ @ 0x14015912C (--1BaseGlobalsNonPaged@Base@Gre@@QEAA@XZ.c)
 */

void __fastcall Gre::Base::FreeSessionGlobalsArea(Gre::Base *this)
{
  __int64 SessionState; // rdi
  PERESOURCE *v2; // rbx

  SessionState = W32GetSessionState(this);
  v2 = *(PERESOURCE **)(SessionState + 88);
  if ( v2 )
  {
    if ( *v2 )
    {
      Gre::Base::BaseGlobalsNonPaged::~BaseGlobalsNonPaged(*v2);
      GreDeleteFastMutex((char *)*v2);
      *v2 = 0LL;
    }
    GreDeleteFastMutex(*(char **)(SessionState + 88));
    *(_QWORD *)(SessionState + 88) = 0LL;
  }
}
