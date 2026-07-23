/*
 * XREFs of MiUnlockPoolCommitWs @ 0x140366EB0
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiUnlockPoolCommitWs(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( v1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *(_DWORD *)(v3 + 184) & 0xF;
      if ( v6 )
      {
        if ( v6 == 7 )
          v7 = 24LL;
        else
          v7 = v6 != 5 ? 0x48 : 0;
      }
      else
      {
        v7 = 48LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)CurrentPrcb->SelfmapLockHandle + v7));
    }
    else if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
           || v1 < 0xFFFFF6FB7DBED000uLL
           || v1 > 0xFFFFF6FB7DBEDFFFuLL
           || (v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v9 = 2 * (unsigned int)((__int64)(v1 + 0x90482413000LL) >> 3);
        v10 = ~(2 << (v9 & 0x1F)) & ~(1 << (v9 & 0x1F));
        v1 = v9 >> 5;
        _InterlockedAnd((volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * v1 + 4], v10);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v1, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v8 + 4 * ((v1 >> 3) & 0x1FF)));
    }
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  LOBYTE(v1) = 17;
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 72), v1);
  v4 = *(unsigned __int8 *)(a1 + 103);
  if ( (_BYTE)v4 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 103));
    __writecr8(v4);
  }
}
