/*
 * XREFs of ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140151B94
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x140151B50 (PackAffectedThreadsFromThreadCleanup.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140151D70 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

struct PTI_LIST *__fastcall InAffectedThreadList(const struct tagTHREADINFO *a1, __int64 a2)
{
  struct PTI_LIST *v3; // rdx
  struct PTI_LIST *result; // rax

  v3 = (struct PTI_LIST *)(W32GetUserSessionState(a1, a2) + 16880);
  for ( result = *(struct PTI_LIST **)v3; result != v3; result = *(struct PTI_LIST **)result )
  {
    if ( a1 == *((const struct tagTHREADINFO **)result + 2) )
      return result;
  }
  return 0LL;
}
