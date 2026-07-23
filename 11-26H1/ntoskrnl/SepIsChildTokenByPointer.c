/*
 * XREFs of SepIsChildTokenByPointer @ 0x140AB918C
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall SepIsChildTokenByPointer(__int64 a1, _BYTE *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  ULONG_PTR v8; // rax
  __int64 v9; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v8 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u, a3, a4);
  if ( !v8 )
    return 3221225473LL;
  v9 = *(_QWORD *)(v8 + 16);
  ObFastDereferenceObject((signed __int64 *)(Process + 584), v8, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 32) == v9 )
    *a2 = 1;
  return 0LL;
}
