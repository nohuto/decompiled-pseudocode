/*
 * XREFs of MiModifiedPageWriterExit @ 0x140528408
 * Callers:
 *     MiModifiedPageWriter @ 0x1404064D0 (MiModifiedPageWriter.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

LONG __fastcall MiModifiedPageWriterExit(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v3; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 i; // rax
  _QWORD *v12; // r15
  bool v13; // zf
  __int64 v14; // r8

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( *(_DWORD *)(a1 + 820) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 1080));
  v7 = *(_DWORD *)(a1 + 22296);
  if ( v7 )
  {
    v8 = (__int64 *)(a1 + 22304);
    v9 = v7;
    do
    {
      if ( *v8 )
      {
        --CurrentThread->SpecialApcDisable;
        v10 = 0LL;
        for ( i = *v8; (unsigned int)v10 < *(_DWORD *)(*v8 + 40); v10 = (unsigned int)(v10 + 1) )
        {
          v12 = *(_QWORD **)(*(_QWORD *)(i + 32) + 8 * v10);
          if ( v12 )
          {
            while ( *v12 == 97LL )
            {
              *(_BYTE *)(a1 + 801) = 1;
              v13 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v13
                && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v6, v5);
              }
              KeWaitForSingleObject((PVOID)(a1 + 1048), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
          }
          i = *v8;
        }
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v6, v5);
        }
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    v3 = a2;
  }
  KeCancelTimer((PKTIMER)(a1 + 1336));
  KeSetActualBasePriorityThread((__int64)CurrentThread, v3, v14);
  return KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
}
