/*
 * XREFs of MiAllocateMappedWriterMdls @ 0x1404AF940
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiAllocateModWriterEntry @ 0x140398980 (MiAllocateModWriterEntry.c)
 *     MiUnlockPartitionMappedWriter @ 0x1404907C4 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140490FC8 (MiLockPartitionMappedWriter.c)
 */

__int64 __fastcall MiAllocateMappedWriterMdls(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // edi
  _DWORD *ModWriterEntry; // rax
  _QWORD *v12; // rdx
  bool v13; // zf

  if ( *(_DWORD *)(a1 + 748) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MiLockPartitionMappedWriter(a1, (__int64)CurrentThread, a3, a4);
  if ( *(_DWORD *)(a1 + 748) )
  {
    MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
    return 0LL;
  }
  LODWORD(v7) = 20;
  v8 = *(_QWORD *)(a1 + 22288) >> 15;
  if ( v8 >= 0x14 )
  {
    v7 = *(_QWORD *)(a1 + 22288) >> 15;
    if ( v8 > 0x80 )
      LODWORD(v7) = 128;
  }
  v9 = 0;
  *(_DWORD *)(a1 + 744) = v7;
  v10 = 0;
  while ( v10 < 4 )
  {
    ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
    if ( !ModWriterEntry )
    {
      if ( !v10 )
      {
        v9 = -1073741670;
        goto LABEL_18;
      }
      break;
    }
    ModWriterEntry[10] |= 1u;
    *((_QWORD *)ModWriterEntry + 7) = a1;
    v12 = *(_QWORD **)(a1 + 768);
    if ( *v12 != a1 + 760 )
      __fastfail(3u);
    *(_QWORD *)ModWriterEntry = a1 + 760;
    ++v10;
    *((_QWORD *)ModWriterEntry + 1) = v12;
    *v12 = ModWriterEntry;
    *(_QWORD *)(a1 + 768) = ModWriterEntry;
  }
  v13 = *(_BYTE *)(a1 + 800) == 0;
  *(_DWORD *)(a1 + 748) = v10;
  if ( !v13 )
  {
    *(_BYTE *)(a1 + 800) = 0;
    KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
  }
LABEL_18:
  MiUnlockPartitionMappedWriter(a1, (__int64)CurrentThread);
  return v9;
}
