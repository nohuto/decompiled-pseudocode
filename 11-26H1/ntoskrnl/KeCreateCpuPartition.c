/*
 * XREFs of KeCreateCpuPartition @ 0x1405F6594
 * Callers:
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KeCreateCpuPartition(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 Pool2; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdi

  v2 = (unsigned __int16)KiMaximumGroups;
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = 0;
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = Pool2 + 112;
    *(_WORD *)(Pool2 + 112) = 1;
    *(_WORD *)(Pool2 + 114) = v2;
    *(_DWORD *)(Pool2 + 116) = 0;
    memset_0((void *)(Pool2 + 120), 0, 8 * v2);
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    *(_QWORD *)(v7 + 32) = a1;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_DWORD *)(v7 + 84) = 0;
    *(_QWORD *)(v7 + 56) = KiAvailableCpusWorkItemCallbackWrapper;
    *(_QWORD *)(v7 + 64) = v7 + 40;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 88) = KiAvailableCpusPartitionWorkItemCallback;
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_DWORD *)(v7 + 80) = 0;
    *(_QWORD *)(v7 + 96) = v7;
    *(_DWORD *)(v7 + 104) = a2;
    *a1 = v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
