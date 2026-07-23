/*
 * XREFs of RtlpLockAtomTable @ 0x1409FCDE0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14045AA90 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14049E82C (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x1408098A0 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409B8CD0 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1409FCC40 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1409FCD10 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1409FD020 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B5BAA4 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 2), 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( !v8 )
    return 1;
  if ( (KiAbpGlobalState & 1) == 0 )
  {
    *((_BYTE *)v8 + 10) = 1;
    return 1;
  }
  AutoBoost::KiAbpPostAcquire(v8, v7);
  return 1;
}
