/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x140A417E0
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x140A41220 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140A412F0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 *v7; // rbx
  unsigned __int64 HandlePointer; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  volatile __int64 *v12; // rcx
  __int64 v13; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)(4 * a2);
  --CurrentThread->KernelApcDisable;
  v6 = *(_QWORD *)(a1 + 16);
  if ( (v4 & 0x3FC) != 0
    && (v7 = (__int64 *)ExpLookupHandleTableEntry(*(unsigned int **)(a1 + 16), (unsigned int)v4)) != 0LL )
  {
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v7);
        a3 = *v7;
        if ( (*v7 & 1) != 0 )
          break;
        if ( !a3 )
          goto LABEL_10;
        ExpBlockOnLockedHandleEntry(v6, v7, a3);
      }
    }
    while ( a3 != _InterlockedCompareExchange64(v7, a3 - 1, a3) );
    HandlePointer = ExGetHandlePointer(v7);
    v10 = *(_QWORD *)(a1 + 16);
    v11 = HandlePointer;
    _InterlockedIncrement64(v7);
    v12 = (volatile __int64 *)(v10 + 48);
    _InterlockedOr(v15, 0);
    v13 = *v12;
    if ( *v12 )
      ExfUnblockPushLock(v12, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v9);
    return v11;
  }
  else
  {
LABEL_10:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, a3);
    return 0LL;
  }
}
