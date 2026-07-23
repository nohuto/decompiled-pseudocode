/*
 * XREFs of MiDeleteMappedMdls @ 0x140490F1C
 * Callers:
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x1402AE950 (MiFreeModWriterEntry.c)
 *     MiUnlockPartitionMappedWriter @ 0x1404907C4 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140490FC8 (MiLockPartitionMappedWriter.c)
 */

void __fastcall MiDeleteMappedMdls(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD **v3; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  MiLockPartitionMappedWriter(a1, CurrentThread);
  v3 = (_QWORD **)(a1 + 760);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
    MiFreeModWriterEntry(v4, 1u);
    MiLockPartitionMappedWriter(a1, CurrentThread);
  }
  *(_DWORD *)(a1 + 744) = 0;
  MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
}
