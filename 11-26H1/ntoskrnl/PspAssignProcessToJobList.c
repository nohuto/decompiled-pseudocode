/*
 * XREFs of PspAssignProcessToJobList @ 0x140AC7750
 * Callers:
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     PsAssignProcessToJobObject @ 0x140AC7930 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x140AC7F7C (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall PspAssignProcessToJobList(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 i; // rbx
  void *v8; // rbp
  unsigned int v9; // eax
  int v10; // edi

  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; ++i )
  {
    if ( i >= a3 )
      return 0LL;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
      break;
    v8 = *(void **)(a2 + 8 * i);
    v9 = PsAssignProcessToJobObject(v8, a1);
    v10 = v9;
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobAssignProcess(v8, a1, v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  return 3221225547LL;
}
