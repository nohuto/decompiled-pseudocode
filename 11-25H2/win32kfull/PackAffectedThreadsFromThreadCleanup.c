/*
 * XREFs of PackAffectedThreadsFromThreadCleanup @ 0x140151B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140151B94 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140151D70 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 */

void __fastcall PackAffectedThreadsFromThreadCleanup(tagQ **a1)
{
  struct PTI_LIST *v2; // rax

  v2 = InAffectedThreadList((const struct tagTHREADINFO *)a1);
  if ( v2 )
    *((_QWORD *)v2 + 2) = 0LL;
  if ( tagQ::AreMultipleThreadsAttached(a1[59]) )
    PackAffectedThreadList((const struct tagTHREADINFO *)a1, 0LL);
}
