/*
 * XREFs of SepIsSiblingTokenByPointer @ 0x140AB9228
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 *     SepReleaseOrderedReadLocks @ 0x14047F9F8 (SepReleaseOrderedReadLocks.c)
 */

__int64 __fastcall SepIsSiblingTokenByPointer(__int64 a1, _BYTE *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rdi
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v8 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u, a3, a4);
  v9 = v8;
  if ( !v8 )
    return 3221225473LL;
  v10 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)(v8 + 24);
  ObFastDereferenceObject((signed __int64 *)(Process + 584), v8, 0x746C6644u);
  v12 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v10 )
  {
    if ( v12 == v11 )
    {
      *a2 = 1;
    }
    else
    {
      SepAcquireOrderedReadLocks(v9, (struct _KTHREAD *)a1);
      if ( (*(_DWORD *)(v9 + 200) & 0x20) == 0 && (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 216);
        v15 = *(_QWORD *)(v9 + 216);
        if ( (*(_BYTE *)(v15 + 40) & *(_BYTE *)(v14 + 40) & 0x40) != 0
          && v11 == *(_QWORD *)(v14 + 176)
          && v12 == *(_QWORD *)(v15 + 176) )
        {
          *a2 = 1;
        }
      }
      SepReleaseOrderedReadLocks(v9, a1);
    }
  }
  return 0LL;
}
