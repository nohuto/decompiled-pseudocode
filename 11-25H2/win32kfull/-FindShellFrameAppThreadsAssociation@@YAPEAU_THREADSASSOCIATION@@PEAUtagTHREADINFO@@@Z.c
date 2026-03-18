/*
 * XREFs of ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x140196580
 * Callers:
 *     FindShellFrameThreadFromAssociation @ 0x1401964FC (FindShellFrameThreadFromAssociation.c)
 *     DisassociateShellFrameAppThreads @ 0x14019652C (DisassociateShellFrameAppThreads.c)
 * Callees:
 *     <none>
 */

struct _THREADSASSOCIATION *__fastcall FindShellFrameAppThreadsAssociation(struct tagTHREADINFO *a1, __int64 a2)
{
  struct _THREADSASSOCIATION *v3; // rdx
  struct _THREADSASSOCIATION *result; // rax

  v3 = (struct _THREADSASSOCIATION *)(W32GetUserSessionState(a1, a2) + 19104);
  for ( result = *(struct _THREADSASSOCIATION **)v3; result != v3; result = *(struct _THREADSASSOCIATION **)result )
  {
    if ( *((struct tagTHREADINFO **)result + 2) == a1 || *((struct tagTHREADINFO **)result + 3) == a1 )
      return result;
  }
  return 0LL;
}
