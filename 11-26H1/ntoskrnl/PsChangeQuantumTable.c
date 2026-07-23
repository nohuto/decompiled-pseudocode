/*
 * XREFs of PsChangeQuantumTable @ 0x140AB8200
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     KeSetQuantumProcess @ 0x1402028D4 (KeSetQuantumProcess.c)
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14042FFB0 (PspLockProcessListShared.c)
 *     MmIsThisAnNtAsSystem @ 0x1404E02A0 (MmIsThisAnNtAsSystem.c)
 *     PspComputeQuantum @ 0x140AB8418 (PspComputeQuantum.c)
 */

void __fastcall PsChangeQuantumTable(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int *v4; // rbx
  unsigned int v5; // eax
  char v7; // di
  int v8; // eax
  int v9; // edi
  char v10; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rdx
  struct _KTHREAD *i; // rbx
  char v14; // al
  __int64 v15; // r8

  v4 = &PspVariableQuantums_With_ShortQuantum;
  v5 = a2 & 3;
  v7 = a2;
  if ( v5 >= 2 )
    v5 = 2;
  PsPrioritySeparation = v5;
  if ( (KiVelocityFlags & 0x40000) == 0 )
    v4 = &PspVariableQuantums;
  v8 = a2 & 0xC;
  if ( (a2 & 0xC) == 0 )
  {
LABEL_18:
    if ( !MmIsThisAnNtAsSystem() )
      goto LABEL_7;
LABEL_23:
    KiVariableQuantumEnabled = 0;
    v4 = (int *)PspFixedQuantums;
    goto LABEL_8;
  }
  if ( v8 != 4 )
  {
    if ( v8 == 8 )
      goto LABEL_23;
    goto LABEL_18;
  }
LABEL_7:
  KiVariableQuantumEnabled = 1;
LABEL_8:
  v9 = v7 & 0x30;
  if ( !v9 )
    goto LABEL_26;
  if ( v9 == 16 )
  {
LABEL_10:
    v4 = (int *)((char *)v4 + 3);
    goto LABEL_11;
  }
  if ( v9 != 32 )
  {
LABEL_26:
    if ( MmIsThisAnNtAsSystem() )
      goto LABEL_10;
  }
LABEL_11:
  PspForegroundQuantum = *(_WORD *)v4;
  v10 = *((_BYTE *)v4 + 2);
  PspUseJobSchedulingClasses = v4 == (int *)byte_140BDFB0B;
  byte_140FD7AEE = v10;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessListShared((__int64)CurrentThread, a2, a3, a4);
    for ( i = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
          i != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96];
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      LOBYTE(v12) = i->SuspendEvent.Header.Size;
      v14 = PspComputeQuantum(&i[-1].SuspendEvent.Header.WaitListHead, v12);
      KeSetQuantumProcess(v15, v14);
    }
    PspUnlockProcessListShared((__int64)CurrentThread);
  }
}
