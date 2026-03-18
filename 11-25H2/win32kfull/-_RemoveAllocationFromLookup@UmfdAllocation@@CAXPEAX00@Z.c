/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x14010A704
 * Callers:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x14010A694 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14010A754 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(void *a1, char *a2, void *a3)
{
  __int64 SessionState; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  SessionState = W32GetSessionState(a1, a2, a3);
  NSInstrumentation::CPointerHashTable::Remove(
    **(NSInstrumentation::CPointerHashTable ***)(SessionState + 104),
    a1,
    &v6);
  *(_QWORD *)(a2 - 12) = 0LL;
}
