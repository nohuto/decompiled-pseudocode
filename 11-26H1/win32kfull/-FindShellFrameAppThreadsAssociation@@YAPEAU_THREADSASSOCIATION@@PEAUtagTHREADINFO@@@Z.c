/*
 * XREFs of ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x140149DDC
 * Callers:
 *     FindShellFrameThreadFromAssociation @ 0x140149BB4 (FindShellFrameThreadFromAssociation.c)
 *     DisassociateShellFrameAppThreads @ 0x140149D88 (DisassociateShellFrameAppThreads.c)
 * Callees:
 *     <none>
 */

struct _THREADSASSOCIATION *__fastcall FindShellFrameAppThreadsAssociation(struct tagTHREADINFO *a1, __int64 a2)
{
  struct _THREADSASSOCIATION *v3; // rcx
  struct _THREADSASSOCIATION *result; // rax

  v3 = (struct _THREADSASSOCIATION *)(W32GetUserSessionState(a1, a2) + 19144);
  for ( result = *(struct _THREADSASSOCIATION **)v3; result != v3; result = *(struct _THREADSASSOCIATION **)result )
  {
    if ( *((struct tagTHREADINFO **)result + 2) == a1 || *((struct tagTHREADINFO **)result + 3) == a1 )
      return result;
  }
  return 0LL;
}
