/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x140857440
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     CmpVolumeContextLockExclusive @ 0x1408573DC (CmpVolumeContextLockExclusive.c)
 *     CmpVolumeContextUnlockExclusive @ 0x140857524 (CmpVolumeContextUnlockExclusive.c)
 *     CmpVolumeContextLockShared @ 0x140ABEBB0 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockShared @ 0x140ABEC1C (CmpVolumeContextUnlockShared.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v5; // r14
  char v7; // di
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  v5 = (_DWORD *)(a1 + 64);
  v7 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v8 = -1073741637;
LABEL_3:
    CmpVolumeContextLockExclusive(a1, a2, a3, a4);
    if ( *v5 != 1 )
      *v5 = 0;
    CmpVolumeContextUnlockExclusive(a1);
    goto LABEL_6;
  }
  CmpVolumeContextLockShared();
  if ( *v5 == 1 )
  {
    v8 = 0;
    CmpVolumeContextUnlockShared(a1);
    goto LABEL_6;
  }
  CmpVolumeContextUnlockShared(a1);
  v8 = PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 1);
  if ( v8 < 0 )
    goto LABEL_3;
  CmpVolumeContextLockExclusive(a1, a2, a3, a4);
  if ( *v5 != 1 )
  {
    *v5 = 1;
    v7 = 0;
  }
  CmpVolumeContextUnlockExclusive(a1);
  v8 = 0;
  if ( v7 )
    PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
LABEL_6:
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
