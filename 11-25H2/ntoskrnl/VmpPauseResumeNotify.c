/*
 * XREFs of VmpPauseResumeNotify @ 0x14078FE78
 * Callers:
 *     VmPauseResumeNotify @ 0x14078F880 (VmPauseResumeNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 *     SmStoreExistsForProcess @ 0x140324354 (SmStoreExistsForProcess.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     VmpReleasePushLockExclusive @ 0x1404857AC (VmpReleasePushLockExclusive.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 */

__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // r13
  int v6; // r12d
  unsigned int v7; // eax
  int v8; // edi
  int v9; // edi
  int i; // esi
  unsigned int v11; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 144);
  v6 = 4;
  --CurrentThread->KernelApcDisable;
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 144));
  v7 = *(_DWORD *)(a1 + 152);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
    goto LABEL_24;
  }
  v9 = (v7 >> 1) & 3;
  if ( a2 )
  {
    if ( v9 >= a2 )
    {
      v8 = -1073741811;
      goto LABEL_24;
    }
  }
  else if ( !v9 )
  {
    v8 = 1075380276;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 152) = v7 | 1;
  VmpReleasePushLockExclusive(v3);
  if ( a2 )
  {
    for ( i = v9 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v6 = a2;
        goto LABEL_21;
      }
      if ( i == 1 )
      {
        if ( (unsigned __int64)(KeGetCurrentThread()->ApcState.Process[2].SchedulerAssistYieldBoostAllowedTime << 12) >> 20 > (unsigned int)VmPauseOutswapSizeCapMB )
          continue;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || *(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1204) == -1 && i != 3 )
        {
          continue;
        }
        SmStoreExistsForProcess((__int64)KeGetCurrentThread()->ApcState.Process);
      }
      v8 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 < 0 )
        goto LABEL_22;
    }
  }
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
  v6 = 0;
LABEL_21:
  v8 = 0;
LABEL_22:
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)v3);
  v11 = *(_DWORD *)(a1 + 152) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 152) = v11;
  if ( v6 != 4 )
    *(_DWORD *)(a1 + 152) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * v6)) & 6;
LABEL_24:
  VmpReleasePushLockExclusive(v3);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
