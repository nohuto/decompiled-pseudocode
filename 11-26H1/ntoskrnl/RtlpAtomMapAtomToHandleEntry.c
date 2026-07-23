/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1409FCED0
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x1409FCC40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1409FCD10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1409FD020 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // r8
  unsigned __int64 HandlePointer; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  volatile __int64 *v11; // rcx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 4 * a2;
  --CurrentThread->KernelApcDisable;
  v5 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 0x3FC) != 0 && (v6 = (__int64 *)ExpLookupHandleTableEntry(*(unsigned int **)(a1 + 16), v3)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v6);
        v7 = *v6;
        if ( (*v6 & 1) != 0 )
          break;
        if ( !v7 )
          goto LABEL_10;
        ExpBlockOnLockedHandleEntry(v5, v6, v7);
      }
    }
    while ( v7 != _InterlockedCompareExchange64(v6, v7 - 1, v7) );
    HandlePointer = ExGetHandlePointer(v6);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = HandlePointer;
    _InterlockedIncrement64(v6);
    v11 = (volatile __int64 *)(v9 + 48);
    _InterlockedOr(v13, 0);
    if ( *v11 )
      ExfUnblockPushLock(v11, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v10;
  }
  else
  {
LABEL_10:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
