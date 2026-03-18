/*
 * XREFs of RtlpLockAtomTable @ 0x140A416F0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1404A519C (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140803E00 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E0A60 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x140A41220 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140A412F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140A413C0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B58C84 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
